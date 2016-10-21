#pragma once

#include "Vec3f.h"

class Quaternion {

public:
	Quaternion();
	Quaternion(float x, float y, float z, float w);
	float length() const;
	Quaternion normalize();
	Quaternion conjugate();
	Quaternion mul(const Quaternion &r);
	Quaternion mul(const Vec3f &r);
	float getX() const;
	float getY() const;
	float getZ() const;
	float getW() const;
	void setX(float x);
	void setY(float y);
	void setZ(float z);
	void setW(float w);
	void toString() const;

private:
	float x; 
	float y;
	float z;
	float w;
};