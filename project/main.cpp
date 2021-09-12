#include <stdio.h>
#include <string.h>
#include "cpp_learn1.h"

int main(int argc, char** argv)
{
    Human ZhangShan;

    ZhangShan.SetHumanName("张山");
    ZhangShan.SetHumanAge(30);
    ZhangShan.SetHumanJob("工程师");

    ZhangShan.PrintHumanMessage();

    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    
	return 0;
}
