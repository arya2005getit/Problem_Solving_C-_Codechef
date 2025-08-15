

/*Chef's son wants to go on a roller coaster ride.
 The height of Chef's son is X inches while the minimum height 
 required to go on the ride is H inches. Determine whether
  he can go on the ride or not.
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    
    cin >> t;
    while(t--){
        int x,h;
        cin >> x >> h;
        if (x >=h){
            cout << "YES\n";
        } else {
            cout << "NO\n" ;
        }
    }
}
