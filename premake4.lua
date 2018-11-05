solution "Onyx"
configurations { "Debug", "Release"}

project "Onyx"
kind "SharedLib"
language "C++"
files {"**.hpp", "**.cpp" }

buildoptions { "-std=c++1y" } 

configuration "Debug"
defines { "DEBUG" }
flags { "Symbols" }

configuration "Release"
defines { "NDEBUG" }
flags { "Optimize" }