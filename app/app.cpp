
// app.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
    char* val = getenv("NAM");
    
    printf("%s\n", val);

    std::cout << val << std::endl;


	return 0;
}

