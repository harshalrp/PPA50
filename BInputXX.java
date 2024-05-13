import java.io.*;

class BInputXX
{
    public static void main(String arg[])
    {
        try
        {
            //InputStreamReader iobj = new InputStreamReader(System.in);
             //BufferedReader bobj = new BufferedReader(iobj);

            BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
          
            System.out.println("enter first number");
            int No1 = Integer.parseInt(bobj.readLine());
            
            System.out.println("enter second number");
            int No2 = Integer.parseInt(bobj.readLine());
        }
        catch(IOException obj)
        {
           iRet =  int No1 + int No2;
           System.out.println("addition is "+iRet);
        }
    }

}