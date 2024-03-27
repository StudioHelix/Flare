#pragma once
#include "SandboxPCH.h"
#include <Flare.h>

namespace Sandbox
{
	class SandboxApplication : public Flare::Application
	{
	public:
		SandboxApplication();
		~SandboxApplication();

		virtual void OnUpdate();
	};
}