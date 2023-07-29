using System;

namespace Giraffe
{
    class Solution
    {
    
        static void Main(string[] args)
        {
            Console.WriteLine("While Loops");
            int i=5;
            while(i>0)
            {
                Console.WriteLine(i);
                i--;
            }


            Console.WriteLine("Do-While Loops");
            i=7;
            do{
                Console.WriteLine(i);
                i--;
            }while(i>0);
            
            Console.WriteLine("For Loop");

            //try using int i in initialization part
            for( i=1;i<=5;i+=2)
            {
                Console.WriteLine(i);
            }
        }
    }
}