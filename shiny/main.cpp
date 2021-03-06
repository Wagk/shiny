#define GLFW_INCLUDE_VULKAN
#include <FreeImage.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include <stdexcept>

#include <graphics/renderer.h>
//#include <renderer.h>
//#include <vk/instance.h>
//#include <window.h>

int
main()
{
    shiny::graphics::renderer renderer;

    try {
        // while (shiny::renderer::singleton().glfw_window().close_window() == false) {
        //    shiny::renderer::singleton().glfw_window().poll_events();
        //}
        renderer.run();
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
