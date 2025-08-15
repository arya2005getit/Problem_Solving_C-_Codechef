
/* There are three friends and a total of N candies. There will be a fight 
amongst the friends if all of them do not get the same number of candies. 
Chef wants to divide all the candies such that there is no fight. Find whether
 such distribution is possible.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%3==0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
