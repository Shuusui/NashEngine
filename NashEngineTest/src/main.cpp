#include <Windows.h>

#include "BoxCollider.h"
#include "Vector3.h"
#include "Matrix.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	Nash::FMatrix mat(3,7,3,0,0,2,-1,1,5,4,3,2,6,6,4,-1);
	Nash::FMatrix inv = mat.Inverse();
} 