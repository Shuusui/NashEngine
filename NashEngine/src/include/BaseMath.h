#pragma once

namespace Nash
{
	#define VERYSMALL (1.0E-150)
	#define EPSILON (1.0E-8)
	#define GRAVITY (9.807)
	#define PI (3.14159265359)
	

	inline static float AbsF(const float& value); 
	inline static double AbsD(const double& value);
	inline static bool CompareF(const float& value1, const float& value2);
	inline static bool CompareD(const double& value1, const double& value2);
}


float Nash::AbsF(const float & value)
{
	return value > 0 ? value : value * -1;
}
double Nash::AbsD(const double& value)
{
	return value > 0 ? value : value * -1;
}

bool Nash::CompareF(const float & value1, const float & value2)
{
	return AbsF(value1 - value2) < EPSILON ? true : false; 
} 

bool Nash::CompareD(const double & value1, const double & value2)
{
	return AbsD(value1-value2) < VERYSMALL ?  true: false;
}

