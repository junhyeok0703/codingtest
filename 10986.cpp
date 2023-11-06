#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector<long> S(N,0);  // N 크기의 정수 배열 생성
    vector<long> cntarr(M,0);
     int rem = 0;
    long answer=0;
    int temp=0;
    cin >> S[0];
    for (int i = 1; i <N; i++) {
        cin >> temp;    
        S[i] = S[i-1]+temp;
    }
    //나머지가 같은 친구들을 카운터해서 배열에 넣어야함
   
    for(int i = 0;i<N;i++){
        rem = S[i]%M; //나머지 구하기
        if(rem==0){
            answer++; //0은 그냥 정답에 넣기
        }
        cntarr[rem]++; // 0이나 1이나 그냥 다 카운터배열에 넣기

    }
    for(int i =0;i<M;i++){
        if(cntarr[i]>1){ // 나머지 카운터한거를 그냥 0은이미저장했고 다른거는 만약 1번 인덱스에 3이면 나머지값이 1인 것이 3개있다는것이다. 여기서 3C2를 뽑는 조합을 완성시키면된다.
            answer =  answer + (cntarr[i] * (cntarr[i]-1)/2);
                             
        }
    }
    
    cout << answer << "\n";
    return 0;
}
