
interface Circle
{
    public float Radius = 10.5f;
    public float PI = 3.14f;

    public float Area();
    public float Circumfarance();
}

class Marvellous implements Circle{
    public float Area()
    {

    }
}

class Blueprint
{
    public static void main(String[] args) {
        
        Marvellous mobj = new Marvellous();

        System.out.println("area is :"+mobj.Area());
        System.out.println("circumferance is :"+mobj.Circumfarance());

    }
}