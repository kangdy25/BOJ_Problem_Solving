// X보다 작은 수

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int N, X, num = 0;
    cin >> N >> X;
    int arr[10000];
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];   
    }    
    for (int i = 0; i < N; i++) {
        if (arr[i] < X) {
            cout << arr[i] << " ";
        }    
    }
    
    return 0;
}
