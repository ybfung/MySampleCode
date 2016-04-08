#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <memory>

#define ERROR(code,des) case code: \
	std::cout << des << std::endl; \
	break;

ERROR(1,"This is one");
ERROR(2,"This is two");
ERROR(3,"This is two");



