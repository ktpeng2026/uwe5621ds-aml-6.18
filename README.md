# UWE5621 Linux 6.18 driver

This directory contains the UWE5621 SDIO Wi-Fi/Bluetooth driver port for a
generic Ubuntu arm64 kernel.  It is based on the vendor Armbian Linux 6.1
driver and is built as three out-of-tree modules.

## Build

Prepare the target kernel tree first (`make ARCH=arm64 defconfig prepare
modules_prepare`), then run:

```sh
make KDIR=/path/to/linux-6.18.18 \
     ARCH=arm64 \
     CROSS_COMPILE=aarch64-linux-gnu-
```

The firmware path defaults to `/lib/firmware/uwe5621`.  It can be overridden
when invoking the kernel build with `UNISOC_FW_PATH_CONFIG=/other/path`.

The expected modules are:

- `uwe5621_bsp_sdio.ko`
- `sprdwl_ng.ko`
- `sprdbt_tty.ko`

Board-specific power, reset, wakeup GPIOs and the SDIO host still have to be
described by the target board's device tree.
