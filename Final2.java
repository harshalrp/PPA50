class Base{
    
    public void fun()
    {
        System.out.println("inside base fun");
    }
    public final void gun()
    {
       System.out.println("inside base gun");
    }
}

class Derived extends Base
{
    public void fun()
    {
        System.out.println("inside derived fun");
    }
    public void gun()
    {
        System.out.println("inside derived gun");
    }
}
class Final2
{
    public static void main(String arg[])
    {
        Base obj = new Base();
        Derived dobj = new Derived();
        obj.
    }
}