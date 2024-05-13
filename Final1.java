
class Demo{
    public int no1;
    public final int no2;

    public Demo()
    {
        no1 = 11;
        no2 = 21
    }
}

class Final1
{
    public static void main(String arg[])
    {
        Demo obj = new Demo();

        obj.no1++;
        obj.no2++;  //NA  obj.no2+1
    }
}