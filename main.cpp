#include "Gun.h"
#include "Soldier.h"
#include <iostream>

void test()
{
    Solider sanduo("xusanduo");
    sanduo.addGun(new Gun("AK47"));
    sanduo.addBulletToGun(20);
    sanduo.fire();
}

int main()
{
    // int a;
    // std::cout << "This is a test string..." << std::endl;
    // std::cout << "This is a test string..." << std::endl;
    test();
    return 0;
}