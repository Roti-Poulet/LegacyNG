#include <windows.h>
#include <winerror.h>

BOOL WINAPI DllMain(HINSTANCE hinst, DWORD reason, LPVOID reserved) {
    return TRUE;
}

__declspec(dllexport)
HRESULT WINAPI PolicyManager_GetCameraPolicy_AllowCamera(BOOL *pfAllowed) {
    if (pfAllowed)
        *pfAllowed = TRUE;  // caméra autorisée
    return S_OK;
}