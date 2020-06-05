#include <iostream>

using namespace std;

int main() {

    int t; cin >> t;
    while (t--) {
        
        int n, five = 0, ten = 0; cin >> n;
        bool isPossible = 1;

        for (int i=0; i<n; i++) {
            int coin; cin >> coin;

            if (coin == 5) five++;
            else if (coin == 10) {
                if (five > 0) {
                    five--;
                    ten++;
                }
                else isPossible = 0;
            }
            else 
            {
                if (ten >= 1) ten--;
                else if (five >= 2) five -= 2;
                else isPossible = 0;
            }            
        }

        if (isPossible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }    
    
    return 0;
}