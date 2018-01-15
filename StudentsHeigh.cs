using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StudentsHeigh
{
    class Program
    {
        static void Main(string[] args)
        {
            int Inums = int.Parse(Console.ReadLine());
            float[] nums = new float[Inums];
            float avg = 0;           
            for (int i = 0; i < Inums; i++)
            {
                nums[i] = float.Parse(Console.ReadLine());
            }
            for (int j = 0; j < nums.Length; j++)
            {
                avg = avg + nums[j];
            }
            avg = avg / nums.Length;
            Console.WriteLine("Avarage heigh is: " + Math.Round(avg,2));
            Console.ReadKey();           
        }
    }
}
