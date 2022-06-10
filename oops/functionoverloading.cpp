#include<bits/stdc++.h>
using namespace std;

class Objects{

    int length;
    int breadth;
    int radius;

    public:
    
    void set_length(int length){
        this->length = length;
    }
    void set_breadth(int breadth){
        this->breadth = breadth;
    }
    void set_radius(int radius){
        this->radius = radius;
    }

    int area(int length , int breadth){
        return length*breadth;
    }

    int area(int radius)
    {
        return 3.14*radius*radius;
    }
};

int main(){

    Objects rectangle;

    rectangle.set_length(5);
    rectangle.set_breadth(10);

    Objects circle;

    circle.set_radius(7);

    cout<<rectangle.area(5,10)<<endl;
    cout<<circle.area(7)<<endl;

    

    return 0;
}