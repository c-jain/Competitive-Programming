#include <iostream>

using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {

        int n, k, loss = 0;
        cin >> n >> k;
        
        for (int i=0; i<n; i++) {
            int price;
            cin >> price;
            
            if (price > k) 
                loss += (price-k);
        }

        cout << loss << endl;
    }    

    return 0;
}