import java.util.*;

class Exception1
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter first number:");
        int no1 = sobj.nextInt();

        System.out.println("enter second number :");
        int no2 = sobj.nextInt();

        float Ans = no1/no2;

        System.out.println("Division is "+Ans);
   }
}