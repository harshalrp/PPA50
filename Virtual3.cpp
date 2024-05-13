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
        void Sun()              // defination
        {   cout<<"base sun\n"; }
};

class Derived : public Base{    
    public:
        int X,Y;
        void Gun()                  // Redefination
        {   cout<<"derived gun\n";  }
        void Sun()                  // Redefination
        {   cout<<"derived sun\n";  }
        void Star()                 // defination
        {   cout<<"derived star\n"; }
};
int main()
{
    Derived dobj; 
    Base *bp = &dobj;
   
   bp->Fun();
   
   bp->Gun();
   bp->Sun();
   //bp->Star();

    return 0;
}