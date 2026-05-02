#include <windows.h>

BOOL WINAPI DllMain(HINSTANCE hinst, DWORD reason, LPVOID reserved) {
    return TRUE;
}

/*
  Stub : l'appli veut juste savoir si le process est "immersive"
  On répond NON (FALSE), ce qui est généralement sûr.
*/
__declspec(dllexport)
BOOL WINAPI IsImmersiveProcess(HANDLE hProcess) {
    return FALSE;
}