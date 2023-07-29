
using System;

namespace Giraffe
{
    class Solution
    {
        static string dayName(int dayNum)
        {
            string dayName;
            switch(dayNum)
            {
                case 0:dayName="Sunday";
                        break;
                case 1:dayName="Monday";
                        break;
                case 2:dayName="Tuesday";
                        break;
                case 3:dayName="Wednesday";
                        break;
                case 4:dayName="Thursday";
                        break;
                case 5:dayName="Friday";
                        break;
                case 6:dayName="Saturday";
                        break;
                default:dayName="INVALID DAY NUMBER";
                        break;
            }

            return dayName;
        }
        static void Main(string[] args)
        {
            Console.Write("Enter day number : ");
            int dayNum;
            try
            {
                dayNum=Convert.ToInt32(Console.ReadLine());
            }
            catch(FormatException e){
                Console.WriteLine("ERROR : "+e.Message);
                return ;
            }
            Console.WriteLine("Day Name : "+dayName(dayNum));
        }
    }
}