cmake_minimum_required(VERSION 3.13)
project(Static_Mexanic LANGUAGES CXX) #VERSION 1.0

include_directories(
    include/rho_lib
    include/potencial_lib
    include/integral_lib
    include
)

set(SOURCE_EXE static.cpp)
set(SOURCE_LIB1 include/rho_lib/rho.cpp include/rho_lib/rho_Macsvel.cpp include/rho_lib/rho_Bolcman.cpp include/rho_lib/rho_Fermi.cpp)
set(SOURCE_LIB2 include/potencial_lib/potencial.hpp include/potencial_lib/potencial_grav.cpp include/potencial_lib/energy.hpp include/potencial_lib/energy_v1.cpp)
set(SOURCE_LIB3 include/integral_lib/Integral.hpp include/integral_lib/Integral_improper.hpp include/integral_lib/Integral_identify.hpp)

add_library(rho_lib SHARED ${SOURCE_LIB1})
add_library(potencial_lib SHARED ${SOURCE_LIB2})
add_library(Integral_lib SHARED ${SOURCE_LIB3})

add_executable(static ${SOURCE_EXE})

set_target_properties(rho_lib PROPERTIES LINKER_LANGUAGE CXX)
set_target_properties(potencial_lib PROPERTIES LINKER_LANGUAGE CXX)
set_target_properties(Integral_lib PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(static
    rho_lib
    potencial_lib
    Integral_lib
)