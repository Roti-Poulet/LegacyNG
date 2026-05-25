#include <windows.h>
#include <unknwn.h>
#include <winerror.h>

__declspec(dllexport)
HRESULT WINAPI GetTranscodeComponentCreator(REFIID riid, void **ppvObject) {
    if (ppvObject)
        *ppvObject = NULL;
    return E_NOTIMPL;
}