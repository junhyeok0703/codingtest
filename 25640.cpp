#include <iostream>
#include <string>

using namespace std;


int main(void){



    string mymbti;
    cin >> mymbti;
    int num;
    cin >> num;
    string other[num];
    int cnt=0;    
    for(int i = 0;i<num;i++){
        cin >> other[i];
        if(mymbti.compare(other[i])==0){
            cnt++;
        }
    }
    cout << cnt;
    
}