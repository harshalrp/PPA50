class Oop{
    public static void main(String arg[])
    {
        Arithematic obj1 = new Arithematic();
        Arithematic obj2 = new Arithematic(11,21);

        int ret = 0;

        ret = obj2.Addition();
        System.out.println(ret);

        ret = obj2.Subtraction();
        System.out.println(ret);
    }
}
class Arithematic
{
    public int no1;
    public int no2;

    public Arithematic()
    {
        System.out.println("inside default constructor");
        this.no1 = 0;
        this.no2 = 0;
    }
    public Arithematic(int a, int b)
    {
        System.out.println("inside parametrised constructor");
        this.no1 = a;
        this.no2 = b;
    }
    public int Addition()
    {
        int ans = 0;
        ans = no1+no2;
        return ans;
    }
    public int Subtraction()
    {
        int ans =0;
        ans = no1-no2;
        return ans;
    }
}