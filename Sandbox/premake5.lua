project "Sandbox"
    location "./"

    kind "ConsoleApp"
    language "C++"
    characterset ("MBCS")

    targetdir ("%{wks.location}/Build/%{cfg.buildcfg}-%{cfg.system}/%{prj.name}/")
    objdir ("%{wks.location}/Build/%{cfg.buildcfg}-%{cfg.system}/%{prj.name}/Intermediate/")

    pchheader "SandboxPCH.h"
    pchsource "Source/SandboxPCH.cpp"
    forceincludes "SandboxPCH.h"

    defines
    {
        "_CRT_SECURE_NO_WARNINGS"
    }

    files
    {
        "Source/**.h",
        "Source/**.cpp"
    }

    includedirs
    {
        "Source/",
        "%{wks.location}/Flare/Source/"
    }

    links
    {
        "Flare"
    }

    filter { "system:Windows" }
        systemversion "latest"
        staticruntime "On"
        cppdialect "C++20"
        cdialect "C17"

        defines
        {
            "FL_PLATFORM_WINDOWS",
            "WIN32_LEAN_AND_MEAN"
        }

    filter { "configurations:Debug" }
        runtime "Debug"
        symbols "On"

        defines "FL_DEBUG"

    filter { "configurations:Development" }
        runtime "Release"
        symbols "On"
        optimize "On"

        defines "FL_DEV"

    filter { "configurations:Distribution" }
        runtime "Release"
        optimize "On"

        defines "FL_DIST"