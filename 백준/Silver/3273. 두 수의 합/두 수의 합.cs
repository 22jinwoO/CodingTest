using System;
using System.Collections.Generic;
using System.Linq;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {
            
            int cnt = 0;

            int[] arr = new int[1000001];

            // 수열 크기 입력
            int n = int.Parse(Console.ReadLine());

            var num_List = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();

            // 수열 값 입력
            for(int i = 0; i < num_List.Length; i++)
            {
                int num = num_List[i];
                arr[num]++;
            }

            // x 값 입력
            int x = int.Parse(Console.ReadLine());

            // 쌍 구하기
            for(int i = 0; i < n; i++)
            {
                int target = x - num_List[i];
                
                if(target > 0 && target < 1000001 && arr[target] >= 1)
                {
                    if(num_List[i] == target && arr[target] < 2) continue;

                    arr[num_List[i]]--;
                    arr[target]--;
                    cnt++;
                }

            }

            Console.Write(cnt);
        }
    }
}