class Marvellous
{
    synchronized void Dislpay(int no)
    {
        try
        {
            int i  = 0;
            for(i = 1; i <= 10; i++)
            {
                System.out.println(i*no);
                Thread.sleep(1000);
            }
        }
        catch(Exception obj)
        {}
    }
}
class Demo extends Thread
{
    public void run()
    {
        Marvellous mobj = new Marvellous();
        mobj.Dislpay(5);
    }
}

class Hello extends Thread
{
    public void run()
    {
        Marvellous mobj = new Marvellous();
        mobj.Dislpay(2);
    }
}

class Multi9
{
    public static void main(String[] args) 
    {
        Demo dobj = new Demo();
        Hello hobj = new Hello();

        dobj.start();
        hobj.start();
    }
}