
class Marvellous{

    public int i, j;
    public Marvellous()
    {
        System.out.println("marvellous constructor");
    }

    protected void finalize()
    {
        System.out.println("inside finalize method");
    }
}
 //class ObjectDemo extends Object
 class ObjectDemo1
 {
    public static void main(String[] args)
    {
        Marvellous obj = new Marvellous();
        System.out.println(obj.hashCode());
        obj = null;
        System.gc();
    }
 }