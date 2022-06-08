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
    //static allocation 
    Hero ironMan;
    ironMan.level = 50;
    cout<<ironMan.level<<endl;
    ironMan.setHealth(40);
    cout<<ironMan.getHealth()<<endl;

    //dynamic allocation
    Hero *spiderMan = new Hero;
    (*spiderMan).level = 60;      //dereferencing and then allocating the values
    cout<<(*spiderMan).level<<endl;
    spiderMan->setHealth(70);
    cout<<spiderMan->getHealth()<<endl;


    

    return 0;

}