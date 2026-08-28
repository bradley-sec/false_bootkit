# false_bootkit
This is a simple EFI file that has no malicious behavior designed to test detection capabilities.
MITRE TTP T1542

#Install
```
sudo apt-get install gcc-mingw-w64-x86-64 && gnu-efi
x86_64-w64-mingw32-gcc -shared -nostdlib -I/usr/include/efi -I/usr/include/efi/x86_64 -I/usr/include/efi/protocol -Wl,--entry=efi_main -Wl,--subsystem=10 -o boot.efi main.c
```

Utilize the above commands with the uncompiled c code and you can make the boot.efi from scratch. Or, if you trust random github pages, you can just use the boot.efi I already made.
