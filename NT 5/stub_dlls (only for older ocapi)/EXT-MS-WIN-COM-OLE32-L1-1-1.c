#include <windows.h>
#include <unknwn.h>
#include <winerror.h>
#include <objbase.h>  // pour IMoniker, IRunningObjectTable

// CreateItemMoniker
__declspec(dllexport)
HRESULT WINAPI CreateItemMoniker(LPCOLESTR lpszDelim, LPCOLESTR lpszItem, IMoniker **ppmk) {
    if (ppmk)
        *ppmk = NULL;
    return E_NOTIMPL;
}

// GetRunningObjectTable
__declspec(dllexport)
HRESULT WINAPI GetRunningObjectTable(DWORD dwReserved, IRunningObjectTable **pprot) {
    if (pprot)
        *pprot = NULL;
    return E_NOTIMPL;
}