#pragma once
#include "Hazel.h"

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
    std::cout << "Hello World!" << std::endl;
    auto app = Hazel::CreateApplication();
    app->Run();
    delete app;
    return 0;
}