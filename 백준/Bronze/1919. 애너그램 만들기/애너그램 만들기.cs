using System;
using System.Collections.Generic;
using System.Linq;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {

            // 단어 입력
            string str1 = Console.ReadLine();
            string str2 = Console.ReadLine();

            // 소문자 카운트 값 저장할 배열
            int[] arr1 = new int[26];
            int[] arr2 = new int[26];

            // 소문자 개수 카운팅
            for(int i = 0 ; i < str1.Length; i++)
            {
                int index = str1[i] - 'a';
                arr1[index]++;
            }

            for(int i = 0 ; i < str2.Length; i++)
            {
                int index = str2[i] - 'a';
                arr2[index]++;
            }

            // 바꿔야 할 개수 체크
            int cnt = 0;
            
            for(int i = 0; i < arr1.Length; i++)
            {
                if(arr1[i] == arr2[i]) continue;

                // 첫번째 단어 소문자 개수가 더 많을 때
                if(arr1[i] > arr2[i]) cnt += (arr1[i] - arr2[i]);

                // 두번째 단어 소문자 개수가 더 많을 때
                else cnt += (arr2[i] - arr1[i]);
            }

            Console.Write(cnt);
            
        }
    }
}