using System;
using System.Collections.Generic;
using System.Linq;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            
            // a, b, c 값 저장
            int[] arr = new int[3];
            
            // 0 ~ 9 값 저장
            int[] numCnts = new int[10];
            
            // a, b, c 입력 받기
            for(int i = 0; i < 3; i++) arr[i] = int.Parse(Console.ReadLine());

            // a * b * c 값 구하기
            int value = 1;

            for(int i = 0; i < 3; i++) value *= arr[i];

            // 문자열로 변환
            string str_value = value.ToString();

            // 0 ~ 9 값 카운팅
            for(int i = 0; i < str_value.Length; i++) numCnts[str_value[i] - '0']++;

            // 카운팅 값 출력
            for(int i = 0; i < numCnts.Length; i++) Console.WriteLine(numCnts[i]);
        }
    }
}