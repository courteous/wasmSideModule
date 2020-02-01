set(SHARED_SRC 	
			TestSharedClass.cpp TestSharedClass.h 
	)



set(LIB_TYPE STATIC)


add_library(my_shared_lib ${LIB_TYPE} ${SHARED_SRC} )


if ("${CMAKE_BUILD_TYPE}" MATCHES "WASM")
MESSAGE( "my_shared_lib marked as SIDE_MODULE=1 ")

set_target_properties(my_shared_lib PROPERTIES LINK_FLAGS "-std=c++17 -s SIDE_MODULE=1  -s WASM=1  " )

endif ()


target_include_directories(my_shared_lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/") 

