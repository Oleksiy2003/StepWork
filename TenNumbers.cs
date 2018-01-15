using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TenNumbers
{
    class Program
    {
        static void Main(string[] args)
        {
            int positive = 0, negative = 0;
            Console.WriteLine("Enter array lenght");
            int a = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter " + a + " numbers:");
            int[] arr = new int[a];
            for (int i = 0; i < a; i++)
            {
                arr[i] = int.Parse(Console.ReadLine());
            }
            for (int x = 0; x < arr.Length; x++)
            {
                if (arr[x] < 0)
                {
                    negative++;
                }
                else {
                    positive++;
                }
            }
            Console.WriteLine("Negative = " + negative);
            Console.WriteLine("Positive = " + positive);
            Console.ReadKey();
        }
    }
}