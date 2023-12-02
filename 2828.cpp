#include <iostream>

using namespace std;

int main() {
    int N, M, J;
    cin >> N >> M;
    cin >> J;
    int screen[N];
    int basket[M];
    int left, right = left + M - 1;
    int totalDistance,apple;
    for (int i = 0; i < J; ++i) {
        
        cin >> apple;
        --apple; 

        if (apple < left) {
            int diff = left - apple;
            totalDistance += diff;
            left -= diff;
            right -= diff;
        } else if (apple > right) {
            int diff = apple - right;
            totalDistance += diff;
            right += diff;
            left += diff;
        }
    }

    cout << totalDistance << endl;

    return 0;
}
