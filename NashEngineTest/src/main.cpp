#include <Windows.h>

#include "BoxCollider.h"
#include "Vector3.h"
#include "Matrix.h"
#include "Vector4.h"
#include "ICollider.h"
#include "Rigidbody.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	Nash::Rigidbody* rb = new Nash::Rigidbody(Nash::FVector3(1, 1, 1));

} 