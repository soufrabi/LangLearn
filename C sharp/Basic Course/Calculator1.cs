
using System;

namespace Giraffe
{
    class Solution
    {
    
        static void Calc()
        {
            double num1,num2,result;
            string op;

            Console.Write("Enter number 1 : ");
            num1=Convert.ToDouble(Console.ReadLine());

            Console.Write("Enter operator : ");
            op=Console.ReadLine();

            Console.Write("Enter number 2 : ");
            num2=Convert.ToDouble(Console.ReadLine());

            if(op=="+"){
                result=num1+num2;
            }
            else if(op=="-"){
                result = num1 - num2;
            }
            else if(op=="*"){
                result= num1*num2;
            }
            else if(op=="/"){
                result=num1/num2;
            }
            else{
                Console.WriteLine("INVALID OPERATOR");
                return;
            }
            Console.WriteLine(num1+" "+op+" "+num2+" = "+result);

        }
        static void Main(string[] args)
        {
            Calc();
            
        }
    }
}