PKGDIR ?= ../..
L4DIR  ?= $(PKGDIR)/../..

TARGET := shared.so capability.so env.so

SRC_CC_shared.so     := ../../wrap/output/shared_lua.cc
SRC_CC_capability.so := ../../wrap/output/capability_lua.cc
SRC_CC_env.so        := ../../wrap/output/env_lua.cc

REQUIRES_LIBS = lua++

PRIVATE_INCDIR = $(PKGDIR)/shared $(PKGDIR)/wrap/output

include $(L4DIR)/mk/lib.mk
