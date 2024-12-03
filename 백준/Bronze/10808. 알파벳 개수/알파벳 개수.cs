using System;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {

            int[] arr = new int[26];
            
            string S = Console.ReadLine();

            
            foreach(var c in S)
            {
                int index = c - 'a';

                arr[index]++;
            }

            foreach(var value in arr)
            {
                Console.Write($"{value} ");
            }
        }
    }
}