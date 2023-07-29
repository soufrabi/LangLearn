
using System;

namespace Giraffe
{
    class Solution
    {
    
        static double MyPow(double a,int b){
            
            if(b<0){
                Console.WriteLine("Exponent cannot be negative");
                return -1.0;
            }

            double res=1.0;
            while(b>0)
            {
                res*=a;
                b--;
            }
            return res;

        }
        static void Main(string[] args)
        {
            double baseNum;
            int powerNum;
            try{
                Console.Write("Enter the BASE : ");
                baseNum=Convert.ToDouble(Console.ReadLine());
                Console.Write("Enter the EXPONENT : ");
                powerNum=Convert.ToInt32(Console.ReadLine());
            }
            catch(FormatException e){
                Console.WriteLine("ERROR = "+e.Message);
                return ;
            }
            Console.WriteLine(baseNum+" ^ "+powerNum+" = "+MyPow(baseNum,powerNum));

            
        }
    }
}