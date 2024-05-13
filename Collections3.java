// LinkedList

import java.util.*;

class Collections3
{
    public static void main(String ad[])
    {
        Stack<Float> sobj = new Stack<Float>();

        sobj.push(10.8f);
        sobj.push(20.8f);
        sobj.push(13.8f);
        sobj.push(15.8f); 

        float fret = sobj.pop();
        System.out.println(fret);

        fret = sobj.pop();
        System.out.println();

    }
}
