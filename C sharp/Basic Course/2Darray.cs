using System;

namespace Giraffe
{
    class Solution
    {
    
        static void Main(string[] args)
        {
            int [,]nums1={{1,2,3},{4,5,6},{7,8,9}};
            Console.Write("ARRAY : ");
            for(int i=0;i<nums1.GetLength(0);i++)
            {
                for(int j=0;j<nums1.GetLength(1);j++)
                {
                    Console.Write(nums1[i,j]+" ");
                }
            }
            Console.WriteLine();
            Console.WriteLine("Total Elements : "+nums1.Length);

            Console.Write("ARRAY : ");
            foreach(int x in nums1)
            {
                Console.Write("{0} ",x);
                //Formatted string
            }
            Console.WriteLine();

            int [,]nums2=new int[2,3];
            Console.Write("ARRAY : ");
            foreach(int x in nums2){
                Console.Write("{0} ",x);
            }
        }
    }
}   