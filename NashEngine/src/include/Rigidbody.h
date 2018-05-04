#pragma once
#pragma region Internal Includes
#include "BaseMath.h"
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
#include "Matrix.h"
#pragma endregion

namespace Nash
{
	class Rigidbody
	{
	private: 
		bool m_bSimulatePhysics; 
		bool m_bEnableGravity;
		FVector3 m_position;
	public:
		/**
		* Default Constructor, every rigidbody needs a position to add a force to an object
		*/
		Rigidbody(const FVector3& position, bool simulatePhysics = true, bool enableGravity = true);
		/**
		* Default constructor is disabled because every Rigidbody needs a position to enable forces
		*/
		Rigidbody() = delete;
		/**
		* Copy constructor is disabled because it shouldn't be possible to copy a rigidbody because it would be to expensive to copy all forces
		* (Maybe better to copy all changable values outside the rigidbody and insert it to the rigidbody)
		*/
		Rigidbody(const Rigidbody&) = delete; 
		/**
		* Same as Copy constructor
		*/
		Rigidbody operator=(const Rigidbody&) = delete;
		/**
		* Function which should be called every delta Time and not every frame, because of physics
		* 
		*/
		void DeltaUpdate(); 
		/**
		* Basic function to add a force to an object
		* @param dir This parameter show the direction of the force and the strength, the higher the value of the X,Y,Z values are, the stronger the force.
		*/
		void AddForce(const FVector3& dir);
		/**
		* Will give the object an impulse in a direction 
		* @param dir The direction of the impulse force and the strength of it. 
		*/
		void AddImpulse(const FVector3& dir);
	};
}