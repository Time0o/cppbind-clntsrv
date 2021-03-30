#!/usr/bin/env python3

import subprocess
import argparse
import os


L4RE_DIR='../../../..'
PKG_DIR='l4/pkg'
BUILD_DIR='build-i386'


if __name__ == '__main__':
    class ToWrap:
        def __init__(self,
                     path,
                     include_dir=None,
                     constants=None,
                     functions=None,
                     records=None,
                     template_instantiations=None):

            self._path = os.path.join(L4RE_DIR, PKG_DIR, path)
            self._include_dir = include_dir
            self._constants = constants
            self._functions = functions
            self._records = records
            self._template_instantiations = template_instantiations

        def args(self):
            args = [self._path]

            if self._include_dir is not None:
                args += [f'--extra-arg=-I{self._include_dir}']

            if self._constants is not None:
                for c in self._constants:
                    #args += ['--wrap-rule', f'const:hasName("{c}")'] # TODO
                    args += ['--wrap-rule', f'const:anything()'] # TODO

            if self._functions is not None:
                for f in self._functions:
                    args += ['--wrap-rule', f'function:hasName("{f}")']

            if self._records is not None:
                for r in self._records:
                    args += ['--wrap-rule', f'record:hasName("{r}")']

            if self._template_instantiations is not None:
                args += ['--wrap-template-instantiations',
                         self._template_instantiations]

            return args

    to_wrap_list = [
        ToWrap('clntsrv/shared/shared.h',
               include_dir='../shared',
               records=['Calc']),
        ToWrap('l4re-core/l4sys/include/cxx/capability.h',
               constants=['Cap_type', 'No_init_type', 'l4_default_caps_t'],
               records=['Cap'],
               template_instantiations='capability.tcc'),
        ToWrap('l4re-core/l4re/include/env',
               functions=['env'],
               records=['Env'],
               template_instantiations='env.tcc')
    ]

    for backend in ['c', 'lua']:
        cppbind_args = [
            'cppbind',
            '--backend', backend
        ]

        def l4re_include(path):
            return f'--extra-arg=-I{os.path.join(L4RE_DIR, BUILD_DIR, path)}'

        cppbind_args += [
            l4re_include("include/x86/l4f"),
            l4re_include("include/x86"),
            l4re_include("include")
        ]

        for to_wrap in to_wrap_list:
            cppbind_args += to_wrap.args()

        cppbind_args += [
            '--wrap-skip-unwrappable',
            '--output-custom-type-translation-rules', f'{backend}_type_translation_rules.py',
            '--output-noexcept',
            '--output-directory', 'output',
            '--output-cpp-header-extension', '.h',
            '--output-cpp-source-extension', '.cc',
            '--lua-include-cpp',
            '--verbosity', '2',
            '--'
        ]

        subprocess.run(cppbind_args, check=True)
