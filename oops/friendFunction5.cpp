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



int main(){
    Complex c1;



    

    return 0;
}