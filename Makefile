ifneq ($(KERNELRELEASE),)

subdir-ccflags-y += -Wno-missing-prototypes -Wno-missing-declarations

obj-$(CONFIG_UWE5621_WCN) += unisocwcn/
obj-$(CONFIG_UWE5621_WIFI) += unisocwifi/
obj-$(CONFIG_UWE5621_BT) += tty-sdio/

UNISOCWCN_DIR := $(src)/unisocwcn
UNISOC_BSP_INCLUDE := $(UNISOCWCN_DIR)/include
export UNISOC_BSP_INCLUDE

TARGET_BUILD_VARIANT ?= user
export TARGET_BUILD_VARIANT

UNISOC_FW_PATH_CONFIG ?= /lib/firmware/uwe5621/
export UNISOC_FW_PATH_CONFIG

else

KDIR ?= /lib/modules/$(shell uname -r)/build
ARCH ?= arm64
CROSS_COMPILE ?=

MODULE_CONFIG := \
	CONFIG_UWE5621_WCN=m \
	CONFIG_UWE5621_WIFI=m \
	CONFIG_UWE5621_BT=m \
	CONFIG_RK_WIFI_DEVICE_UWE5621=y \
	CONFIG_WLAN_UWE5621=m \
	CONFIG_TTY_OVERY_SDIO=m

.PHONY: all modules clean help

all: modules

modules:
	$(MAKE) -C $(KDIR) M=$(CURDIR) ARCH=$(ARCH) \
		CROSS_COMPILE=$(CROSS_COMPILE) $(MODULE_CONFIG) modules

clean:
	$(MAKE) -C $(KDIR) M=$(CURDIR) ARCH=$(ARCH) \
		CROSS_COMPILE=$(CROSS_COMPILE) $(MODULE_CONFIG) clean

help:
	@printf '%s\n' \
		'make KDIR=/path/to/linux-6.18.18 ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu-' \
		'make KDIR=/path/to/linux-6.18.18 clean'

endif
