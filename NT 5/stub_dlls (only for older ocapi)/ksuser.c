#include <windows.h>
#include <unknwn.h>  // IUnknown, REFIID
#include <winerror.h>

BOOL WINAPI DllMain(HINSTANCE hinst, DWORD reason, LPVOID reserved) {
    return TRUE;
}

// -------------------- KSUSER stubs --------------------

__declspec(dllexport)
HRESULT WINAPI KsCreateClock2(
    IUnknown* pUnknown,
    REFIID riid,
    void **ppvClock
) {
    if (ppvClock)
        *ppvClock = NULL;
    return E_NOTIMPL;
}

__declspec(dllexport)
HRESULT WINAPI KsCreatePin2(
    IUnknown* pUnknown,
    REFIID riid,
    void **ppvPin
) {
    if (ppvPin)
        *ppvPin = NULL;
    return E_NOTIMPL;
}