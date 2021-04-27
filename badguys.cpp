#include "badguys.h"
#include "ally.h"
#include <iostream>
using namespace std;




void badguys::setHP(int a, int b)
{
    health = a;
    armour = b;
}

void badguys::setDamage(int c)
{
    dmg = c;
}

void badguys::showHealth()
{
    cout << "the enemy health is: " << health << " and armour is: " << armour;
}


int badguys::getHealth()
{
    return health;
}

int badguys::getDamage()
{
    return dmg;
}

badguys badguys::operator - (badguys c)
{
    badguys temp;
    if(armour > c.dmg){
        temp.armour = armour - c.dmg;
        temp.health = health;
    }else{
        temp.armour = armour - c.dmg;
        temp.health = health + temp.armour;
        temp.armour = 0;
    }
    if(temp.health < 0)
        temp.health = 0;

    return(temp);
}
