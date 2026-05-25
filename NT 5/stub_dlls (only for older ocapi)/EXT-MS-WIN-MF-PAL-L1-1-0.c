#include <windows.h>
#include <unknwn.h>   // IUnknown, REFIID
#include <winerror.h>

BOOL WINAPI DllMain(HINSTANCE hinst, DWORD reason, LPVOID reserved) {
    return TRUE;
}

// -------------------- MF PAL stubs --------------------

// MFPalGetDeviceUniqueID
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

// MFTEPalBeginAcquireResource
__declspec(dllexport)
HRESULT WINAPI MFTEPalBeginAcquireResource(IUnknown *pResource) {
    return E_NOTIMPL;
}

// MFTEPalUnRegisterForResourceNotifications
__declspec(dllexport)
HRESULT WINAPI MFTEPalUnRegisterForResourceNotifications(IUnknown *pResource) {
    return E_NOTIMPL;
}

// MFTEPalEndAcquireResource
__declspec(dllexport)
HRESULT WINAPI MFTEPalEndAcquireResource(IUnknown *pResource) {
    return E_NOTIMPL;
}

// MFTEPalRegisterForResourceNotifications
__declspec(dllexport)
HRESULT WINAPI MFTEPalRegisterForResourceNotifications(IUnknown *pResource) {
    return E_NOTIMPL;
}

// MFTEPalReleaseResource
__declspec(dllexport)
HRESULT WINAPI MFTEPalReleaseResource(IUnknown *pResource) {
    return E_NOTIMPL;
}



// MFPalUpdateDecoderAttributes ? stub safe
__declspec(dllexport)
HRESULT WINAPI MFPalUpdateDecoderAttributes(void *pDecoder) {
    return E_NOTIMPL;
}

// MFPalIsAsyncMFTWrapperEnabled ? stub safe, retourne FALSE dans le pointeur si fourni
__declspec(dllexport)
HRESULT WINAPI MFPalIsAsyncMFTWrapperEnabled(BOOL *pfEnabled) {
    if (pfEnabled)
        *pfEnabled = FALSE;
    return S_OK;
}