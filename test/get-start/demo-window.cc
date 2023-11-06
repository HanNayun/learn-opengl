#include "get-start/demo-window.h"

#include <gtest/gtest.h>

TEST(GetStart, DemoWindow)
{
    get_start::DemoWindow demo_window;
    demo_window.Run();
}