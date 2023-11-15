#include <iostream>


using namespace std;
 
 //구간합 1차원배열
int main(void){

    int num=0,why=0;
    cin >> num >> why;
    int temp;
    int sum[100001]={};
    for(int i = 1;i<=num;i++){
        cin >> temp;
        sum[i] = sum[i-1]+ temp;
    }
    int start,end;
    int arr[100001]={};
    for(int i=0;i<why;i++){
        cin >> start; 
        cin >> end;
        arr[i] = sum[end]-sum[start-1];
    }
    for(int i = 0;i<why;i++){
        cout << arr[i] << "\n";
    }


}