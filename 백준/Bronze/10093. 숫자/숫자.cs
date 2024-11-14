using System;
using System.Linq;
using System.Collections.Generic;

using ll = System.Int64;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {

            // 숫자 입력받기
            ll a, b;

            // 입력받은 숫자 long long으로 형변환 후 배열 생성
            var input = Console.ReadLine().Split(' ').Select(ll.Parse).ToArray();

            // 오름차순 정렬
            input = input.OrderBy(value => value).ToArray();

            // a와 b 값 할당
            a = input[0];
            b = input[1];

            // 범위 구하기
            ll size = b - a - 1;
          
            // a와 b가 같은 숫자면 0 출력 후 함수 탈출
            if(size == -1)
            {
                Console.WriteLine(0);
                return;
            }
            
            Console.WriteLine($"{size}");
            
            for(ll i = a + 1; i < b; i++) Console.Write($"{i} ");
        }
    }
}