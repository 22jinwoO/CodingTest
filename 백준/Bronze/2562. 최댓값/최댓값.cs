using System;
using System.Linq;
using System.Collections.Generic;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {

            // pair 값 초기화
            (int first, int second) pair = (0, 0);
            
            for(int i = 1; i <= 9; i++)
            {
                int num = int.Parse(Console.ReadLine());

                if(num > pair.first)
                {
                    pair.first = num;
                    pair.second = i;
                }
            }

            Console.WriteLine($"{pair.first}\n{pair.second}");
        }
    }
}