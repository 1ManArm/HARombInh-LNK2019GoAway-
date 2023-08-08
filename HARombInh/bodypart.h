#pragma once
#include <iostream>

enum class color {white, black, fair, orange, milky, _end_of_list_};
enum class furDensity {none, few, average, high, extra, _end_of_list_};
enum class partSize {little, middle, large, _end_of_list_};

class bodyPart {
protected:
	float _density;
	partSize _size;
	color _color;
	furDensity _fur;
public:
	bodyPart() = delete;
	bodyPart(float density, partSize size, color color, furDensity fur): _density(density), _size(size), _color(color), _fur(fur){}
	
	virtual ~bodyPart() = default;

	float size() { return _density; }
};