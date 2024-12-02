using System;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {

            int num = int.Parse(Console.ReadLine());

            for(int i = 1; i <= num; i++)
            {
                int j = 1;
                
                for(; j <= i; j++) Console.Write("*");
                for(; j <= num; j++) Console.Write(" ");

                j = num;
                
                for(; j > i; j--) Console.Write(" ");
                for(; j >= 1; j--) Console.Write("*");

                Console.WriteLine();
            }

            for(int i = num - 1; i >= 1; i--)
            {
                int j = 1;
                
                for(; j <= i; j++) Console.Write("*");
                for(; j <= num; j++) Console.Write(" ");

                j = num;
                
                for(; j > i; j--) Console.Write(" ");
                for(; j >= 1; j--) Console.Write("*");

                Console.WriteLine();
            }
        }
    }
}