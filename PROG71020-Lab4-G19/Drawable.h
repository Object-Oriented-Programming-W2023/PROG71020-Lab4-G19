#pragma once
class Drawable
{
public:
	// This virtual pure function allows us acess functions from child class.
	virtual void draw() = 0;
};

