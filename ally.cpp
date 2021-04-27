#include "badguys.h"
#include "ally.h"
#include <iostream>
using namespace std;

void ally::setHP(int a, int b)
{
    health = a;
    armour = b;
}

void ally::setDamage(int c)
{
    dmg = c;
}

int ally::showHealth()
{
    cout << "your health is: " << health << " and your armour is: " << armour << endl;

}

int ally::getHealth()
{
    return health;
}

int ally::getDamage()
{
    return dmg;
}

ally ally::operator - (ally c)
{
    ally temp;
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
