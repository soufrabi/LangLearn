
using System;

namespace Giraffe
{
    class Solution
    {
    
        static double Cube(double num)
        {
            return num*num*num;
        }
        static void SayHi(string name)
        {
            Console.WriteLine("Hi! "+name);
        }
        static void Main(string[] args)
        {
            SayHi("Rachel");
            int x=3;
            Console.WriteLine("Cube of "+x+" = "+Cube(x));
            
        }
    }
}