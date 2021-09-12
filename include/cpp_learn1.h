#ifndef _CPP_LEARN1_H_
#define _CPP_LEARN1_H_
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

class Human {

public:
    bool SetHumanName(const char *name);
    bool SetHumanAge(int age);
    bool SetHumanJob(const char *job);
    bool PrintHumanMessage(void);
private:
    const char *name;
    int age;
    const char *job;

};


#endif
