#include "kick.h"
#include "punch.h"
#include "attacks.h"
#include "badguys.h"
#include "ally.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void kick::setAttackPower(int a)
{
    power = a;
    srand(time(0));
}

int kick::getKickPower()
{
    int random;
    random = 1+(rand()%3);
    if(random == 1 || random == 2){
        return (power);
    }else{
        return (0);
    }


}
