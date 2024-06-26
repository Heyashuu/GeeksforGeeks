//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        sort(arr,arr+n) ;
        int i = 0 ; 
        while(arr[i]<1){
            i++ ; 
        }
        int j = 1 ; 
        while(i<=n+1){
            if(j==arr[i]){
                while(arr[i]==arr[i+1]){
                    i++ ; 
                }
                 i++ ; 
                j++ ; 
            }
            else{
                 return j ; 
            }
        }
        return 0 ; 
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends