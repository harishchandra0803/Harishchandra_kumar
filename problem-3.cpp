#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;

  
    if (a % 2 == 0) {
        a--;
    }

    cout << "Output: ";
    int num = 1;
    for (int i = 0; i < a; i++) {
        cout << num;
        if (i != a - 1) {
            cout << ", ";
        }
        num += 2;
    }

    cout << endl;
    return 0;
}
