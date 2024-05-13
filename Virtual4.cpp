#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        void Fun()              // defination
        {   cout<<"base fun\n"; }
        void Gun()              // defination
        {   cout<<"base gun\n"; }
        virtual void Sun()              // defination
        {   cout<<"base sun\n"; }
        virtual void Moon()
        {   cout<<"base Moon\n"; }
};

class Derived : public Base{    
    public:
        int X,Y;
       virtual void Gun()                  
        {   cout<<"derived gun\n";  }
       virtual void Sun()                  
        {   cout<<"derived sun\n";  }
       virtual void Star()                 
        {   cout<<"derived star\n"; }
};
int main()
{
    Derived dobj; 
    Base *bp = &dobj;
   
    cout<<"size of base class object: "<<sizeof(Base)<<"\n";
    cout<<"sixe of derived class :"<<sizeof(Derived)<<"\n";
    cout<<"sixe of gun method: <<sizeof(Gun())<<"\n";

    return 0;
}