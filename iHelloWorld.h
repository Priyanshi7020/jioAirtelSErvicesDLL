#pragma once
#ifdef RESOURCE_LIB
#define RESOURCE_API __declspec(dllexport)
#else
#define RESOURCE_API __declspec(dllexport)
#endif 
#include <iostream>
using namespace std;
class RESOURCE_API iHelloWorld
{
public:
	virtual void greet()=0;
};

