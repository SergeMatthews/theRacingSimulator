
cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("theRacingDLLCMake")

set(HEADERS "Transport/DLLExport.h"
			"Transport/AllTransport.h" 
			"Transport/Racing.h" 
			"Transport/Transport.h" 
			"Transport/Terrestrial.h" 
			"Transport/OffRoadBoots.h"
			"Transport/Camel.h" 
			"Transport/Centaur.h" 
			"Transport/FastCamel.h" 
			"Transport/Aerial.h" 
			"Transport/Broom.h" 
			"Transport/Eagle.h" 
			"Transport/FlyingCarpet.h" 

)
set(SOURCES "Transport/Racing.cpp" 
			"Transport/Transport.cpp" 
			"Transport/Terrestrial.cpp" 
			"Transport/OffRoadBoots.cpp"
			"Transport/Camel.cpp" 
			"Transport/Centaur.cpp" 
			"Transport/FastCamel.cpp" 
			"Transport/Aerial.cpp" 
			"Transport/Broom.cpp" 
			"Transport/Eagle.cpp" 
			"Transport/FlyingCarpet.cpp" 
)
add_library(TransportLib SHARED ${HEADERS} ${SOURCES})
add_executable(theRacingDLLCMakeExe "theRacingClient.cpp")
target_link_libraries(theRacingDLLCMakeExe "TransportLib")
target_compile_definitions(TransportLib PRIVATE THERACINGDLL_EXPORTS)