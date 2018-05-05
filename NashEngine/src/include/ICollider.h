#pragma once
#pragma region Internal Includes
#include "BaseMath.h"
#include "Matrix.h"
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
#include "Rigidbody.h"
#pragma endregion 
#pragma region External Includes
#include <cstdint>
#include <vector>
#pragma endregion 

namespace Nash
{
	class __declspec(dllexport) ICollider
	{
	private:
		FVector3 m_globalPosition;
		FVector3 m_localPosition;
		bool m_bIsTrigger;
		Rigidbody* m_rigidbody;
	public:
		/**
		* Default constructor deleted because every Collider needs global position, local position and isTrigger assignment. 
		*/
		ICollider() = delete; 
		/**
		* The base Interface class of the collider
		* 
		* @param globalPosition The global position of the collider depends on the position of the object and the offset to the object, which owns this collider.
		* @param localPosition The local position of the collider depends on the position to the object which own this collider. 
		* @param isTrigger Turn this on to disable collision with this object and enable trigger you can use for effects. (Default = false)
		*/
		ICollider(const FVector3& globalPosition, const FVector3& localPosition, const bool& isTrigger = false) :m_globalPosition(globalPosition), m_localPosition(localPosition), m_bIsTrigger(isTrigger) {};
		/**
		* Copy constructor
		* 
		* @param collider The collider which should be copied in this collider
		*/
		ICollider(const ICollider& collider) :m_globalPosition(collider.m_globalPosition), m_localPosition(collider.m_localPosition), m_bIsTrigger(collider.m_bIsTrigger) {};

		bool IsTrigger() const { return m_bIsTrigger; }
		FVector3 GlobalPosition() const { return m_globalPosition; }
		FVector3 LocalPosition() const { return m_localPosition; }

		void SetIsTrigger(const bool& isTrigger) { m_bIsTrigger = isTrigger; }
		void SetRigidbody(Rigidbody* rigidbody) { m_rigidbody = rigidbody; }

		virtual ~ICollider() { delete m_rigidbody; };

	protected:
		virtual void DeltaUpdate() = 0;
		virtual void Update() = 0;

	};
}