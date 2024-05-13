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

class Single
{
    public static void main(String arg[])
    {
        Derived dobj = new Derived();
        dobj.Fun();
        dobj.Gun();
    }
}