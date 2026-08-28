#include <efi.h>

EFI_STATUS efi_main(EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable) {
	SystemTable->ConOut->OutputString(SystemTable->ConOut, L"Destination Reached\r\n");
	SystemTable->BootServices->Stall(3000000);
	return EFI_SUCCESS;
}
