
/*"There is a cricket match going on between two teams A and B.
 Team B is batting second and got a target of X runs. Currently,
  team B has scored Y runs. Determine how many more runs Team B
   should score to win the match. 
Note: The target score in cricket matches is one more than the number of runs scored by the team that batted first."
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x , y;
        cin >> x >> y;
        cout << x-y<< endl;
    }
    
}
