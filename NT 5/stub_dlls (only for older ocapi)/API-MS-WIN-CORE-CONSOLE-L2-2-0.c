#include <windows.h>

BOOL WINAPI DllMain(HINSTANCE hinst, DWORD reason, LPVOID reserved) {
    return TRUE;
}

// Stub : SetConsoleTitleA
__declspec(dllexport)
BOOL WINAPI SetConsoleTitleA(LPCSTR lpConsoleTitle) {
    // On fait croire que ça a réussi
    return TRUE;
}