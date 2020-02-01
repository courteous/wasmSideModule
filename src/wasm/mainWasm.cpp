#ifndef MAIN_WASM
#define MAIN_WASM

#include <stdio.h>
#include <iostream>

#include <emscripten/emscripten.h>

using namespace std;

namespace wasm {


#ifdef __cplusplus
extern "C" {
#endif


void  EMSCRIPTEN_KEEPALIVE testMethod1(
)		{
	cout << "hello from testMethod1"  << endl;
}


int main(int argc, char **argv) {

	std::cout << " Hello from WASM !" << std::endl;
	cout << argc << endl;
	cout << argv << endl;

	return 0;
}


#ifdef __cplusplus
}
#endif


} // namespace wasm

#endif // MAIN_WASM
