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

    ~Hero(){
        cout<<"destructor is called"<<endl;
    }

};

int main()
{
    //static object
    Hero ironMan;


    //dynamic object
    Hero *spiderMan = new Hero();
    delete spiderMan;
    

    return 0;

}