# Automatically generated by configure - do not modify
CONFIG_QEMU_INTERP_PREFIX="/usr/gnemul/qemu-mipsel"
TARGET_ABI_MIPSO32=y
TARGET_SHORT_ALIGNMENT=2
TARGET_INT_ALIGNMENT=4
TARGET_LONG_ALIGNMENT=4
TARGET_LLONG_ALIGNMENT=8
TARGET_ARCH=mips
TARGET_MIPS=y
TARGET_ARCH2=mipsel
TARGET_BASE_ARCH=mips
TARGET_ABI_DIR=mips
CONFIG_USER_ONLY=y
CONFIG_LINUX_USER=y
CONFIG_SOFTFLOAT=y
CONFIG_USE_NPTL=y
CONFIG_USE_GUEST_BASE=y
CONFIG_I386_DIS=y
CONFIG_MIPS_DIS=y
LDFLAGS+=-Wl,-T../config-host.ld -Wl,-T,$(SRC_PATH)/$(ARCH).ld 
QEMU_CFLAGS+=
QEMU_INCLUDES+=-I$(SRC_PATH)/fpu -I$(SRC_PATH)/tcg -I$(SRC_PATH)/tcg/i386 
