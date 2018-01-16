using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SecNumInt
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            int b = a % 10;
            if (b % 2 == 0)
            {
                Console.WriteLine("Second number is even");
            }
            else
            {
                Console.WriteLine("Second number isn't even");
            }
            Console.ReadLine();
        }         
    }
}

