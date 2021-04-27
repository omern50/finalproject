#ifndef ATTACKS_H
#define ATTACKS_H


class attacks
{
    public:
       virtual void setAttackPower(int a) = 0;

    protected:
        int power;
    private:
};

#endif // ATTACKS_H
