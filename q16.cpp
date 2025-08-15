
/*Chef's dog binary hears frequencies starting from 67 Hertz 
to 45000 Hertz (both inclusive).  If Chef's commands have a 
frequency of X Hertz, find whether binary can hear them or not.
 */


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if (x <= 45000 && x >= 67){
            cout << "YES\n";
        } else {
            cout << "NO\n" ;
        }
    }
}
