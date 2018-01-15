using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PowerNumber
{
    class Program
    {
         static double Power(double Num,double Pow)
        {
            double sum = 1;
          for (double d = 0;d<Pow;d++)
            {
               sum = sum * Num;
          }
           return sum;
        }
        
        static void Main(string[] args)
        {
            double x, y;
            Console.WriteLine("Enter number : ");
            x = double.Parse(Console.ReadLine());
            Console.WriteLine("Enter Pow : ");
            y = double.Parse(Console.ReadLine());

            Console.WriteLine("\n\n{0} to the power {1} is {2}", x, y, Power(x, y));


            Console.Read();
        }
    }
}
