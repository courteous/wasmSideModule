if ("${CMAKE_BUILD_TYPE}" MATCHES "WASM")
	set(CMAKE_SYSTEM_NAME Emscripten)
	MESSAGE( STATUS "WASM COMPILER TOOLCHAIN WILL BE EXECUTED")

set( WASM_SRC

	mainWasm.cpp
	)

	add_executable(wasmExec  ${WASM_SRC} )
	
	target_link_libraries(wasmExec my_shared_lib)
	
   	set_target_properties(wasmExec PROPERTIES LINK_FLAGS "-std=c++17 -s MAIN_MODULE=1  -s WASM=1 -s TOTAL_MEMORY=512MB -s ALLOW_MEMORY_GROWTH=0 -s NO_EXIT_RUNTIME=1  -s VERBOSE=1  -s DEMANGLE_SUPPORT=1 -s DISABLE_EXCEPTION_CATCHING=0 -s ERROR_ON_UNDEFINED_SYMBOLS=0 -s EXTRA_EXPORTED_RUNTIME_METHODS='['cwrap', 'getValue', 'setValue']'   " )

	target_compile_options(wasmExec PUBLIC ${CMAKE_C_FLAGS} -emit-llvm)
	target_compile_options(wasmExec PUBLIC ${CMAKE_CXX_FLAGS} -flto)
	target_compile_options(wasmExec PUBLIC ${CMAKE_CXX_FLAGS} -emit-llvm)


endif ()

