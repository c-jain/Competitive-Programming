#include <iostream>

using namespace std;

int main() {

    int t; cin >> t;

    while (t--) {
        string s; cin >> s;
        int ans = 0;

        for (int i=0; i<s.size()-1; ) {
            if (s[i] == 'x') {
                if (s[i+1] == 'y') {
                    ans++;
                    i += 2;
                }
                else i++;
            }
            else {
                if (s[i+1] == 'x') {
                    ans++;
                    i += 2;
                }
                else i++;
            }
        }

        cout << ans << endl;
    }    

    return 0;
}