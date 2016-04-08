
#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <memory>

int main(int argc, char **argv)
{

    int n;
    n = 2;
    switch (n)
    {
#include "macrotest.h"	    
	default:
	   std::cout << "unknown case." << std::endl;
    }
    return 0;
}


