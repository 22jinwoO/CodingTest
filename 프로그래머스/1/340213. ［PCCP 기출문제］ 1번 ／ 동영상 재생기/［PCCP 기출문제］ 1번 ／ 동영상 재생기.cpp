#include <bits/stdc++.h>
#include <sstream>

using namespace std;

vector<string> split(string str, char Delimiter) {
    istringstream iss(str);             // istringstream에 str을 담는다.
    string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼
 
    vector<string> result;
 
    // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);               // 절삭된 문자열을 vector에 저장
    }
 
    return result;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    
    string answer = "";
    
    
    vector<string> nowPos = split(pos, ':');
    vector<string> opStarts = split(op_start, ':');
    vector<string> opEnds = split(op_end, ':');
    vector<string> viedoLengths = split(video_len, ':');
    
    int mm, ss = 0;
    int op_start_mm, op_start_ss = 0;
    int op_end_mm, op_end_ss = 0;
    int video_endmm, video_endss = 0;
    
    
    mm = stoi(nowPos[0]);
    ss = stoi(nowPos[1]);
    
    op_start_mm = stoi(opStarts[0]);
    op_start_ss = stoi(opStarts[1]);
    
    op_end_mm = stoi(opEnds[0]);
    op_end_ss = stoi(opEnds[1]);

    video_endmm = stoi(viedoLengths[0]);
    video_endss = stoi(viedoLengths[1]);
    

    // 입력받은 comands 값에 따라 pos에 반영하기
    for(int i = 0; i < commands.size(); i++)
    {        
        //오프닝 건너뛰기 op_start op_end 사이일 경우 자동으로 op_end 위치로 이동
        if( (mm > op_start_mm || (mm == op_start_mm && ss >= op_start_ss)) && 
            (mm < op_end_mm || (mm == op_end_mm && ss <= op_end_ss)))
        {            

            mm = op_end_mm;
            ss = op_end_ss;
        }
        
        //prev => 10초 전으로 이동, 10초 미만인 경우 처음 위치(0 : 0)로 이동
        if(commands[i] == "prev")
        {
            if(mm == 0 && ss <= 10)
            {
                mm = 0;
                ss = 0;
            }
            else if(ss < 10)
            {
                mm -= 1;
                ss = 60 - (10 - ss);
            }
            // 분이 0보다 크고 초가 0초가 아닐 때
            else ss -= 10;
        }
        
        else if(commands[i] == "next")
        {
            //next => 10초 후로 이동, 남은 시간이 10초 미만일 경우 마지막 위치(동영상 길이와 같음)로 이동
            if(mm == video_endmm && (video_endss - ss < 10)) ss = video_endss;

            
            else
            {
                ss += 10;     
            
                if( ss >= 60 )
                {
                    ss -= 60;
                    mm += 1;
                }
                
                if (mm > video_endmm || (mm == video_endmm && ss > video_endss)) 
                {
                    mm = video_endmm;
                    ss = video_endss;
                }
            }

        }

        //오프닝 건너뛰기 op_start op_end 사이일 경우 자동으로 op_end 위치로 이동
        if( (mm > op_start_mm || (mm == op_start_mm && ss >= op_start_ss)) && 
            (mm < op_end_mm || (mm == op_end_mm && ss <= op_end_ss)))
        {            

            mm = op_end_mm;
            ss = op_end_ss;
        }
    }
    
    string mmStr, ssStr = "";
    
    if ( mm == 0 ) mmStr = "00";
    else if(mm < 10) mmStr += "0" + to_string(mm);
    else mmStr = to_string(mm);

    if ( ss == 0 ) ssStr = "00";    
    else if(ss < 10) ssStr = "0" + to_string(ss);    
    else ssStr = to_string(ss);
    
    answer = mmStr + ":" + ssStr;
 
    return answer;
}

