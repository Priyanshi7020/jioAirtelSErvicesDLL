#pragma once
#include <iostream>
#include "iHelloWorld.h"
using namespace std;
class anotherHelloWorld: public iHelloWorld
{
public:
	anotherHelloWorld();
	void greet();
};

