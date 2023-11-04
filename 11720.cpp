#include <iostream>


using namespace std;

int main(void){
    int num;
    string numbers;
    cin >> num;
    cin >> numbers;
    
    int sum=0;

    for(int i = 0;i<numbers.length();i++){
        sum+= numbers[i]-'0'; // 문자열에서 문자로 하나씩 접근하여 아스키코드값 '0' 을 빼면 숫자를 저장할수있다.
    }
    cout << sum;
}