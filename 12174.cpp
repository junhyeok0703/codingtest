// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     int T;
//     cin >> T;

//     string resultarr[101]; 

//     for (int t = 1; t <= T; ++t) {
//         int B;
//         cin >> B;

//         string byteString;
//         cin >> byteString;

//         string result;

//         for (int i = 0; i < B * 8; i += 8) {
//             char asciiValue = 0;

//             for (int j = 0; j < 8; ++j) {
//                 asciiValue = (asciiValue << 1) | (byteString[i + j] == 'I');
//             }

//             result += asciiValue;
//         }

       
//         resultarr[t] = result;
//     }

//     for (int i = 1; i <= T; ++i) {
//         cout << "Case #" << i << ": " << resultarr[i] << endl;
//     }

//     return 0;
// }
