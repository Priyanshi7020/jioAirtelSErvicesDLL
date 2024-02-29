#pragma once
#ifdef JIOSERVICES_LIB
#define JIOSERVICES_API __declspec(dllexport)
#else
#define JIOSERVICES_API __declspec(dllexport)
#endif 
class JIOSERVICES_API CFactory
{
public:
	static iHelloWorld* getInstance();
};

