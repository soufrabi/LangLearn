using System;
namespace Giraffe
{
    class NoPurpose{
        static void Main(string[]args)
        {
            Console.WriteLine("Lets use variables");
            string name="John";
            int age=45;
            double cgpa=4.0;
            bool isMale=true;
            Console.WriteLine(name+" aged "+age+" denies Lenina");
            Console.WriteLine(name +" has cgpa "+cgpa+"\n and isMale = "+isMale);
            Console.WriteLine("Length of "+name+" is "+name.Length);
            Console.WriteLine(name.ToUpper());
            Console.WriteLine(name.Contains("hn"));
            Console.WriteLine(name[1]+name[3]+name[0]);
            Console.WriteLine(""+name[1]+name[3]+name[0]);
            Console.WriteLine(name.Substring(1,3));
        }
    }
}