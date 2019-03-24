//
// Created by steve on 23/03/19.
//

#ifndef DESIGN_PATTERNS_SINGLETON_HPP
#define DESIGN_PATTERNS_SINGLETON_HPP


class Singleton {


private:

    static Singleton * instance;

    Singleton();

public:

    static Singleton * getInstance();

};


#endif //DESIGN_PATTERNS_SINGLETON_HPP
