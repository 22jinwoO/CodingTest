using System;
using System.Collections.Generic;
using System.Linq;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {

            // n 입력 받기
            int n = int.Parse(Console.ReadLine());

            // n만큼 반복
            for(int i = 0; i < n; i++)
            {
                var strValues = Console.ReadLine().Split(" ");

                string str1 = strValues[0];

                string str2 = strValues[1];

                // 문자열 길이가 같지 않을 때
                if(str1.Length != str2.Length)
                {
                    Console.WriteLine("Impossible");
                    continue;
                }

                // 소문자 알파벳 배열 1
                int[] arr1 = new int[26];

                // 소문자 알파벳 배열 2
                int[] arr2 = new int[26];

                // 첫번째 문자열 알파벳 개수 체크
                for(int j = 0; j < str1.Length; j++)
                {
                    int index = str1[j] - 'a';

                    arr1[index]++;
                }

                // 두번째 문자열 알파벳 개수 체크
                for(int j = 0; j < str2.Length; j++)
                {
                    int index = str2[j] - 'a';

                    arr2[index]++;
                }

                bool canChange = true;

                // 알파벳 문자 비교
                for(int j = 0; j < arr1.Length; j++)
                {
                    if(arr1[j] != arr2[j])
                    {
                        canChange = false;
                        break;
                    }
                }

                if(canChange) Console.WriteLine("Possible");

                else Console.WriteLine("Impossible");
            }
            
        }
    }
}