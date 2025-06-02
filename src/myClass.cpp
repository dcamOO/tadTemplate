#include <iostream>
#include "../include/myClass.hpp"

//class implementation
MyClass::MyClass(){
    this->myAttribute = 0;
    std::cout << "MyClass constructor" << std::endl;
}

MyClass::~MyClass(){
    std::cout << "MyClass destructor" << std::endl;
}

void MyClass::myMethod(){
    std::cout << "MyClass method called" << std::endl;
}