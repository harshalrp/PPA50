
class Command
{
    public static void main(String arg[]) 
    {
        System.out.println("number of command line argument are :\n"+arg.length);   
        int i = 0;
        for(i = 0; i < arg.length; i++)
        {
            System.out.println(arg[i]);
        } 
    }
}