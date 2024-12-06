using System;
using System.Collections.Generic;
using System.Linq;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {

            // n 입력 받기
            int n = int.Parse(Console.ReadLine());

            // 입력 받은 수열 생성
            var numbuers = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();

            // 비교할 숫자 입력
            int v = int.Parse(Console.ReadLine());

            int cnt = 0;

            // 숫자 비교 후 카운팅
            for(int i = 0; i < numbuers.Length; i++) if(numbuers[i] == v) cnt++;

            // 숫자 출력
            Console.Write(cnt);
        }
    }
}