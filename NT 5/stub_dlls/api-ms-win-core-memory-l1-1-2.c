#include <windows.h>

BOOL WINAPI DllMain(HINSTANCE hinst, DWORD reason, LPVOID reserved) {
    return TRUE;
}

// -------------------- HANDLE / LPVOID stubs --------------------

__declspec(dllexport)
HANDLE WINAPI CreateFileMappingW(
    HANDLE hFile,
    LPSECURITY_ATTRIBUTES lpAttributes,
    DWORD flProtect,
    DWORD dwMaximumSizeHigh,
    DWORD dwMaximumSizeLow,
    LPCWSTR lpName
) {
    return (HANDLE)0x1;
}

__declspec(dllexport)
HANDLE WINAPI OpenFileMappingW(
    DWORD dwDesiredAccess,
    BOOL bInheritHandle,
    LPCWSTR lpName
) {
    return (HANDLE)0x1;
}

__declspec(dllexport)
LPVOID WINAPI MapViewOfFile(
    HANDLE hFileMappingObject,
    DWORD dwDesiredAccess,
    DWORD dwFileOffsetHigh,
    DWORD dwFileOffsetLow,
    SIZE_T dwNumberOfBytesToMap
) {
    return (LPVOID)0x10000000;
}

__declspec(dllexport)
LPVOID WINAPI MapViewOfFileEx(
    HANDLE hFileMappingObject,
    DWORD dwDesiredAccess,
    DWORD dwFileOffsetHigh,
    DWORD dwFileOffsetLow,
    SIZE_T dwNumberOfBytesToMap,
    LPVOID lpBaseAddress
) {
    return (LPVOID)0x10000000;
}

__declspec(dllexport)
BOOL WINAPI UnmapViewOfFile(LPCVOID lpBaseAddress) {
    return TRUE;
}

// -------------------- VirtualAlloc / VirtualFree / VirtualProtect --------------------

__declspec(dllexport)
LPVOID WINAPI VirtualAlloc(
    LPVOID lpAddress,
    SIZE_T dwSize,
    DWORD flAllocationType,
    DWORD flProtect
) {
    return (LPVOID)0x20000000;
}

__declspec(dllexport)
BOOL WINAPI VirtualFree(
    LPVOID lpAddress,
    SIZE_T dwSize,
    DWORD dwFreeType
) {
    return TRUE;
}

__declspec(dllexport)
BOOL WINAPI VirtualProtect(
    LPVOID lpAddress,
    SIZE_T dwSize,
    DWORD flNewProtect,
    PDWORD lpflOldProtect
) {
    if (lpflOldProtect) *lpflOldProtect = PAGE_READWRITE;
    return TRUE;
}

// -------------------- VirtualQueryEx stub --------------------

__declspec(dllexport)
SIZE_T WINAPI VirtualQueryEx(
    HANDLE hProcess,
    LPCVOID lpAddress,
    MEMORY_BASIC_INFORMATION *lpBuffer,
    SIZE_T dwLength
) {
    if (lpBuffer) {
        lpBuffer->BaseAddress = (LPVOID)0x10000000;
        lpBuffer->AllocationBase = (LPVOID)0x10000000;
        lpBuffer->AllocationProtect = PAGE_READWRITE;
        lpBuffer->RegionSize = 0x1000;
        lpBuffer->State = MEM_COMMIT;
        lpBuffer->Protect = PAGE_READWRITE;
        lpBuffer->Type = MEM_PRIVATE;
    }
    return sizeof(MEMORY_BASIC_INFORMATION);
}