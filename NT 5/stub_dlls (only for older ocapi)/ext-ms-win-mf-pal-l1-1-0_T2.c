#include <windows.h>
#include <unknwn.h>   // IUnknown, REFIID
#include <winerror.h>

BOOL WINAPI DllMain(HINSTANCE hinst, DWORD reason, LPVOID reserved) {
    return TRUE;
}

__declspec(dllexport)
HRESULT WINAPI MFPalGetDeviceUniqueID(
    REFIID guidDeviceClass,
    DWORD dwIndex,
    REFIID riid,
    void **ppvObject
) {
    if (ppvObject)
        *ppvObject = NULL;

    return E_NOTIMPL;
}