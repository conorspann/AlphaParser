
#include "../../include/commands/show_window.h"

ShowWindow::ShowWindow(std::vector<std::string> params):
    Command(params)
{

}

void ShowWindow::execute(Environment & environment, int * cmdPtr)
{
    std::map<std::string, std::pair<std::string, int>> & globalDataPool = environment.getGlobalDataPool();
    Resolver & resolver = environment.getResolver();
    std::vector<Window> & windows = environment.getWindows();
    std::string windowHandleStr = resolver.resolve(params[0], globalDataPool);
    int windowHandle = std::stoi(windowHandleStr);
    if(windowHandle < 0 || windowHandle >= windows.size()){
        throw std::runtime_error("Error: window handle invalid.");
    }
    windows[windowHandle].show();
}

int ShowWindow::getNumParams()
{
    return 1;
}

std::string ShowWindow::getName()
{
    return "ShowWindow";
}


