
/*Chef has recently moved into an apartment. It takes 30 minutes
 for Chef to reach office from the apartment. Chef left for the
  office X minutes before Chef was supposed to reach. 
  Determine whether or not Chef will be able to reach on time.
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
        if (x<30){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}
