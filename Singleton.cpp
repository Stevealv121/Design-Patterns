//
// Created by steve on 23/03/19.
//

#include "Singleton.hpp"


Singleton :: Singleton() = default;

Singleton* Singleton::instance = nullptr;

Singleton* Singleton::getInstance() {

    if(instance == nullptr){

        instance = new Singleton();
    }

    return instance;
}


