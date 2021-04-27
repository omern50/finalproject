#ifndef BADGUYS_H
#define BADGUYS_H
#include <iostream>
using namespace std;

class badguys
{
    public:

        void setHP(int a, int b);

        void setDamage(int c);

        void showHealth();

        int getHealth();

        int getDamage();

        badguys operator - (badguys c);

    private:
        int health;
        int armour;
        int dmg;

};

#endif // BADGUYS_H
