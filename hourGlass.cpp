#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

/*Calculate the sum of every hourglass in a 6x6 2D array
 
  		a b c
	          d
  		e f g   

  and print out the MAX.
*/


int main(){
    int sum = 0, max = -63;
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
    	for(int arr_j = 0;arr_j < 6;arr_j++){
		cin >> arr[arr_i][arr_j];
	}
    }
    for(int i = 0; i < 4; i++){
    	for(int j = 0; j < 4; j++){
		sum = (arr[i][j]+arr[i+2][j])+(arr[i][j+1]+arr[i+1][j+1]+arr[i+2][j+1])+(arr[i][j+2]+arr[i+2][j+2]);
		if(sum>max)
		    max = sum;
	}
    }
    cout << max;
    return 0;
}													

