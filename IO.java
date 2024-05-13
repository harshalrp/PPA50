import java.util.*;


class IO
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter forst number:");
        int no1 = sobj.nextInt();

        System.out.println("enter second number :");
        int no2 = sobj.nextInt();

        int Ans = no1+no2;

        System.out.println("addition is "+Ans);
   }
}