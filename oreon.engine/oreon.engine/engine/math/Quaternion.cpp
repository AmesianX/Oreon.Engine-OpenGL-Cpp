#include "Quaternion.h"


Quaternion::Quaternion() : x(0), y(0), z(0), w(0)
{
}

Quaternion::Quaternion(float x, float y, float z, float w)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->w = w;
}

float Quaternion::length() const
{
	return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
}

Quaternion Quaternion::normalize()
{
	float length = this->length();

	this->x /= length;
	this->y /= length;
	this->z /= length;
	this->w /= length;

	return *this;
}

Quaternion Quaternion::conjugate()
{
	return Quaternion(-this->x, -this->y, -this->z, this->w);
}

Quaternion Quaternion::mul(const Quaternion &r)
{
		float w_ = w * r.getW() - x * r.getX() - y * r.getY() - z * r.getZ();
		float x_ = x * r.getW() + w * r.getX() + y * r.getZ() - z * r.getY();
		float y_ = y * r.getW() + w * r.getY() + z * r.getX() - x * r.getZ();
		float z_ = z * r.getW() + w * r.getZ() + x * r.getY() - y * r.getX();

		return Quaternion(x_, y_, z_, w_);
}

Quaternion Quaternion::mul(const Vec3f &r)
{
		float w_ = -x * r.getX() - y * r.getY() - z * r.getZ();
		float x_ =  w * r.getX() + y * r.getZ() - z * r.getY();
		float y_ =  w * r.getY() + z * r.getX() - x * r.getZ();
		float z_ =  w * r.getZ() + x * r.getY() - y * r.getX();

		return Quaternion(x_, y_, z_, w_);
}

float Quaternion::getX() const{
		return x;
}

void Quaternion::setX(float x) {
		this->x = x;
	}

float Quaternion::getY() const{
		return y;
}

void Quaternion::setY(float y) {
		this->y = y;
}

float Quaternion::getZ() const{
		return z;
}

void Quaternion::setZ(float z) {
		this->z = z;
}

float Quaternion::getW() const{
		return w;
}

void Quaternion::setW(float w) {
		this->w = w;
}

void Quaternion::toString() const
{

}