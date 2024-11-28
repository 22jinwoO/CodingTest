using System;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            int num = int.Parse(Console.ReadLine());

            for(int i = 0; i < num; i++)
            {
                for(int j = 0; j < num - i; j++) Console.Write("*");
                Console.WriteLine("");
            }
        }
    }
}