#pragma once
class Zombie
{
public:
    void statusSet();
   
private:
    int Z_MAXHP=15;
    int Z_MAXMP=6;
    int Z_HP;
    int Z_MP;
};