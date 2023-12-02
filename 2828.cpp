// #include <iostream>

// using namespace std;

// int main() {
//     int N, M, J;
//     cin >> N >> M;
//     cin >> J;

//     int left = 1, right = M;
//     int totalDistance = 0, apple;

//     while (J--) {
//         cin >> apple;

//         while (left > apple || right < apple) {
//             if (apple > right) {
//                 right++;
//                 totalDistance++;
//                 left++;
//             }
//             if (apple < left) {
//                 right--;
//                 totalDistance++;
//                 left--;
//             }
//         }
//     }

//     cout << totalDistance <<endl;

//     return 0;
// }
