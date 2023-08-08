#pragma once
#include "bodypart.h"

class body :virtual public bodyPart {
protected:
	float _bodysize;
public:
	body(float density, partSize size, color color, furDensity fur, float bodysize):bodyPart(density, size, color, fur), _bodysize(bodysize){}

	float size() { return _bodysize; }
};