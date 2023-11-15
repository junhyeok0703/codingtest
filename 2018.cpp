#include <iostream>
    //시간 제한 2초임
    //N의 최댓값은 천만임
    // O(nlogn) 말고 O(n)을 사용해야함 투포인터사용해야함
    //시작인덱스 , 종료인덱스를 투포인터로 지정해 문제를 접근해야함.


using namespace std;

int main(void){


    int N = 0;
    cin >> N;
    int sum=0,cnt=1;

    for(int i = 1;i<N;i++){
        for(int j =i;j<N;j++){
            sum+=j;
            if(sum>N){
                sum=0;
                break;
            }
            if(sum==N){
                cnt++;
                sum=0;
                break;
            }
        }
    }
    cout << cnt;


}