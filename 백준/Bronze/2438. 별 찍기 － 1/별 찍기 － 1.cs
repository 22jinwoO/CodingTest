using System;
using System.Linq;
using System.Text;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            int testCnt = int.Parse(Console.ReadLine());

            // StringBuilder로 출력을 모아서 처리
            StringBuilder output = new StringBuilder();

            for(int i = 1; i <= testCnt; i++) 
            {
                for(int j = 0; j < i; j++) output.Append("*");
                if (i < testCnt)  output.AppendLine();
            }

            // 한번에 출력
            Console.Write(output.ToString());
        }
    }
}
