#include "pch.h"
#include "cHelloWorld.h"
#include "CFactory.h"

iHelloWorld* CFactory::getInstance() {
	return new cHelloWorld;
}
