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

        friend Complex operator -(Complex);
};

Complex operator -(Complex c1)
{
    Complex temp;
    temp.real = -c1.real;
    temp.complex = -c1.complex;
    return temp;
}

int main(){
    Complex c1;
    c1.setData(3,4);


    Complex c3;

    c3 =-c1;

    c3.getData();

    return 0;
}