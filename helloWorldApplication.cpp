#include <iostream>
#include "iHelloWorld.h"
#include "CFactory.h"
using namespace std;
int main()
{
    cout << "Hello World!\n";
    iHelloWorld* pHelloWorld = CFactory::getInstance();
    pHelloWorld->greet();

}

