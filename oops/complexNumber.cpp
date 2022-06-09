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

      Complex add (Complex c)
      {
          Complex ans;
          ans.real = real+c.real;
          ans.complex =complex +c.complex;

          return ans;
      }
};

int main(){

    Complex c1;
    c1.set_data(3,4);

    Complex c2;
    c2.set_data(5,6);

    Complex c3;

    c3 = c1.add(c2);
    c3.get_data();

    return 0;
}