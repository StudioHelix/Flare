#pragma once
#include "FlarePCH.h"

namespace Flare
{
	class FLARE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void Quit();

		virtual void OnUpdate();

	private:
		bool m_Running{};
	};
}