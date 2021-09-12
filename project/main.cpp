#include <iostream>
#include <string.h>
#include "cpp_learn1.h"

#if 1
using namespace std;    //此处定义全局命令空间std，因此之后对该命名空间函数调用不需要加std::

int main(int argc, char** argv)
{
    // using namespace std;     //也可以定义局部命令空间
    Human ZhangShan;

    ZhangShan.SetHumanName("张山");
    ZhangShan.SetHumanAge(30);
    ZhangShan.SetHumanJob("工程师");

    ZhangShan.PrintHumanMessage();

    for (int i = 0; i < argc; i++) {
        cout << argv[i] << endl;
    }
	return 0;
}
#else
//此处没有定义全局命名空间，因此使用该空间函数时需要加std::
int main(int argc, char** argv)
{
    Human ZhangShan;

    ZhangShan.SetHumanName("张山");
    ZhangShan.SetHumanAge(30);
    ZhangShan.SetHumanJob("工程师");

    ZhangShan.PrintHumanMessage();

    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << std::endl;
    }
	return 0;
}
#endif  
