cmake_minimum_required(VERSION 3.26)
project(SFMLSampleGame VERSION 0.1.0 LANGUAGES CXX)

# pull in SFML library from github repo
include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.0
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

add_executable(SFMLSampleGame src/main.cpp)
target_compile_features(SFMLSampleGame PRIVATE cxx_std_17)
target_link_libraries(SFMLSampleGame sfml-graphics)

set_property(TARGET SFMLSampleGame PROPERTY CXX_STANDARD 17)
