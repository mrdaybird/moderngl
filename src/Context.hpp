#pragma once

#include "Python.hpp"

#include "Object.hpp"

#include "GLMethods.hpp"
#include "GLContext.hpp"

struct MGLFramebuffer;

struct MGLContext : public MGLObject {
	MGLFramebuffer * default_framebuffer;
	MGLFramebuffer * bound_framebuffer;

	GLContext gl_context;

	int max_integer_samples;

	int max_texture_units;
	int default_texture_unit;

	bool wireframe;

	GLMethods gl;
};

extern PyTypeObject MGLContext_Type;

MGLContext * MGLContext_New();
void MGLContext_Invalidate(MGLContext * context);
void MGLContext_Initialize(MGLContext * self);
