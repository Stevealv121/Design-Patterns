#include <iostream>
#include "Singleton.hpp"

using namespace std;

int main() {

    cout << "Hello, World!, trying singletons" << std::endl;

    Singleton* singleton = Singleton::getInstance();
    Singleton* notSingleton = Singleton::getInstance();

    cout << singleton << endl;
    cout << notSingleton << endl;

    return 0;
}