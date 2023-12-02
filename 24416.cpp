#include <iostream>

using namespace std;

int fib(int n, int *cnt) {
    
    if (n == 1 || n == 2)
        {
        (*cnt)++;
        return 1;
    }
    else
        return (fib(n - 1, cnt) + fib(n - 2, cnt));
}

int main() {
    unsigned int X;
    cin >> X;

    // 첫 번째 방법: 재귀 호출을 사용한 피보나치 수열 계산
    int cnt1 = 0;
    int num1 = fib(X, &cnt1);

    // 두 번째 방법: 반복문을 사용한 피보나치 수열 계산
    int a[45] = {0};
    a[1] = a[2] = 1;
    int cnt2 = 0;
    for (int i = 3; i <= X; i++) {
        cnt2++;
        a[i] = a[i - 1] + a[i - 2];
    }

    cout  << cnt1  << " " <<cnt2 << endl;

    return 0;
}
