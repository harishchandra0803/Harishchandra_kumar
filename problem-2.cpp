#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;

    int num = 1;

    cout << "Output: ";
    for (int q = 0; q < a; q++) {
        cout << num;
        if (q != a - 1) {
            cout << ", ";
        }
        num += 2;
    }

    cout << endl;
    return 0;
}
