#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> v;
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    vector<int> hash(10, 0); 

    for (int i = 0; i < n; i++) {
        int z = v[i];
        for (int j = 1; j < 10; j++) {
            if (z % j == 0) hash[j]++;
        }
    }

    cout << "Output:\n";
    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << hash[i] << endl;
    }

    return 0;
}
