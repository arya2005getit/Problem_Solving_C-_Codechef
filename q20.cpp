/* King loves to go on tours with his friends. King has N cars
 that can seat 5 people each and M cars that can seat 7 people each. 
 Determine the maximum number of people that can travel together in these cars.
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        cout << n*5+m*7 << endl;
    }
}
