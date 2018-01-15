using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Fraction {
 class Program {
  static void Main(string[] args) {
   Console.WriteLine("Enter first fraction : ");
   string a = Console.ReadLine();
   double x = Convert.ToDouble(a);
   Console.WriteLine("Enter second fraction : ");
   string b = Console.ReadLine();
   double y = Convert.ToDouble(b);
   int u = 0;

   Console.WriteLine("First fraction : " + x);
   for (int i = Convert.ToInt32(x); i >= 0; i--) {
    Console.Write(i);
    Console.WriteLine();
   }
   Console.WriteLine("Second fraction : " + y);
   for (int o = Convert.ToInt32(y); o >= 0; o--) {
    Console.WriteLine(o);
   }
   Console.Read();
  }
 }
}