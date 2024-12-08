using System;
using System.Collections.Generic;
using System.Linq;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            var inputs = Console.ReadLine().Split(" ").Select(int.Parse).ToArray();

            // 수학 여행 참가 인원 수
            int n = inputs[0];

            // 최대 방 인원 수
            int k = inputs[1];

            // 2x6 크기의 2차원 배열
            int[,] arr = new int[2, 6]; 
            
            // 참가 인원수 만큼 성별과 학년 입력 받기
            for(int i = 0; i < n; i++)
            {
                var value = Console.ReadLine().Split(" ").Select(int.Parse).ToArray();

                int s = value[0];
                int year = value[1];

                // 배열 크기 때문에 학년 --;
                year--;

                // 해당 학년 성별 배열 크기 증가
                arr[s, year]++;
            }

            // 방 개수
            int cnt = 0;
            
            // 필요한 방 개수 구하기
            for(int i = 0; i < arr.GetLength(0); i++)
            {
                for(int j = 0; j < arr.GetLength(1); j++) cnt += (arr[i, j] + k - 1) / k;
            }
            
            Console.Write(cnt);
            
        }
    }
}