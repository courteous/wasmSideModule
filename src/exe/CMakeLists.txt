if ("${CMAKE_BUILD_TYPE}" MATCHES "Linux")



	add_executable(mainTestFile  main.cpp)
	
	target_link_libraries(mainTestFile my_shared_lib)
	target_compile_options(mainTestFile PUBLIC ${CMAKE_C_FLAGS} )
	
endif ()
