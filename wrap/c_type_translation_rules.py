from text import code
from type_translator import TypeTranslator


def is_cap(t):
    return t.is_record() and t.is_template_instantiation('L4::Cap')


def is_cap_indirection(t):
    return t.is_record_indirection() and t.pointee().is_template_instantiation('L4::Cap')


class CTypeTranslator(TypeTranslator):
    rule = TypeTranslator.rule

    @rule(lambda t: is_cap(t) or is_cap_indirection(t))
    def target(cls, t, args):
        return 'l4_cap_idx_t'

    @rule(lambda t: is_cap(t))
    def input(cls, t, args):
        return f"{{interm}} = {t}({{inp}});"

    @rule(lambda t: is_cap_indirection(t))
    def input(cls, t, args):
        return code(
            f"""
            auto _{{interm}} = {t.pointee().without_const()}({{inp}});
            {{interm}} = &_{{interm}};
            """)

    @rule(lambda t: is_cap(t))
    def output(cls, t, args):
        return "return {outp}.cap();"

    @rule(lambda t: is_cap_indirection(t))
    def output(cls, t, args):
        return "return {outp}->cap();"
