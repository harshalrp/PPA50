class Student
{
    public String Name;
    public int marks;
    public int Age;

    public Stident(String str, int A, int B)
    {
        this.Name = str;
        this.marks = A;
        this.Age = B;
    }
}
class CopyDemo
{
    public static void main(String arf[])
    {
        Student sobj - new Student("Gotya", 78,23);
        System.out.println("name of student "+sobj.Name);
        System.out.println("name of student "+sobj.marks);
        System.out.println("name of student "+sobj.Age);
    }
}