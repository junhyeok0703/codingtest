#include <iostream>
#include <iomanip> // for std::setprecision

using namespace std;

int main() {
    int N = 0; 
    int jum[1000];
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> jum[i];
    }
    
    int max = 0; 
    double sum = 0.0;  
    
    for (int i = 0; i < N; i++) {
        if (max < jum[i]) {
            max = jum[i];
        }
        sum += jum[i];
    }
    double result = (sum * 100.0) / max / N; 
    
    cout  << result; 

    return 0;
}
