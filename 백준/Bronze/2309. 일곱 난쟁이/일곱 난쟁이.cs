using System;
using System.Linq;
using System.Collections.Generic;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {

            // 배열 초기화
            int[] numbers = new int[9];

            // 배열 값 입력
            for(int i = 0; i < 9; i++)
            {
                int num = int.Parse(Console.ReadLine());

                numbers[i] = num;
            }

            // 오름차순으로 배열 정렬
            numbers = numbers.OrderBy(value => value).ToArray();

            // 총합과 타겟 합 구하기
            int totalSum = numbers.Sum();
            int targetSum = totalSum - 100;

            // pair 값 초기화
            (int first, int second) pair = (0, 0);

            // 타겟 합이 나오는 인덱스 값 찾고 pair에 저장하기
            for(int i = 0; i < 9; i++)
            {
                for(int j = i; j < 9; j++)
                {
                    if(numbers[i] + numbers[j] == targetSum)
                    {
                        pair.first = i; 
                        pair.second = j;
                        break;
                    }
                } 

                if(pair.first != 0) break;
            }

            // 일곱 난쟁이 찾기
            for(int i = 0; i < 9; i++)
            {
                if(i == pair.first || i == pair.second) continue;

                Console.WriteLine(numbers[i]);
            }
        }
    }
}