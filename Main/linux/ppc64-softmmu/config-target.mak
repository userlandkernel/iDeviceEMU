# Automatically generated by configure - do not modify
CONFIG_QEMU_INTERP_PREFIX="/usr/gnemul/qemu-ppc64"
TARGET_SHORT_ALIGNMENT=2
TARGET_INT_ALIGNMENT=4
TARGET_LONG_ALIGNMENT=8
TARGET_LLONG_ALIGNMENT=8
TARGET_ARCH=ppc64
TARGET_PPC64=y
TARGET_ARCH2=ppc64
TARGET_BASE_ARCH=ppc
TARGET_ABI_DIR=ppc
TARGET_WORDS_BIGENDIAN=y
TARGET_PHYS_ADDR_BITS=64
CONFIG_SOFTMMU=y
LIBS+=-lutil  -lpng 
HWDIR=../libhw64
TARGET_XML_FILES= /home/tux/qemu-ios-master/gdb-xml/power64-core.xml /home/tux/qemu-ios-master/gdb-xml/power-fpu.xml /home/tux/qemu-ios-master/gdb-xml/power-altivec.xml /home/tux/qemu-ios-master/gdb-xml/power-spe.xml
CONFIG_SOFTFLOAT=y
CONFIG_I386_DIS=y
CONFIG_PPC_DIS=y
LDFLAGS+=
QEMU_CFLAGS+=-DHAS_AUDIO -DHAS_AUDIO_CHOICE 
QEMU_INCLUDES+=-I$(SRC_PATH)/fpu -I$(SRC_PATH)/tcg -I$(SRC_PATH)/tcg/i386 
