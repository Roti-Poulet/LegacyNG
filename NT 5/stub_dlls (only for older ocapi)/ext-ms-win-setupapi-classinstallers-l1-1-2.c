#include <windows.h>

BOOL WINAPI DllMain(HINSTANCE hinst, DWORD reason, LPVOID reserved) {
    return TRUE;
}

// Stub : retourne FALSE, ppvDetail non touché
__declspec(dllexport)
BOOL WINAPI SetupDiGetDeviceInterfaceDetailW(
    HANDLE DeviceInfoSet,
    void *DeviceInterfaceData,
    void *DeviceInterfaceDetailData,
    DWORD DeviceInterfaceDetailDataSize,
    DWORD *RequiredSize,
    void *DeviceInfoData
) {
    if (RequiredSize) *RequiredSize = 0;
    return FALSE;
}

// Stub : retourne un handle factice non nul
__declspec(dllexport)
HKEY WINAPI SetupDiOpenDevRegKey(
    HANDLE DeviceInfoSet,
    void *DeviceInfoData,
    DWORD Scope,
    DWORD HwProfile,
    DWORD KeyType,
    REGSAM samDesired
) {
    return (HKEY)0x1;
}

// Stub : retourne FALSE = pas d'interface
__declspec(dllexport)
BOOL WINAPI SetupDiEnumDeviceInterfaces(
    HANDLE DeviceInfoSet,
    void *DeviceInfoData,
    const GUID *InterfaceClassGuid,
    DWORD MemberIndex,
    void *DeviceInterfaceData
) {
    return FALSE;
}

// Stub : retourne FALSE, PropertyType et RequiredSize à zéro
__declspec(dllexport)
BOOL WINAPI SetupDiGetDeviceRegistryPropertyW(
    HANDLE DeviceInfoSet,
    void *DeviceInfoData,
    DWORD Property,
    DWORD *PropertyType,
    PBYTE PropertyBuffer,
    DWORD PropertyBufferSize,
    DWORD *RequiredSize
) {
    if (PropertyType) *PropertyType = 0;
    if (RequiredSize) *RequiredSize = 0;
    return FALSE;
}