class Base
{
    public int A, B;
    Base()
    {
        System.out.println("inside base constructor"); 
    }
    public void fun()
    {
        System.out.println("inside fun of base");
        this.A = 10;
        this.B = 30;
    }
}
class Derived extends Base
{
    public int X, Y;
    public Derived(int i, int j)
    {
        super();
        System.out.println("inside derived constructor");
        this.X = i; 
        this.Y = j;
    }
    public void gun()
    {
        System.err.println("inside gun of derived");
        super.fun();
        System.out.println("value of A :"+super.A);
        System.out.println("value of X :"+super.X);
    }
}
class Keyword 
{
    public static void main(String[] args)
    {
        Derived dobj = new Derived(11, 22);
        dobj.gun();
    }
}