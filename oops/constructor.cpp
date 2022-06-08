#include<bits/stdc++.h>
using namespace std;

class Hero{

    int health;

    public:
        int level;

    Hero()
    {
        cout<<"constructor called";
    }

    Hero(int health , int level)
    {
        this->health = health ; 
        this->level = level;
    }

    Hero(Hero &spiderMan)
    {
        this->health = spiderMan.health;
        this->level = spiderMan.level;
    }

    //getter function
    int getHealth(){
        return health;
    }

    //setter function
    int setHealth(int h)
    {
        health = h;
    }

};

int main()
{
    //default constructor is called
    Hero ironMan;
    ironMan.level = 50;
    cout<<ironMan.level<<endl;
    ironMan.setHealth(40);
    cout<<ironMan.getHealth()<<endl;

    //parameterized constructor is called
    Hero spiderMan(50,70);
    cout<<spiderMan.level<<endl;
    cout<<spiderMan.getHealth()<<endl;

    //copy constructor is called

    Hero batMan(spiderMan);
    cout<<batMan.level<<endl;
    cout<<batMan.getHealth();


    return 0;

}