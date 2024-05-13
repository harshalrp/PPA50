import java.io.*;

class BInput
{
    public static void main(String arg[])
    {
        try
        {
            //InputStreamReader iobj = new InputStreamReader(System.in);
             //BufferedReader bobj = new BufferedReader(iobj);

            BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
            System.out.println("enter your name: ");
            String name = bobj.readLine();

            System.out.println("welcome :"+name);
        }
        catch(IOException obj)
        {}
    }

}