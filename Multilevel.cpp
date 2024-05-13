#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        Base()
        {   cout<<"inside base constructor\n";
            A = 11;
            B = 33;
        }
        ~Base()
        {   cout<<"inside Base destructor\n";   }
        void Fun()
        {   cout<<"inside base fun\n";  }
};
class Derived : public Base
{   
    public:
        int X,Y;
        Derived()
        {   cout<<"inside derived constructor\n";
            X = 51;
            Y = 61; 
        }
        ~Derived()
        {   cout<<"inside Derived destructor\n";    }
        void Gun()
        {   cout<<"inside base Gun\n";  }
};
class DerivedX : public Derived
{   
    public:
        int P = 111;
        Derived()
        {   cout<<"inside derived constructor\n"; }
        ~Derived()
        {   cout<<"inside Derived destructor\n";    }
        void Sun()
        {   cout<<"inside base Sun\n";  }
};

int main()
{
    Derived dobj;  // constructor of Base constructor of Derived constructor of DerivedX
    cout<<"size of object is : "<<sizeof(dobj)<<"\n";  //20

    cout<<dobj.A<<"\n";
    cout<<dobj.B<<"\n";
    cout<<dobj.X<<"\n";
    cout<<dobj.Y<<"\n";
    cout<<dobj.P<<"\n";

    dobj.Fun(); //Base Fun
    dobj.Gun(); //Derived Gun
    dobj.Sun(); //Derivedx Sun

    //Destructor of DerivedX
    //Destructor of Derived
    //Destructor of Base
    return 0;
}