#include <windows.h>

BOOL WINAPI DllMain(HINSTANCE hinst, DWORD reason, LPVOID reserved) {
    return TRUE;
}

// Stub : retourne un HDEVINFO factice
__declspec(dllexport)
HANDLE WINAPI SetupDiGetClassDevsW(
    const GUID *ClassGuid,
    LPCWSTR Enumerator,
    HWND hwndParent,
    DWORD Flags
) {
    // Retourne un handle factice non nul
    return (HANDLE)0x1;
}

// Stub : retourne TRUE ou FALSE pour EnumDeviceInfo
__declspec(dllexport)
BOOL WINAPI SetupDiEnumDeviceInfo(
    HANDLE DeviceInfoSet,
    DWORD MemberIndex,
    void *DeviceInfoData // PSP_DEVINFO_DATA
) {
    // Toujours FALSE = pas d’élément
    return FALSE;
}

// Stub : retourne TRUE pour DestroyDeviceInfoList
__declspec(dllexport)
BOOL WINAPI SetupDiDestroyDeviceInfoList(HANDLE DeviceInfoSet) {
    return TRUE;
}

// Stub : retourne FALSE, ppvProperty non touché
__declspec(dllexport)
BOOL WINAPI SetupDiGetDevicePropertyW(
    HANDLE DeviceInfoSet,
    void *DeviceInfoData, // PSP_DEVINFO_DATA
    void *PropertyKey,    // const DEVPROPKEY*
    unsigned long *PropertyType,
    PBYTE PropertyBuffer,
    DWORD PropertyBufferSize,
    DWORD *RequiredSize,
    DWORD Flags
) {
    if (PropertyType) *PropertyType = 0;
    if (RequiredSize) *RequiredSize = 0;
    return FALSE;
}