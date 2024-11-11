using System;
using System.Linq;

namespace MyCompiler {
    class Program {
        public static void Main(string[] args) {

            int playCnt = 0;
            
            while(playCnt < 3)
            {
                // 윳 값 입력받기
                var input = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();

                // 윳 값 정렬
                var sortValues = input.OrderBy(value => value).ToArray();

                // 윷 값으로 반환되는 값 확인하는 조건
                bool isDo = sortValues[0] == 0 && sortValues[0] != sortValues[1];
                bool isGae = sortValues[1] == 0 && sortValues[1] != sortValues[2];
                bool isGurl = sortValues[2] == 0 && sortValues[2] != sortValues[3];
                bool isYut = sortValues[0] == 0 && sortValues[0] == sortValues[3];
                bool isMo = sortValues[0] == 1 && sortValues[0] == sortValues[3];

                if(isDo) Console.WriteLine("A");
                else if(isGae) Console.WriteLine("B");
                else if(isGurl) Console.WriteLine("C");
                else if(isYut) Console.WriteLine("D");
                else if(isMo) Console.WriteLine("E");

                // 플레이 횟수 증가
                playCnt++;
            }
        }
    }
}