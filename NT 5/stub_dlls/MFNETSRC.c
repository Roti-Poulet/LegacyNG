#include <windows.h>
#include <unknwn.h>   // IUnknown, REFIID
#include <winerror.h>

BOOL WINAPI DllMain(HINSTANCE hinst, DWORD reason, LPVOID reserved) {
    return TRUE;
}

/*
  Stub Media Foundation Network Source
*/

__declspec(dllexport)
HRESULT WINAPI MFCreateCacheManager(
    REFIID riid,
    void **ppvObject
) {
    if (ppvObject)
        *ppvObject = NULL;

    return E_NOTIMPL;
}