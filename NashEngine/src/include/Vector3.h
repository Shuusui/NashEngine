#pragma once
#pragma region Internal Includes
#include "BaseMath.h"
#include "Vector2.h"
#pragma endregion 

namespace Nash
{
	class __declspec(dllexport) FVector3
	{
	public:
		float X; float Y; float Z;
		FVector3() :X(0), Y(0), Z(0) {};
		FVector3(const float& x, const float& y, const float& z) : X(x), Y(y), Z(z) {};
		FVector3(const FVector2& vec, const float& z) : X(vec.X), Y(vec.Y), Z(z) {};
		FVector3(const FVector3& vec) : X(vec.X), Y(vec.Y), Z(vec.Z) {};

		inline FVector3 operator=(const FVector3& vec);
		inline bool operator==(const FVector3& vec) const;
		inline bool operator!=(const FVector3& vec) const;
		inline FVector3 operator+(const FVector3& vec) const;
		inline FVector3 operator-(const FVector3& vec) const;
		inline FVector3 operator*(const FVector3& vec) const;
		inline FVector3 operator/(const FVector3& vec) const;
		inline FVector3 operator+(const float& scalar) const;
		inline FVector3 operator-(const float& scalar) const;
		inline FVector3 operator*(const float& scalar) const;
		inline FVector3 operator/(const float& scalar) const;

		inline void operator+=(const FVector3& vec);
		inline void operator-=(const FVector3& vec);
		inline void operator*=(const FVector3& vec);
		inline void operator/=(const FVector3& vec);
		inline void operator+=(const float& scalar);
		inline void operator-=(const float& scalar);
		inline void operator*=(const float& scalar);
		inline void operator/=(const float& scalar);

	};
}

Nash::FVector3 Nash::FVector3::operator=(const FVector3 & vec)
{
	return FVector3(vec);
}

bool Nash::FVector3::operator==(const FVector3 & vec) const
{
	return Nash::AbsF(X - vec.X) < EPSILON && Nash::AbsF(Y - vec.Y) < EPSILON && Nash::AbsF(Z - vec.Z) ? true : false;
}

bool Nash::FVector3::operator!=(const FVector3 & vec) const
{
	return Nash::AbsF(X - vec.X) > EPSILON || Nash::AbsF(Y - vec.Y) > EPSILON || Nash::AbsF(Z - vec.Z) ? true : false;
}

Nash::FVector3 Nash::FVector3::operator+(const FVector3 & vec) const
{
	return FVector3(X + vec.X, Y + vec.Y, Z + vec.Z);
}

Nash::FVector3 Nash::FVector3::operator-(const FVector3 & vec) const
{
	return FVector3(X - vec.X, Y - vec.Y, Z - vec.Z);
}

Nash::FVector3 Nash::FVector3::operator*(const FVector3 & vec)const
{
	return FVector3(X*vec.X, Y*vec.Y, Z*vec.Z);
}

Nash::FVector3 Nash::FVector3::operator/(const FVector3 & vec)const
{
	return FVector3(X / vec.X, Y / vec.Y, Z / vec.Z);
}

Nash::FVector3 Nash::FVector3::operator+(const float & scalar)const
{
	return FVector3(X + scalar, Y + scalar, Z + scalar);
}

Nash::FVector3 Nash::FVector3::operator-(const float & scalar)const
{
	return FVector3(X - scalar, Y - scalar, Z - scalar);
}

Nash::FVector3 Nash::FVector3::operator*(const float & scalar)const
{
	return FVector3(X*scalar, Y*scalar, Z*scalar);
}

Nash::FVector3 Nash::FVector3::operator/(const float & scalar)const
{
	return FVector3(X / scalar, Y / scalar, Z / scalar);
}

void Nash::FVector3::operator+=(const FVector3 & vec)
{
	X += vec.X; Y += vec.Y; Z += vec.Z;
}

void Nash::FVector3::operator-=(const FVector3 & vec)
{
	X -= vec.X; Y -= vec.Y; Z -= vec.Z;
}

void Nash::FVector3::operator*=(const FVector3 & vec)
{
	X *= vec.X; Y *= vec.Y; Z *= vec.Z;
}

void Nash::FVector3::operator/=(const FVector3 & vec)
{
	X /= vec.X; Y /= vec.Y; Z *= vec.Z;
}

void Nash::FVector3::operator+=(const float & scalar)
{
	X += scalar; Y += scalar; Z += scalar;
}

void Nash::FVector3::operator-=(const float & scalar)
{
	X -= scalar; Y -= scalar; Z -= scalar;
}

void Nash::FVector3::operator*=(const float & scalar)
{
	X *= scalar; Y *= scalar; Z *= scalar;
}

void Nash::FVector3::operator/=(const float & scalar)
{
	X /= scalar; Y /= scalar; Z /= scalar;
}
