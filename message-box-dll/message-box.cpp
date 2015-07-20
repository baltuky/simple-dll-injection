#include "message-box.h"
#include "windows.h"

DLLEXPORT BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH:
        case DLL_THREAD_ATTACH:
            MessageBox(NULL, (LPCSTR) TEXT("Hello I'm injected DLL lib"), TEXT("DLL Injection"), NULL);
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}