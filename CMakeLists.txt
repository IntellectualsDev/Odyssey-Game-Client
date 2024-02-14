cmake_minimum_required(VERSION 3.27)
project(OdysseyClient)

set(CMAKE_CXX_STANDARD 17)

# Add the path to ENet header files, an explicit path to the .h files is not required, CMake will find them
include_directories(/usr/local/include)

# Add the path to ENet library
link_directories(/usr/local/lib)

add_executable(OdysseyClient main.cpp
        Client/DummyClient.cpp
        Client/DummyClient.h
)

target_link_libraries(OdysseyClient enet)
