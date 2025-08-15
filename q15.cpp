
/*In Chefland, a tax of rupees 10 is deducted if the total
 income is strictly greater than rupees 100.  Given that total
  income is X rupees, find out how much money you get.
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
        if (x<=100){
            cout << x<< endl;
        }
        else {
            cout << x-10<<endl;
        }
    }
}

