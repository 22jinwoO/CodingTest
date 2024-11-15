using System;

namespace CardReversal {
    class Program {
        public static void Main(string[] args) {
            
            // 1부터 20까지 카드 초기화
            int[] cards = new int[20];
            
            for (int i = 0; i < 20; i++) cards[i] = i + 1;

            // 10개의 구간을 입력받아 처리
            for (int i = 0; i < 10; i++) 
            {
                // 구간 [a, b] 입력받기
                var input = Console.ReadLine().Split();

                // 시작 인덱스 (0부터 시작하게 변환)
                int a = int.Parse(input[0]) - 1; 

                // 끝 인덱스 (0부터 시작하게 변환)
                int b = int.Parse(input[1]) - 1; 

                // 구간을 역순으로 뒤집기
                Array.Reverse(cards, a, b - a + 1);
            }

            // 결과 출력
            Console.WriteLine(string.Join(" ", cards));
        }
    }
}
