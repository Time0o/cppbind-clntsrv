PKGDIR ?= ../..
L4DIR  ?= $(PKGDIR)/../..

TARGET = clntsrv-client-c

SRC_C_clntsrv-client-c  = client.c
SRC_CC_clntsrv-client-c = ../../wrap/output/shared_c.cc \
                          ../../wrap/output/capability_c.cc \
                          ../../wrap/output/env_c.cc

PRIVATE_INCDIR = $(PKGDIR)/shared $(PKGDIR)/wrap/output

include $(L4DIR)/mk/prog.mk
