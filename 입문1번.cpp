#include<iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<long long int> vec;
    int tmp=0;

    while(n > 0){  
        tmp = n %10;
        vec.push_back(tmp);
        n/=10;
    }
    sort(vec.begin(),vec.end());

    tmp=1;
    for(int i=0; i < vec.size(); i++){
        answer += vec[i] * tmp;
        tmp *=10;
    }

    return answer;
}

int main(){
    long long int n;
    cin >> n;
    cout << solution(n);
}

