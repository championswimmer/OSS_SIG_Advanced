#include <iostream> 
#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int main() {
	int a, b;
	std::cin>>a>>b;
	std::cout<<cAdd(a,b);
	std::cout<<"\n";
	std::cout<<cSub(a,b);
	std::cout<<"\n";
	std::cout<<cMult(a,b);
	std::cout<<"\n";
	std::cout<<cDiv(a,b);
	std::cout<<"\n";
	return 0;
}