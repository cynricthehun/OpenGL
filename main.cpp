#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#pragma comment(lib,"user32.lib");

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevIstance, LPSTR lpCmdLine, int nShowCmd) {
  MessageBox(NULL, "\tHello, world!", "My First Windows Application", NULL);
  return 0;
}
