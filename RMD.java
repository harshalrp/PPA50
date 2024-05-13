class Base
{
    public int A,B;
    public void Fun()
    {   System.out.println("inside base fun");  }
    public void Gun()
    {   System.out.println("inside base Gun");  }
    public void Sun()
    {   System.out.println("inside base Sun");  }
    public void Run()
    {   System.out.println("inside base Run");  }
}

class Derived extends Base   //in c++,  class Derived : public Base
{
    public int X, Y;
    public void Gun()
    {   System.out.println("inside derived Gun");   }
    public void Run()
    {   System.out.println("inside derived Run");   }
    public void Mun()
    {   System.out.println("inside derived Mun");   }
}

class RMD
{
    public static void main(String arg[])
    {
       Base bobj = new Derived();
       bobj.Fun();
       bobj.Gun();
       bobj.Run();
       bobj.Sun();
       bobj.Mun();
    }
}