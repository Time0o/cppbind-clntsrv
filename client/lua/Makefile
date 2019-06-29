PKGDIR ?= ../..
L4DIR  ?= $(PKGDIR)/../..

TARGET = clntsrv-client-lua

SRC_CC_clntsrv-client-lua = client.cc \
                            ../../wrap/output/shared_lua.cc \
                            ../../wrap/output/capability_lua.cc \
                            ../../wrap/output/env_lua.cc

REQUIRES_LIBS = lua++ libc_be_fs_noop libc_support_misc

PRIVATE_INCDIR = $(PKGDIR)/shared $(PKGDIR)/wrap/output

include $(L4DIR)/mk/prog.mk
