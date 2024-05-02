using System;
using System.IO;


namespace CodingTest
{
    class Program
    {
        static void Main(string[] args)
        {
            using (var sw = new StreamWriter(Console.OpenStandardOutput())) 
            {

                int numCnt; // 숫자 개수

                int questionCnt; // 질의 개수

                // 숫자 개수와 질의 개수 입력받기
                string inputCnt = Console.ReadLine();

                // 공백 기준으로 strInputCnt에 할당
                string[] strInputCnt = inputCnt.Split(' ');

                // 첫번째 문자열은 숫자 개수로 할당
                numCnt = int.Parse(strInputCnt[0]);

                // 두번째 문자열은 질의 개수로 할당
                questionCnt = int.Parse(strInputCnt[1]);

                // 합배열 초기화
                int[] nums = new int[100001];

                // 숫자 개수만큼 배열 수 입력 받기
                string inputValue = Console.ReadLine();

                string[] strss = inputValue.Split(' ');

                // 합 배열 구하기
                for (int i = 1; i <= numCnt; i++)
                {
                    nums[i] = nums[i - 1] + int.Parse(strss[i - 1]);

                }

                // 질의 개수 만큼 반복
                for (int j = 0; j < questionCnt; j++)
                {
                    int start, end;

                    string inputs = Console.ReadLine();

                    string[] strInputs = inputs.Split(' ');

                    start = int.Parse(strInputs[0]);

                    end = int.Parse(strInputs[1]);

                    sw.WriteLine(nums[end] - nums[start - 1]);

                }
            }

        }
    }
}
