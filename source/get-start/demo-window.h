#pragma once
#ifndef LEARN_OPENGL_DEMO_WINDOW_H
#define LEARN_OPENGL_DEMO_WINDOW_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace get_start
{
    class DemoWindow
    {
    public:
        void Run();

    private:
        static constexpr unsigned int kScreenHeight = 600;
        static constexpr unsigned int kScreenWidth = 800;

        static void FramebufferSizeCallback(GLFWwindow* window, int width, int height);

        static void ProcessInput(GLFWwindow* window);

        static void Init();
    };

}

#endif //LEARN_OPENGL_DEMO_WINDOW_H



