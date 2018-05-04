#include "Rigidbody.h"

Nash::Rigidbody::Rigidbody(const FVector3 & position, bool simulatePhysics, bool enableGravity)
	:m_position(position)
	,m_bSimulatePhysics(simulatePhysics)
	,m_bEnableGravity(enableGravity)
{
}

void Nash::Rigidbody::DeltaUpdate()
{
	if (m_bSimulatePhysics && m_bEnableGravity)
		this->AddForce(FVector3(0, GRAVITY, 0));

}

void Nash::Rigidbody::AddForce(const FVector3 & dir)
{

}
