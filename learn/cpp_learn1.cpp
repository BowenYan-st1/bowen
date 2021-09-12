#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include "cpp_learn1.h"

bool Human::SetHumanAge(int age)
{
    if (age >= 0 && age <= 200) {
        this->age = age;
        return true;
    } else {
        printf("age is not in range\n");
        return false;
    }
}

bool Human::SetHumanName(const char *name)
{
    if (name == NULL) {
        printf("*name is NULL\n");
        return false;
    }
    this->name = name;
    return true;
}

bool Human::SetHumanJob(const char *job)
{
    if (job == NULL) {
        printf("*job is NULL\n");
        return false;
    }
    this->job = job;
    return true;
}

bool Human::PrintHumanMessage(void)
{
    if (name == NULL || job == NULL) {
        printf("input message is NULL\n");
        return false;
    }
    printf("name: %s, age: %d, job: %s\n", this->name, this->age, this->job);    
    return true;
}
