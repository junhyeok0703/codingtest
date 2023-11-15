#include <iostream>
#include <vector>

using namespace std;




int main(void){
    int M,N;
    cin >> N >> M;
    int cnt=0,value=0;
    int arr[15000];
    for(int i =0;i<N;i++){
        cin >> arr[i];
    }
    for(int i =0;i<N;i++){
        for(int j=i+1;j<N;j++){
            int value = arr[i]+arr[j];
            if(M==value){
                cnt++;
            }
        }
    }
    cout << cnt;

}