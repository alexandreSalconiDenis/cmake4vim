#include <test_class.hpp>
#include <iostream>
#include "otherclass.h"
#include "otherclass0.h"

int main() {
    TestLib::TestClass c;
    //asdasdadda;
    otherclass::printstatic();
    std::cout << c.f1() << std::endl;
    otherclass0::printstatic();
    if (c.f2() != "F2 default")
        return 1;
    return 0;
}
