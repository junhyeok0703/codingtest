#include <iostream>



using namespace std;

int main() {
    int X;
	cin >> X;
    int a[45]={0};
    a[0]=0;
    a[1]=1;
	for(int i =2;i<=X;i++){
        a[i]= a[i-1]+a[i-2];
    }
    cout << a[X];    
}