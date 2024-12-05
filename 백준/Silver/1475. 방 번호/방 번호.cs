using System;
using System.Collections.Generic;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            
            // 값 입력 받기 
            string str_num = Console.ReadLine();

            // 숫자 카운팅 배열
            int[] arr = new int[10];

            // 숫자 카운팅 하기
            for(int i = 0; i < str_num.Length; i++) arr[str_num[i] - '0']++;

            int maxCnt = 0;
            int sumSixNine = arr[6] + arr[9];
            
            for(int i = 0; i < arr.Length; i++)
            {
                if(i == 6 || i == 9) continue;

                maxCnt = Math.Max(maxCnt, arr[i]);
            }

            // 6과 9 올림 후, 카운팅
            maxCnt = Math.Max(maxCnt, (sumSixNine + 1) / 2);

            Console.WriteLine(maxCnt);
        }
    }
}