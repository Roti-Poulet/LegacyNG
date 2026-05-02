#include <windows.h>

BOOL WINAPI DllMain(HINSTANCE hinst, DWORD reason, LPVOID reserved) {
    return TRUE;
}

/* Copie simple de chaîne wide (pour stub, sécurité maximale) */
static void stub_wcscpy(WCHAR* dest, const WCHAR* src) {
    while (*src) {
        *dest++ = *src++;
    }
    *dest = 0;
}

__declspec(dllexport)
BOOL WINAPI GetCurrentHwProfileW(LPHW_PROFILE_INFOW lpHwProfileInfo) {
    if (!lpHwProfileInfo)
        return FALSE;

    lpHwProfileInfo->dwDockInfo = DOCKINFO_UNDOCKED;

    stub_wcscpy(
        lpHwProfileInfo->szHwProfileGuid,
        L"{12345678-1234-1234-1234-123456789ABC}"
    );

    stub_wcscpy(
        lpHwProfileInfo->szHwProfileName,
        L"Stub Hardware Profile"
    );

    return TRUE;
}