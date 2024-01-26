#ifndef SHADER_H
#define SHADER_H

#include "cglm/cglm.h"
#include "cglm/call.h"

typedef struct {
  unsigned int ID;
} shader_t;

enum ShaderType {
  PROGRAM = 0,
  VERTEX,
  FRAGMENT
};

shader_t shader_new(const char* vertexPath, const char* fragmentPath);
void shader_use(shader_t self);

void setShaderBool(shader_t self, char* name, int value);
void setShaderInt(shader_t self, char* name, int value);
void setShaderFloat(shader_t self, char* name, float value);
void setShaderMat4(shader_t self, char* name, const mat4 mat);
void setShaderVec4(shader_t self, char* name, float r, float g, float b);
void setShaderVec3(shader_t self, char* name, float r, float g, float b);

#endif