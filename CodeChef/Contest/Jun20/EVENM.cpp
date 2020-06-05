#include <iostream>

using namespace std;

int main() {

    int t; cin >> t;
    while (t--) {
        int n, val = 1; cin >> n;

        if (n&1) {
            for (int i=0; i<n; i++) {
                for (int j=0; j<n; j++)
                    cout << val++ << " ";
                cout << endl;
            }
        }
        else {
            for (int i=0; i<n; i++) {
                if (i&1) {
                    for (int j=0, k=n-1; j<n; j++,k-=2) 
                        cout << (val++ + k) << " ";
                }
                else {
                    for (int j=0; j<n; j++) 
                        cout << val++ << " ";
                }
                cout << endl;
            }
        }
    }    

    return 0;
}