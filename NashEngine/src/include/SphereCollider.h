#pragma once
#pragma region Internal Includes
#include "ICollider.h"
#pragma endregion 

namespace Nash
{
	class __declspec(dllexport) SphereCollider : public ICollider
	{
	private: 
		float m_radius;
	public:
		SphereCollider() = delete;
		SphereCollider(const FVector3& globalPosition, const FVector3& localPosition, const float& radius = 1.0f, const bool& isTrigger = false) : ICollider(globalPosition, localPosition, isTrigger), m_radius(radius) {}
		SphereCollider(const SphereCollider& sphereCollider) :ICollider(sphereCollider.GlobalPosition(), sphereCollider.LocalPosition(), sphereCollider.IsTrigger()), m_radius(sphereCollider.m_radius) {}
		SphereCollider(const ICollider& collider, const float& radius = 1.0f) :ICollider(collider), m_radius(radius) {}

		float GetRadius() const { return m_radius; }
	};
}