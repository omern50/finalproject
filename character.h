#ifndef CHARACTER_H
#define CHARACTER_H


class character
{
    public:
        virtual void setHP(int a, int b) = 0;

        virtual void setDamage(int c) = 0;

        virtual void showHealth() = 0;

        virtual int getHealth() = 0;

        virtual int getDamage() = 0;

    protected:

    private:
};

#endif // CHARACTER_H
