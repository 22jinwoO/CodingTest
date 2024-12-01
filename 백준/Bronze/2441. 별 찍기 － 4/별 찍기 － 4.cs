using System;
using System.Collections.Generic;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            int num = int.Parse(Console.ReadLine());

            for(int i = 0; i < num; i++)
            {
                int j = 0;
                for(; j < i; j++) Console.Write(" ");
                for(; j < num; j++) Console.Write("*");
                Console.WriteLine();
            }
        }
    }
}