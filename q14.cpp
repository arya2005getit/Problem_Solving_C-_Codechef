
/*The working hours of Chef’s kitchen are from X pm to Y pm (1≤X<Y≤12). Find the number of hours Chef works.
 */


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        cout << y-x << endl;
    }
}
