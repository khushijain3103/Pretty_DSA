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

        friend Complex operator +(Complex , Complex);
};

Complex operator +(Complex c1 , Complex c2)
{
    Complex temp;
    temp.real = c1.real+c2.real;
    temp.complex = c1.complex + c2.complex;
    return temp;
}

int main(){
    Complex c1,c2;
    c1.setData(3,4);
    c2.setData(5,6);

    Complex c3;

    c3 = c1+c2;

    c3.getData();

    return 0;
}