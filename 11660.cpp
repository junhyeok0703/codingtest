#include <iostream>
#include <vector>

using namespace std;



// 구간합 2차원배열
int main(void){


    int N,M;
    cin >> N >> M;
    vector<vector<int> > A(N+1,vector<int>(N+1,0)); // 값이 들어간 배열(2차원동적배열을 선언한것이다)
    vector<vector<int> > D(N+1,vector<int>(N+1,0));// 합배열
    //그전에 그냥 일차원배열을 사용했을때 사실 값을 그전꺼만 접근하면 됬어서 배열을 하나만 만들었다.하지만 2차원배열은 그전의 값을 접근을 다양한 인덱스에서 하기때문에 이차원배열에 꼭 저장해줘야한다.

    for(int i=1;i<=N;i++){

        for(int j =1;j<=N;j++){
           cin >> A[i][j];
           D[i][j]= D[i][j-1] + D[i-1][j] + A[i][j] - D[i-1][j-1]; //합배열 구하는 방식 합배열에서 x-1하나랑 y-1하나랑 그냥배열 A[x][y]을 다더한뒤에 합배열[x-1][y-1]을 빼준다 
           
        }
    }
    int x1,x2,y1,y2;
    int arr[100001];
    for(int i =0;i<M;i++){
        
        cin >> x1 >> y1 >> x2 >>y2;
        arr[i] = D[x2][y2] + D[x1-1][y1-1]- D[x2][y1-1] - D[x1-1][y2];//구간합구하는거는 제일큰 합에서 그구간의 최고의 합을 행렬단위로 빼고 + 시작값의 인덱스에 x-1,y-1씩해준거를 더한다.
    }
    for(int i = 0 ;i<M;i++){
        cout << arr[i] << "\n";
    }



}