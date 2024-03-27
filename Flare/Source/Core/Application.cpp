#include "FlarePCH.h"
#include "Application.h"
#include "LoggingManager.h"

namespace Flare
{
	Application::Application()
	{
		g_LoggingManager.Startup();
		Flare::g_LoggingManager.GetEngineLogger()->info("Application has started!");
	}

	Application::~Application()
	{
		g_LoggingManager.Shutdown();
	}

	void Application::Run()
	{
		m_Running = true;

		while (m_Running)
		{
			OnUpdate();
		}
	}

	void Application::OnUpdate()
	{

	}

	void Application::Quit()
	{
		m_Running = false;
	}
}