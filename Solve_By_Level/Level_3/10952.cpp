// A + B - 5 / 브론즈 5

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 

    int A, B;
    while (1) {
        cin >> A >> B;
        if (A == 0 && B == 0)
            break;
        cout << A + B << "\n";
    }
}