import java.util.*;

class Exception3
{
    public static void main(String[] args) 
    {
        try
        {
            System.out.println("inside try block");

            Scanner sobj = new Scanner(System.in);
            int Arr[] = {10,20,30,40,50};

            System.out.println("enter the index number :");
            int i = sobj.nextInt();

            System.out.println(Arr[i]);
        }
        catch(ArrayIndexOutOfBoundsException obj)
        {
            System.out.println("inside catch block");
        }
        finally  // this block execute always
        {
            System.out.println("inside finally block");
        }
        System.out.println("End of code");
   }
}