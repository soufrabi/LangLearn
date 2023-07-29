
using System;

namespace Giraffe
{
    class Solution
    {
    
        static void Main(string[] args)
        {
            Console.Write("Enter your name : ");
            string name=Console.ReadLine();
            Console.Write("Enter your age : ");
            int age=Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter yout CGPA : ");
            double cgpa=Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Hello! "+name);
            Console.WriteLine("You are "+age+" years old");
            Console.WriteLine("Your CGPA  is "+cgpa);
        }
    }
}