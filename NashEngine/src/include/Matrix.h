#pragma once
#pragma region Internal Includes
#include "BaseMath.h"
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
#pragma endregion 

namespace Nash
{
	class FMatrix
	{
	public:
		FVector4 Matrix[4];
		FMatrix(bool bSetToIdentity = true);
		FMatrix(const float& xx, const float& xy, const float& xz, const float& xw, 
				const float& yx, const float& yy, const float& yz, const float& yw, 
				const float& zx, const float& zy, const float& zz, const float& zw, 
				const float& wx, const float& wy, const float& wz, const float& ww);	
		FMatrix(const FVector4& vec1, const FVector4& vec2, const FVector4& vec3, const FVector4& vec4);
		FMatrix(const FMatrix& matrix); 

		void Identity();

		FMatrix Inverse() const;
		float Determinante() const;

		

		FMatrix operator=(const FMatrix& matrix); 
		bool operator==(const FMatrix& matrix) const; 
		bool operator!=(const FMatrix& matrix) const; 
		FMatrix operator+(const FMatrix& matrix) const; 
		FMatrix operator-(const FMatrix& matrix) const; 
		FMatrix operator*(const FMatrix& matrix) const; 
		FMatrix operator/(const FMatrix& matrix) const; 
		FVector4 operator[](const int& value) const;

		void operator+=(const FMatrix& matrix); 
		void operator-=(const FMatrix& matrix); 
		void operator*=(const FMatrix& matrix); 
		void operator/=(const FMatrix& matrix); 

	};
}