// 수 정렬하기 / 브론즈 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, arr[1001] = {};
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+N);
    for (int i = 0; i < N; i++) {
        cout << arr[i] << "\n";
    }
}