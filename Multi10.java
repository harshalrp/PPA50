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
    public Marvellous obj;

    public Demo(Marvellous ref)
    {
        this.obj = ref;
    }
    public void run()
    {
       obj.Dislpay(5);
    }
}

class Hello extends Thread
{
    public Marvellous obj;

    public Hello(Marvellous ref)
    {
        this.obj = ref;
    }
    
    public void run()
    {
        obj.Dislpay(2);
    }
}

class Multi10
{
    public static void main(String[] args) 
    {
        Marvellous mobj = new Marvellous();

        Demo dobj = new Demo(mobj);
        Hello hobj = new Hello(mobj);

        dobj.start();
        hobj.start();
    }
}