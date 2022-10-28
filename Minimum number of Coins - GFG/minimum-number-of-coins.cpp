//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    
    {
        vector<int> test={1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        vector<int>ok;
        while(N>0)
        {
            int ans=upper_bound(test.begin(),test.end(),N)-test.begin();
            ans--;
            ok.push_back(test[ans]);
            N-=test[ans];
        }
        return ok;
        
        // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends