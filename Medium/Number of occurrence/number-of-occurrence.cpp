//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int left = 0 ; 
	    int right = n-1 ; 
	    int mid = left + (right-left)/2 ;
	    int c = 0 ; 
	    while(left<=right){
	        mid = left + (right-left)/2 ;
	        if(arr[mid]==x){
	            while(arr[mid-1]==x){
	                mid-- ; 
	            }
	            c = 1 ;
	            while(arr[mid+1]==arr[mid]){
	                mid++ ; 
	                c++ ; 
	            }
	            return c ; 
	        }
	        else if(arr[mid]>x){
	            right = mid-1 ; 
	        }
	        else{
	            left = mid+1 ;
	        }
	    }
	    return c ;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends