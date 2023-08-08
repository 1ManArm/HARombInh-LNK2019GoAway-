#pragma once
#include "head.h"
#include "body.h"
#include "limbs.h"

class creature : public head, public body, public limbs {
protected:
	std::string _name;
public:
	creature(float density, partSize size, color color, furDensity fur, float bodysize, float limbslength, float limbsquant, float headsize, size_t eyesAmount, std::string name): bodyPart(density, size, color, fur),
		head(density, size, color, fur, headsize, eyesAmount),
		body(density, size, color, fur, bodysize),
		limbs(density, size, color, fur, limbslength, limbsquant){}
	float size() { return head::size() + body::size() + limbs::size() + bodyPart::size(); }
};