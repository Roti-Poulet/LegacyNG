#include <windows.h>
#include <unknwn.h>  // IUnknown, REFIID
#include <winerror.h>

BOOL WINAPI DllMain(HINSTANCE hinst, DWORD reason, LPVOID reserved) {
    return TRUE;
}

// -------------------- MF PAL TEPal stubs --------------------

__declspec(dllexport)
HRESULT WINAPI MFTEPalBeginAcquireResource(IUnknown *pResource) {
    return E_NOTIMPL;
}

__declspec(dllexport)
HRESULT WINAPI MFTEPalUnRegisterForResourceNotifications(IUnknown *pResource) {
    return E_NOTIMPL;
}

__declspec(dllexport)
HRESULT WINAPI MFTEPalEndAcquireResource(IUnknown *pResource) {
    return E_NOTIMPL;
}

__declspec(dllexport)
HRESULT WINAPI MFTEPalRegisterForResourceNotifications(IUnknown *pResource) {
    return E_NOTIMPL;
}

__declspec(dllexport)
HRESULT WINAPI MFTEPalReleaseResource(IUnknown *pResource) {
    return E_NOTIMPL;
}