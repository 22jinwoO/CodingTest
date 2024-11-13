using System;
using System.Linq;
using System.Collections.Generic;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {

            // 배열 생성
            int[] numbers = new int[5];

            // 배열 값 입력받기
            for(int i = 0; i < 5; i++)
            {
                int number = int.Parse(Console.ReadLine());

                numbers[i] = number;
            }

            // 배열 값 정렬
            numbers = numbers.OrderBy(value => value).ToArray();

            // 배열 합계 구하기
            int sum = 0;
            
            for(int i = 0; i < 5; i++) sum += numbers[i];

            // 평균 구하기
            sum /= 5;
            
            // 값 출력하기
            Console.WriteLine($"{sum} {numbers[2]}");
        }
    }
}