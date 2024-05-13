import java.awt.*;

class MarvellousFrame
{
    public MarvellousFrame(String title)
    {
        Frame fobj = new Frame(title);
        fobj.setSize(300,300);
        fobj.setVisible(true);
    }
}
class GUI2
{
    public static void main(String jk[])
    {
        MarvellousFrame mobj = new MarvellousFrame("Mobile");
    }
}