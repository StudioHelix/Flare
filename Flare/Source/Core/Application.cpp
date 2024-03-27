#include "FlarePCH.h"
#include "Application.h"

namespace Flare
{
	Application::Application()
	{
	
	}

	Application::~Application()
	{

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