#include <windows.h>




LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

#ifdef WIN32
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{

}
#else
int main(int argc, char *argv[])
{

}
#endif
