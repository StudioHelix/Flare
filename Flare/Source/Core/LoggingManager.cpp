#include "FlarePCH.h"
#include "LoggingManager.h"
#include <spdlog/sinks/stdout_color_sinks.h>

namespace Flare
{
	LoggingManager::LoggingManager()
	{
	}

	LoggingManager::~LoggingManager()
	{
	}

	void LoggingManager::Startup()
	{
		m_EngineLogger = spdlog::stdout_color_mt(FLARE_NAME);
		m_ClientLogger = spdlog::stdout_color_mt("Client");

		// Engine logger
		m_EngineLogger->set_pattern("%^[%T] %n: %v");
		m_EngineLogger->set_level(spdlog::level::trace);

		// Client logger
		m_ClientLogger->set_pattern("%^[%T] %n: %v");
		m_ClientLogger->set_level(spdlog::level::trace);
	}

	void LoggingManager::Shutdown()
	{
		m_EngineLogger.reset();
		m_ClientLogger.reset();
	}


	spdlog::logger* LoggingManager::GetEngineLogger()
	{
		if (!m_EngineLogger)
			std::runtime_error("Create Engine Logger before trying to acquire.");

		return m_EngineLogger.get();
	}

	spdlog::logger* LoggingManager::GetClientLogger()
	{
		if (!m_ClientLogger)
			std::runtime_error("Create Client Logger before trying to acquire.");

		return m_ClientLogger.get();
	}
}