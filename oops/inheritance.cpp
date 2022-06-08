#include <bits/stdc++.h>
using namespace std;

class Human{
    public:
    int height;
    int weight;

    void setHeight(int height){
        this->height = height;
    }

    int getHeight(){
        return this->height;
    }

};

class Male: public Human{

    public:
    string colour;

    void sleep()
    {
        cout<<"I am sleeping ";
    }

};

int main(){

    Male garvit;
    garvit.height = 170;
    garvit.weight = 70;

    cout<<garvit.getHeight();
    garvit.colour = "brown";
    garvit.sleep();

    return 0;
}