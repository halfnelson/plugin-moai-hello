#include "host.h"
#include "MOAIHello.h"
#include <moai_config.h>
#include <zl-util/headers.h>
#include <moai-core/headers.h>
#include <moai-sim/headers.h>
#include <moai-util/headers.h>

//----------------------------------------------------------------//
void MOAIHelloAppFinalize () {
}

//----------------------------------------------------------------//
void MOAIHelloAppInitialize () {

}

//----------------------------------------------------------------//
void MOAIHelloContextInitialize () {
	REGISTER_LUA_CLASS ( MOAIHello )
}

void MOAIHelloUpdate() {

}
