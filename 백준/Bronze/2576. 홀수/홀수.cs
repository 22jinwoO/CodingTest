using System;
using System.Linq;
using System.Collections.Generic;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {

            int playCnt = 0;
            List<int> numbers = new List<int>();
            
            while (playCnt < 7)
            {
                // 하나의 숫자를 입력받아 int로 변환
                int num = int.Parse(Console.ReadLine());
                
                // 홀수인 경우에만 리스트에 추가
                if (num % 2 != 0) 
                    numbers.Add(num);

                playCnt++; // playCnt 증가
            }

            // 오름차순 정렬
            numbers = numbers.OrderBy(value => value).ToList();

            if(numbers.Count > 0)
            {
                int sum = 0;
            
                // 홀수 배열 합 구하기
                for(int i = 0; i < numbers.Count; i++) sum += numbers[i];

                Console.WriteLine($"{sum}\n{numbers[0]}");    
            }

            else Console.WriteLine(-1);
            
        }
    }
}
