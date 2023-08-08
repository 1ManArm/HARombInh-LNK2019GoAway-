#pragma once
#include "bodypart.h"

class head :virtual public bodyPart {
protected:
	float _headsize;
	size_t _eyesAmount;
public:
	head(float density, partSize size, color color, furDensity fur, float headsize, size_t eyesAmount):bodyPart(density, size, color, fur), _headsize(headsize), _eyesAmount(eyesAmount){}
	float size() { return _headsize; }
};