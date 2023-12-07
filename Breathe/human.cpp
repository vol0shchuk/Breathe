#include "humah.h"
#include <iostream>
using namespace std;

void askUserData(Human& person) {
    cout << "Enter your name: ";
    cin >> person.name;

    cout << "Enter your age: ";
    cin >> person.age;
}