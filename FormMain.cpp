#include "FormMain.h"

#include <Windows.h>

using namespace Dentistry;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew FormMain);
    return 0;
}
