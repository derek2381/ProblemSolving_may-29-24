// problem link
// https://www.codechef.com/START136D/problems/EVENSUMSUB

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> arr(n);
	    long long int val = 0;
	    int  max = 0;

	    for(int i = 0;i < n;i++){
	        cin >> arr[i];
	    }

	    for(int i = 0; i < n;i++){
	        val = 0;
	        for(int j = i;j < n;j++){
	            val += arr[j];

	            if(val%2 == 0 && max < j-i+1){
	                max = j-i+1;
	            }
	        }
	    }



	    cout << max << endl;
	}

}
