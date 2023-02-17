#pragma once
class Drawable
{
protected:
	// This virtual pure function allows us acess functions from child class.
	virtual void draw() = 0;
};

