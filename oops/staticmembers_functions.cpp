#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
        int level;
        string name;

        static int time ;

        int getLevel(){
            return this->level;
        }

        static int getTime(){
            return time;
        }
};

int Hero::time = 5;

int main(){
   cout<< Hero::time;  // we don't need to create object to access static data members of any class

   cout<<Hero::getTime(); //It can access only static data members.

   Hero a;
   cout<< a.time; // we can access through this also but it is also recommended.

   return 0;
}