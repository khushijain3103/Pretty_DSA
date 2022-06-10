#include<iostream>
using namespace std;

class Complex{
    int real;
    int complex;

    public:
        void getData(){
            cout<<this->real;
            cout<<this->complex;
        }

        void setData(int real , int complex){
            this->real = real;
            this->complex = complex;
        }

        friend void add(Complex);
};

void add(Complex c)
{
    cout<<c.real+c.complex;   //since friend function do not have any caller object we pass the object 
                            // for which we wanna call object and access it's members .
}

int main(){
    Complex c1;
    c1.setData(3,4);
    add(c1);

    return 0;
}