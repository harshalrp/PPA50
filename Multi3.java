class Demo extends Thread
{
    public void run()
    {   //logic of thread
        int i = 0;
        String name = Thread.currentThread().getName();
        for(i= 0; i<= 1000; i++)
        {
            System.out.println("running thread : "+name+" with value : " +1);
        }
    }
}

class Multi3
{
    public static void main(String[] args) 
    {
        System.out.println("currently Thread id is: "+Thread.currentThread().getName());
        Demo dobj1 = new Demo();
        Demo dobj2 = new Demo();

        dobj1.setName("PPA");
        dobj2.setName("Harhsal");

        dobj1.start();
        dobj2.start();
    }
}