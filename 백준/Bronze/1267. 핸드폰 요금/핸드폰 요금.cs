using System;
using System.Linq;
using System.Collections.Generic;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {

            // 통화 목록 갯수 입력받기
            int cnt = int.Parse(Console.ReadLine());

            // 통화 목록 값 입력 받기
            var call_List = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();

            // 영식, 민식 요금 구하기
            int y = 0;
            int m = 0;
            
            for(int i = 0; i < cnt; i++)
            {
                int num = call_List[i];

                while(num >= 0)
                {
                    num -= 30;
                    y += 10;
                }

                num = call_List[i];

                while(num >= 0)
                {
                    num -= 60;
                    m += 15;
                }
            }

            // 요금제 비교 후 출력
            if(y < m) Console.WriteLine($"Y {y}");

            else if(m < y) Console.WriteLine($"M {m}");
            
            else Console.WriteLine($"Y M {y}");
            
        }
    }
}