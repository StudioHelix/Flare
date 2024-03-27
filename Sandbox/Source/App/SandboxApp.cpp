#include "SandboxPCH.h"
#include "SandboxApp.h"

namespace Sandbox
{
	SandboxApplication::SandboxApplication()
	{

	}

	SandboxApplication::~SandboxApplication()
	{

	}

	void SandboxApplication::OnUpdate()
	{
		if (GetAsyncKeyState(VK_END) & 0x8000)
			Quit();
	}
}