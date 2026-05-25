#include <windows.h>

/*
  Injection directe d'une directive linker :
  EXPORT par ordinal uniquement (@290)
*/
__asm__ (
    ".section .drectve\n"
    ".ascii \" -export:@290 \"\n"
);

BOOL WINAPI DllMain(HINSTANCE hinst, DWORD reason, LPVOID reserved) {
    return TRUE;
}

/*
  Fonction factice.
  Elle NE SERA PAS appelée normalement.
*/
void __stdcall Ordinal290Stub(void) {
    return;
}