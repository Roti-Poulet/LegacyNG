#include <windows.h>
#include <unknwn.h>
#include <winerror.h>

BOOL WINAPI DllMain(HINSTANCE hinst, DWORD reason, LPVOID reserved) {
    return TRUE;
}

// -------------------- COMPPKGSUP stubs --------------------

__declspec(dllexport)
HRESULT WINAPI GetServerForPMP(void **ppv) {
    if (ppv) *ppv = NULL;
    return E_NOTIMPL;
}

__declspec(dllexport)
HRESULT WINAPI GetMediaComponentPackageInfo(void **ppv) {
    if (ppv) *ppv = NULL;
    return E_NOTIMPL;
}

__declspec(dllexport)
HRESULT WINAPI GetMediaExtensionCommunicationFactory(void **ppv) {
    if (ppv) *ppv = NULL;
    return E_NOTIMPL;
}

__declspec(dllexport)
HRESULT WINAPI InstantiateComponentFromPackage(void **ppv) {
    if (ppv) *ppv = NULL;
    return E_NOTIMPL;
}