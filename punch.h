#ifndef PUNCH_H
#define PUNCH_H
#include "attacks.h"

class punch: public attacks
{
    public:
        void setAttackPower(int a);
        int getPunchPower();


    protected:

    private:
};

#endif // PUNCH_H
