workspace "DocTest"
    architecture "x64"
    configurations { "Debug", "Release" }
    startproject "proj"

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "proj"
    language "C++"
    kind "ConsoleApp"
    cppdialect "C++17"

    targetdir ("bin/" .. outputdir .. "/%{prj.name}")
    objdir ("obj/" .. outputdir .. "/%{prj.name}")

    files {
        "src/**.hpp",
        "src/**.cpp"
    }

    includedirs {
        "src"
    }

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"
