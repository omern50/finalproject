#ifndef ALLY_H
#define ALLY_H
#include <iostream>
using namespace std;

class ally
{
    public:


        void setHP(int a, int b);

        void setDamage(int c);

        int showHealth();

        int getHealth();

        int getDamage();


        ally operator - (ally c);

    private:
        int health;
        int armour;
        int dmg;
        int y;

};

#endif // ALLY_H
