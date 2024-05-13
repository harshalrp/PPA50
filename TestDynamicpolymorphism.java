class One
{
    //moethod calculate square value
    void calculate(double x)
    {
        System.out.println("square value is =" +(x*x));
    }
}
class Two extends One
{
    void calculate(double x)
    {
        System.out.println("square root =" +Math.sqrt(x));
    }
}
class TestDynamicpolymorphism
{
    public static void main(String arg[])
    {
        Two t = new Two();
        //One o = new One();
        t.calculate(25);
    }
}