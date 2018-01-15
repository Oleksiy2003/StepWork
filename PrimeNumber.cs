using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PrimeNumber
{
    class Program
    {
       public static void Main(string[] args)
        {
            Console.WriteLine("Enter number: ");
            int x = int.Parse(Console.ReadLine());
            if (x < 10 || x == 0)            {
                Console.WriteLine("The number is prime");
            }
            else if(x>10||x<0)
            {
                Console.WriteLine("The number isn't prime");
            }
            Console.ReadKey();           
        }        
    }
}
