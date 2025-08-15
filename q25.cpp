
/*There are three friends and a total of N candies. There will 
be a fight amongst the friends if all of them do not get the 
same number of candies. Chef wants to divide all the candies 
such that there is no fight. Find whether such distribution 
is possible.
 */

#include <iostream>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
	if(y<=x){
	    cout << "NO\n";
	}else{
	    cout << "YES\n";
	}
	return 0;
}
