#pragma once
#include "FlarePCH.h"
#include <spdlog/spdlog.h>

namespace Flare
{
	class FLARE_API LoggingManager
	{
	public:
		LoggingManager();
		~LoggingManager();

		void Startup();
		void Shutdown();

		spdlog::logger* GetEngineLogger();
		spdlog::logger* GetClientLogger();

	private:
		std::shared_ptr<spdlog::logger> m_EngineLogger;
		std::shared_ptr<spdlog::logger> m_ClientLogger;
	};

	inline LoggingManager g_LoggingManager{};
}