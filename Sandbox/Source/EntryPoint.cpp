#include "SandboxPCH.h"
#include "App/SandboxApp.h"

#if defined FL_PLATFORM_WINDOWS
int main(int argc, char* argv[])
{
	using namespace Sandbox;

	SandboxApplication* app = new SandboxApplication;

	app->Run();

	delete app;

	return 0;
}
#endif