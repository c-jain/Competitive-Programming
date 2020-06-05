#include <iostream>

using namespace std;

int main() {
    
    int t; cin >> t;
    while (t--) {
        long long TS; cin >> TS;
        while (TS > 0 && (TS%2 == 0)) TS /= 2;
        
        cout << TS/2 << endl;
    }    

    return 0;
}