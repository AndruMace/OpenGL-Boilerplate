#ifndef WINDOW_H
#define WINDOW_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

struct Window {
    GLFWwindow* self;
    const char* title;
    int width;
    int height;

    float dt; // Delta Time
    float lastFrame; 
};

extern struct Window window;

void window_create(const char* title, int width, int height);
void window_destroy();
void window_update();

#endif