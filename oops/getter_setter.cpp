#include<bits/stdc++.h>
using namespace std;

class Hero{

    int health;

    public:
        int level;

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
    Hero ironMan;

    //since level is a public member we can access it simply through dot operator
    ironMan.level = 50;
    cout<<ironMan.level<<endl;

    //setter function since health is a private member
    ironMan.setHealth(50);

    //getter function for health since health is a private member
    cout<<ironMan.getHealth()<<endl;

    cout<<sizeof(ironMan);

    return 0;

}