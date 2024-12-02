using System;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {

            int num = int.Parse(Console.ReadLine());

            for(int i = 1; i <= num; i++)
            {
                for(int j = 0; j < num - i; j++) Console.Write(" ");
                for(int j = 1; j <= 2 * i - 1; j++) Console.Write("*");
                Console.WriteLine();
            }
            
            for(int i = num - 1; i >= 1; i--)
            {
                for(int j = 0; j < num - i; j++) Console.Write(" ");
                for(int j = 1; j <= 2 * i - 1; j++) Console.Write("*");
                Console.WriteLine();
            }
        }
    }
}