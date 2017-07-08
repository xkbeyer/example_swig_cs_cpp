using System;

namespace TestMockCS
{
    class MainClass
    {
        public static void Main (string[] args)
        {
            Console.WriteLine ("start");
            Mock myMock = new Mock();
            Console.WriteLine("name: " + myMock.getName() );
            myMock.setName("Hello World");
            Console.WriteLine("name: " + myMock.getName() );
            IntVector v = myMock.getInts();
            foreach (var n in v)
            {
               Console.WriteLine("v = " + n);
            }
            IntMap map = myMock.getMap();
            foreach (var n in map)
            {
               Console.WriteLine("m = " + n);
            }
            map[3] = "bar";
            map[4] = "foo";
            myMock.printMap(map);
            myPtr_s ptr = myMock.getPtr();
            myPtr_s lastPtr = null;
            myPtr_s root = ptr;
            while (ptr != null)
            {
               Console.WriteLine("ptr->i=" + ptr.i);
               Console.WriteLine("ptr->s=" + ptr.s);
               lastPtr = ptr;
               ptr = ptr.next;
            }
            myPtr_s oneMore = new myPtr_s();
            oneMore.i = 3;
            oneMore.s = "one more from C#";
            oneMore.next = null;
            lastPtr.next = oneMore;
            myMock.printPtr(root);
            myPtr_s sp = myMock.getSharedPtr();
            Console.WriteLine("shared i=" + sp.i + " s=" + sp.s);
            Otto otto = myMock.getOtto();
            Console.WriteLine("otto i=" + otto.i() + " s=" + otto.s());
            otto.s("Karl");
            Console.WriteLine("otto i=" + otto.i() + " s=" + otto.s());
            Console.WriteLine("end.");
        }
    }
}
