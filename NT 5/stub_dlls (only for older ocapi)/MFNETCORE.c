#include <windows.h>
#include <unknwn.h>   // IUnknown
#include <winerror.h>

BOOL WINAPI DllMain(HINSTANCE hinst, DWORD reason, LPVOID reserved) {
    return TRUE;
}

/*
  Tous ces stubs retournent "non implémenté"
  => l'application doit gérer le fallback
*/

__declspec(dllexport)
HRESULT WINAPI MFCreateProxyLocator(
    IUnknown* pConfiguration,
    REFIID riid,
    void** ppvObject
) {
    if (ppvObject) *ppvObject = NULL;
    return E_NOTIMPL;
}

__declspec(dllexport)
HRESULT WINAPI MFCreateCredentialCache(
    REFIID riid,
    void** ppvObject
) {
    if (ppvObject) *ppvObject = NULL;
    return E_NOTIMPL;
}

__declspec(dllexport)
HRESULT WINAPI MFCreateFileBlockMap(
    IUnknown* pConfiguration,
    REFIID riid,
    void** ppvObject
) {
    if (ppvObject) *ppvObject = NULL;
    return E_NOTIMPL;
}

__declspec(dllexport)
HRESULT WINAPI MFCreateByteCacheFile(
    LPCWSTR pwszFilePath,
    IUnknown* pCallback,
    REFIID riid,
    void** ppvObject
) {
    if (ppvObject) *ppvObject = NULL;
    return E_NOTIMPL;
}