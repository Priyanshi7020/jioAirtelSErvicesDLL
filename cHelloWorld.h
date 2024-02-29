#pragma once
#include <iostream>
#include "iHelloWorld.h"
using namespace std;
class cHelloWorld:public iHelloWorld
{
public:
	cHelloWorld();
	void greet();
};

