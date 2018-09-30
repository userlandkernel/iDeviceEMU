how to compile:

./configure --target-list=arm-softmmu --enable-sdl --enable-skinning
make

How to run:

./arm-softmmu/qemu-system-arm -M ipad1g -option-rom iBoot.k48ap.RELEASE.unencrypted -global s5l8930_h2fmi0.file="0,ce0.bin;2,ce2.bin" -global s5l8930_h2fmi1.file="0,ce1.bin;2,ce3.bin" -pflash ipadnor.bin -gdb tcp::6666 -nographic -S -serial file:serial.txt -monitor stdio -smp 2

How do i contribute:

Message me on twitter @cmwdotme and submit patches.

Notes:

This was done to help with the discovery and exploration of new exploits on
the iPhone. The test was to see if we could emulate enough to get iBoot
running then to try and get the kernel booting. The last step would be 
trying to do a full restore via itunes.


Credit:

Thanks to Dre and iDroid guys specifically (Bluerise, ricky26, CPICH) for their help
and of course thanks to comex/chpwn for their support and *motivation*

p.s
Chronicdev rocks

----

rms notes:

qemu-system-arm works with an empty nor file: dd if=/dev/zero of=nordump.bin bs=1M count=1

./arm-softmmu/qemu-system-arm -M ipad1g -pflash nordump.bin -option-rom ~/xpwn/llb.decrypt -serial vc -usb -global 
usb_synopsys.host=localhost -global usb_synopsys.port=7644

./x86_64-softmmu/qemu-system-x86_64 -usb -cdrom ~/Downloads/archlinux-2012.12.01-dual.iso -enable-kvm -m 768 -usb 
-device driver=tcp_usb_bus  -global tcp_usb_bus.port=7644

llb decrypt is from Wildcat 7B367

for arch, LDFLAGS should include -lrt
