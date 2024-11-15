using System;
using System.Linq;
using System.Text;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            int testCnt = int.Parse(Console.ReadLine());

            // StringBuilder로 출력을 모아서 처리
            StringBuilder output = new StringBuilder();

            for(int i = 0; i < testCnt; i++) {
                var input = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
                int sum = input[0] + input[1];
                output.AppendLine(sum.ToString());
            }

            // 한번에 출력
            Console.Write(output.ToString());
        }
    }
}
