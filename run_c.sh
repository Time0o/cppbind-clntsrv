#!/bin/sh

make E=clntsrv_c qemu MODULE_SEARCH_PATH="${PWD}/../build-fiasco-i386:${PWD}/../l4/pkg/clntsrv/client/c"
