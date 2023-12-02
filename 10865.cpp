#include <iostream>


using namespace std;

 int cnt[100000]={0},M,N,A,B;
int main(void){
    
    cin >> N >> M;
   
    for(int i =1;i<=N;i++){
        cin >> A >> B;
        cnt[A]++;
        cnt[B]++;
    }
    for(int i =1 ;i<=N;i++){
       cout << cnt[i] << endl;
    }

}