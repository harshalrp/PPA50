import java.net.*;
import java.io.*;

class Client
{
    public static void main(String[] args) throws Exception
    {
        System.out.println("client application is running...");

        Socket sobj = new Socket("localhost",2100);
        System.out.println("client get succesfully connected");

        PrintStream ps = new PrintStream(sobj.getOutputStream());
        BufferedReader br1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));
        String str1, str2;

        System.out.println("Marvellous messanger started..."); 
        while(!(str1 = br2.readLine()).equals("end"))
        {
            ps.println(str1);
            str2 = br1.readLine();
            System.out.println("enter message for server: ");
            System.out.println("server says : "+str2);
        }
        System.out.println("thank you for using Marvellous Massanger...");
    }
}