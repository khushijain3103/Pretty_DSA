#include<iostream>
using namespace std;

class Complex{

    int real;
    int complex;

    public:

      void set_data(int real ,int complex){
          this->complex = complex;
          this->real = real;
      }

      void get_data(){
          cout<<this->real<<endl;
          cout<<this->complex;
      }

      Complex operator +(Complex c)
      {
          Complex ans;
          ans.real = real+c.real;
          ans.complex =complex +c.complex;

          return ans;
      }

      Complex operator -(){
          Complex temp;
          temp.real = -real;
          temp.complex = -complex;

          return temp;
      }
};

int main(){

    Complex c1;
    c1.set_data(3,4);

    Complex c2;
    c2.set_data(5,6);

    Complex c3;
    Complex c4;

     // c3 = c1.+(c2);   we can call it this way definitely but in operator overloading
    //this is binary operator overloading we have to pass arguments in it
    c3 = c2+c1;        //this is also valid here left object i.e. c2 will always be the caller object
    //uniary overloading   we cannot pass arguments in it
    c4=-c1; 
    c3.get_data();
    c4.get_data();

    return 0;
}