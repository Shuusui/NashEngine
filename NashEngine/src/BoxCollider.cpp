#include "..\include\BoxCollider.h"

bool Nash::BoxCollider::EnterCollision(ICollider *(*obj)())
{
	switch (obj()->Type())
	{
	case Enums::ColliderType::BoxCollider: 
	{

	}
		break; 
	case Enums::ColliderType::SphereCollider: 
		break; 
	case Enums::ColliderType::CapsuleCollider: 
		break;
	}
	return true;
}

void Nash::BoxCollider::DeltaUpdate()
{

}

void Nash::BoxCollider::Update()
{
	
}
