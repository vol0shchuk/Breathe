#pragma once


#ifndef HUMAN_H
#define HUMAN_H

#include <string>

struct Human {
    std::string name;
    int age;
};

void askUserData(Human& person);

#endif // HUMAN_H