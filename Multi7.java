import java.io.IOException;

class Demo extends Thread 
{
    
    public void run()
    {   //logic of thread
        try
        {
            int i = 0;
            String name = Thread.currentThread().getName();
            for(i= 0; i<= 1000; i++)
            {
                System.out.println("running thread : "+name+" with value : " +i);
            }
        }
        catch(Exception obj)
        {}
    }

}

class Multi7
{
    public static void main(String[] args) 
    {
        System.out.println("currently Thread id is: "+Thread.currentThread().getName());
        Demo dobj1 = new Demo();
        Demo dobj2 = new Demo();

        dobj1.setName("PPA");
        dobj2.setName("Harhsal");

        System.out.println("priority of obj1 is :"+dobj1.getPriority());
        System.out.println("priority of obj1 is :"+dobj1.getPriority());
        dobj1.setPriority(10);
        dobj2.setPriority(10);
        dobj1.start();
        dobj2.start();
    }
}