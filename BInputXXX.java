import java.io.*;

class BInputXXX
{
    public static void main(String arg[])throws IOException
    {

            //InputStreamReader iobj = new InputStreamReader(System.in);
             //BufferedReader bobj = new BufferedReader(iobj);

            BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
          
            System.out.println("enter first number");
            int No1 = Integer.parseInt(bobj.readLine());
            
            System.out.println("enter second number");
            int No2 = Integer.parseInt(bobj.readLine());

            int Ans = No1 + No2;
            System.out.println(Ans);
    }

}