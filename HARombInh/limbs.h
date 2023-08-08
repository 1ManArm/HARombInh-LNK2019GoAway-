#pragma once
#include "bodypart.h"

class limbs : virtual public bodyPart {
protected:
	float _length;
	float _quantity;
public:
	limbs(float density, partSize size, color color, furDensity fur, float length, float quantity): bodyPart(density, size, color, fur), _length(length), _quantity(quantity){}
	float size() { return _length; }
};