#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

using namespace std;

// framebuffer size callback function
void resize(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}

void render(GLFWwindow* window) {

    // here we put our rendering code

}

void main() {

    int width = 800;
    int height = 600;

    // We initialzie GLFW
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Now that it is initialized, we create a window
    GLFWwindow* window = glfwCreateWindow(width, height, "My Title", NULL, NULL);

    // We set the context to be our window and then initialize GLAD
    glfwMakeContextCurrent(window);
    gladLoadGL();

    // We can set a function to recieve framebuffer size callbacks, but it is optional
    glfwSetFramebufferSizeCallback(window, resize);


    //here we run our window, swapping buffers and all.
    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0.0f, 0.0f, 0.1f, 0.0f);
        render(window);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}