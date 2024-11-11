using System;
using System.Linq;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {

            // 입력 받기
            var input = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();

            // 주사위 눈 3개를 오름차순으로 정렬
            var sortedDice = input.OrderBy(d => d).ToArray();

            // 조건에 따른 상금 계산
            if (sortedDice[0] == sortedDice[1] && sortedDice[1] == sortedDice[2])
            {
                // 같은 눈 3개
                int prize = 10000 + sortedDice[2] * 1000;  // 오름차순에서는 제일 큰 값이 sortedDice[2]입니다.
                Console.WriteLine(prize);
            }
            else if (sortedDice[0] == sortedDice[1] || sortedDice[1] == sortedDice[2])
            {
                // 같은 눈 2개
                int prize = 1000 + sortedDice[1] * 100;  // 두 번째 값이 같은 눈입니다.
                Console.WriteLine(prize);
            }
            else
            {
                // 모두 다른 눈
                int prize = sortedDice[2] * 100;  // 오름차순에서는 가장 큰 값이 sortedDice[2]입니다.
                Console.WriteLine(prize);
            }
        }
    }
}
