#include <iostream>


using namespace std;

int main(void){
    int a,b;
    cin >> a >> b;
    int temp1=b%10;
    cout << a*(b%10) << "\n";
    cout << (a*(b%100-temp1))/10<< "\n";
    cout << a*(b/100)<< "\n";
    cout << a*b<< "\n";


}