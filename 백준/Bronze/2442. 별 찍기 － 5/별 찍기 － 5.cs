using System;
using System.Collections.Generic;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            int num = int.Parse(Console.ReadLine());

            for(int i = 1; i <= num; i++)
            {
                for(int j = 0; j < num - i; j++) Console.Write(" ");
                for(int starCnt = 0; starCnt < 2 * i - 1; starCnt++) Console.Write("*");

                Console.WriteLine(" ");
            }
        }
    }
}