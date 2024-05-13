class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Base constructor");
    }
    public void Fun()
    {
        System.out.println("inside base fun");
    }
}

class Derived extends Base   //in c++,  class Derived : public Base
{
    public int X, Y;
    public Derived()
    {
        System.out.println("derived constructor");
    }
    public void Gun()
    {
        System.out.println("inside derived gun");
    }
}

class SingleX
{
    public static void main(String arg[])
    {
        Base bobj1 = new Base();   // nocasting
        Derived dobj1 = new Derived();   // nocasting
        Base bobj2 = new Derived();  //upcasting  (A)
        Derived dobj2 = new Base();  //Downcasting  (NA)
    }
}