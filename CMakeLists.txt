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

# pull in OpenGL libraries
find_package(OpenGL REQUIRED)

add_executable(SFMLSampleGame src/main.cpp)

target_compile_features(SFMLSampleGame PRIVATE cxx_std_17)

# add linked libraries
target_link_libraries(SFMLSampleGame 
    sfml-graphics 
    sfml-window 
    sfml-system
    ${OPENGL_LIBRARIES}
)

set_property(TARGET SFMLSampleGame PROPERTY CXX_STANDARD 17)
