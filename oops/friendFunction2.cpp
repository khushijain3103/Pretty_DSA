#include<bits/stdc++.h>
using namespace std;

class B;

class A{
    int a;

    friend void add(A,B);
};
class B{
    int b;

    friend void add(A,B);

};

void add(A obj1,B obj2){
    cout<<obj1.a + obj2.b;
}

int main(){
    A obj1;
    B obj2;

    add(obj1,obj2);

    return 0;
}