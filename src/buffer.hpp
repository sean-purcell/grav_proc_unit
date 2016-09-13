#pragma once

#include "gpu/gl.hpp"

#include "program.hpp"

class StarBuffer {
	GLuint vao;
	GLuint vbo;

	int count;
public:
	StarBuffer(GLProgram &prog, int count);
	virtual ~StarBuffer();

	void draw();
};
