#include <windows.h>
#include <winerror.h>

BOOL WINAPI DllMain(HINSTANCE hinst, DWORD reason, LPVOID reserved) {
    return TRUE;
}

// Stub : enforce whitelist ITAs donc not implemented
__declspec(dllexport)
HRESULT WINAPI MFEnforceWhitelistITAs(void) {
    return E_NOTIMPL;
}