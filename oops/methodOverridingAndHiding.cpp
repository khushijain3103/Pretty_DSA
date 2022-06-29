#include<bits/stdc++.h>
using namespace std;

class Car{
    int a;
    int b;

    public:
        void shiftGear()
        {
            cout<<"odinary gear system";
        }

        void features()
        {
            cout<<"odinary features";
        }
};

class SportsCar : public Car {
    public:
        void shiftGear()
        {
            cout<<"advanced gear system";
        }

        void features(int x , int y)
        {
            cout<<"advanced features";
        }
};

int main()
{
    SportsCar ferrari;
    ferrari.shiftGear(); //method overriding
    ferrari.features(); //error
    ferrari.features(3,5);  //method hiding

    //due to early binding object ferrai will call functions from it's class first then it will move 
    //to the parent class so it will find both functions in it's own class so,it will never call it's
    // parents functions which is sometimes important in our code.
}

