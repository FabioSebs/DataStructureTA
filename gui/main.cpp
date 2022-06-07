#include <windows.h>
#include <tchar.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
    MessageBox(NULL,_T("Test"), _T("Windows"), NULL);
    return 0;
}