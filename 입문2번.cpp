#include<iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> one;
vector<int> two;
vector<int> three;


vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int cnt1,cnt2,cnt3;
    for(int i=0; i< answers.size(); i++){
        if(answers[i] == one[i]){cnt1++;}
        if(answers[i] == two[i]){cnt2++;}
        if(answers[i] == three[i]){cnt3++;}
    }

    if(cnt1 == cnt2 && cnt1 == cnt3){
        answer.push_back(1);
        answer.push_back(2);
        answer.push_back(3);
    }else{
        if(cnt1 > cnt2 && cnt1 > cnt3){
            answer.push_back(1);
        }
        else if(cnt2 > cnt1 && cnt2 > cnt3){
            answer.push_back(2);
        }
        else if(cnt3 > cnt1 && cnt3 > cnt2){
            answer.push_back(3);
        }
        else if(cnt1 == cnt2 && cnt1 >cnt3){
            answer.push_back(1);
            answer.push_back(2);
        }
        else if(cnt2 == cnt3 && cnt2 >cnt1){
            answer.push_back(2);
            answer.push_back(3);
        }
        else if(cnt1 == cnt3 && cnt1 >cnt2){
            answer.push_back(1);
            answer.push_back(3);
        }
        
    }

    return answer;
}

int main(){
    vector<int> answers;
    
    for(int i =0; i< 10000/5; i++){ 
        for(int j=1; j <=5; j++){
            one.push_back(j);
        }
    }

    for(int i =0; i< 10000/10; i++){ 
        for(int j=1; j <=5; j++){
            two.push_back(2);
            if(j ==2){continue;}
            else{two.push_back(j);}
        }
    }

    for(int i =0; i< 10000/10; i++){ 
        for(int j=0; j <5; j++){
            if(j==0){
                three.push_back(3);
                three.push_back(3);
            }else if (j >=3){
                three.push_back(j+1);
                three.push_back(j+1);
            }else{
                three.push_back(j);
                three.push_back(j);
            }
        }
    }

    while(1){
        int tmp=0;
        cin>>tmp;

        if(tmp>=0 && tmp<=9){
            answers.push_back(tmp);
        }
        else{break;}
    }
    vector <int> answer = solution(answers);

    for(int i=0; i < answer.size(); i++){
        cout << answer[i]<<' ';
    }
}