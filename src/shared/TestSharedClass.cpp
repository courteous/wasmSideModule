#include "TestSharedClass.h"

#include <stdio.h>
#include <iostream>


using namespace std;

namespace wasm {

TestSharedClass::TestSharedClass() {

	cout << "hello from TestSharedClass constructor"  << endl;

}

TestSharedClass::~TestSharedClass() {

}

} /* namespace wasm */

