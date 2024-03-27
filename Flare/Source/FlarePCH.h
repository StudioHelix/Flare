#pragma once

#if defined FL_PLATFORM_WINDOWS
#include <Windows.h>
#endif

#include <memory>

#define FLARE_NAME "Flare"
#define FLARE_VERSION_MAJOR "0"
#define FLARE_VERSION_MINOR "0"
#define FLARE_VERSION_BUILD "1a"

#define FLARE_API __declspec(dllexport)