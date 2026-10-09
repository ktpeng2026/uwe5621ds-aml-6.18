# UWE5621 Linux 6.18 driver

This directory contains the UWE5621 SDIO Wi-Fi/Bluetooth driver port for a
generic Ubuntu arm64 kernel.  It is based on the vendor Armbian Linux 6.1
driver and is built as three out-of-tree modules.

## Build

Prepare the target kernel tree first (`make ARCH=arm64 defconfig prepare
modules_prepare`), then run:

sudo apt update
sudo apt install -y \
    build-essential \
    bc bison flex \
    libssl-dev libelf-dev \
    dwarves git rsync

ls -l /lib/modules/"$(uname -r)"/build

test -f /lib/modules/"$(uname -r)"/build/Makefile && echo "Makefile OK"
test -f /lib/modules/"$(uname -r)"/build/Module.symvers && echo "Module.symvers OK"

apt search "linux-headers-$(uname -r)"
sudo apt install "linux-headers-$(uname -r)"

```sh
make KDIR=/lib/modules/"$(uname -r)"/build \
        ARCH=arm64 \
        -j"$(nproc)"
```

The firmware path defaults to `/lib/firmware/uwe5621/`.  It can be overridden
when invoking the kernel build with `UNISOC_FW_PATH_CONFIG=/other/path`.

The SDIO WCN driver expects the following external firmware file:

- `/lib/firmware/uwe5621/wcnmodem.bin`

The path must end with `/` because the vendor driver appends the firmware
filename directly.  With the Rockchip/device-tree configuration the driver
opens this file with `filp_open()` during the first Wi-Fi or Bluetooth power-on;
it does not use the standard firmware-class loader, so a successful module
insertion alone does not produce a firmware-loading message.

The expected modules are:

- `uwe5621_bsp_sdio.ko`
- `sprdwl_ng.ko`
- `sprdbt_tty.ko`

Board-specific power, reset, wakeup GPIOs and the SDIO host still have to be
described by the target board's device tree.
