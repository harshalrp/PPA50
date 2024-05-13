class Student implements cloneable
{
    public String Name;
    public int marks;
    public int Age;

    public Student(String str, int A, int B)
    {
        this.Name = str;
        this.marks = A;
        this.Age = B;
    }
    public Object clone()throws CloneNotSupportedException
    {
        return super.clone();
    }
}
class CopyDemo
{
    public static void main(String arf[])
    {
        try
        {
            Student sobj = new Student("gotya",78,23);
            System.out.println("name of student "+sobj.Name);
            System.out.println("name of student "+sobj.marks);
            System.out.println("name of student "+sobj.Age);


            Student sobj1 = new Student("gotya",78,23);
            System.out.println("name of student "+sobj.Name);
            System.out.println("name of student "+sobj.marks);
            System.out.println("name of student "+sobj.Age);
        }
        catch(Exception obj)
    }
}