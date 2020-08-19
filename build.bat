mkdir bin
nasm -felf kernel.asm -obin/kasm.o
i686-elf-gcc -fno-stack-protector -m32 -c src/kernel.c -obin/kernel.o -Iinclude
i686-elf-ld -T link.ld -o bin/DollarOS.bin bin/kasm.o bin/kernel.o