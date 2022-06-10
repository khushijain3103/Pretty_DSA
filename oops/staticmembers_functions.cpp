#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
        int level;
        string name;

        static int time ;   //This time our static variable has no space in memory coz it is only declared

        int getLevel(){
            return this->level;
        }

        static int getTime(){
            return time;
        }
};

int Hero::time = 5;   //now this variable will have memory if we do not give it any value it will have 0
                    //in it and it will be there whether our object is made or not.

int main(){
   cout<< Hero::time;  // we don't need to create object to access static data members of any class

   cout<<Hero::getTime(); //It can access only static data members.

   Hero a;
   cout<< a.time; // we can access through this also but it is also recommended.

   return 0;
}