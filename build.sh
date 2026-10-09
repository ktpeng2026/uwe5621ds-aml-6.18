#!/bin/bash

make KDIR=/lib/modules/"$(uname -r)"/build clean

make KDIR=/lib/modules/"$(uname -r)"/build \
        ARCH=arm64 \
        -j"$(nproc)"

sudo install -m 0644 \
        unisocwcn/uwe5621_bsp_sdio.ko \
        unisocwifi/sprdwl_ng.ko \
        tty-sdio/sprdbt_tty.ko \
        "/lib/modules/$(uname -r)/extra/uwe5621/"

sudo depmod -a

modinfo uwe5621_bsp_sdio
modinfo sprdwl_ng
modinfo sprdbt_tty

modprobe uwe5621_bsp_sdio
modprobe sprdwl_ng
modprobe sprdbt_tty
