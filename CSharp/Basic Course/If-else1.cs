
using System;

namespace Giraffe
{
    class Solution
    {
    
        static void Main(string[] args)
        {
            try{            
                Console.Write("Enter your age : ");
                int age=Convert.ToInt32(Console.ReadLine());

                if(age<18){
                    Console.WriteLine("You are UNDERAGED");
                }
                else if(age==18){
                    Console.WriteLine("Congrats! You have just become an adult");
                }
                else{
             
                    Console.WriteLine("You are an ADULT");
                }
            }
            catch(Exception e)
            {
                Console.WriteLine("ERROR : "+e.Message);
            }
            
            
        }
    }
}
