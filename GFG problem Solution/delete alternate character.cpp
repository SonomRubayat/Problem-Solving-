// delete alternate character 


// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string delAlternate(string s) {
        // code here
      string p="";
        for(int i=0;i<s.length();i+=2){
            p+=s[i];
        }
        return p;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.delAlternate(S) << endl;
    }
    return 0;
}
  //////////////////////////////another solution
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string delAlternate(string S) {
       int i,n=S.size();
       string str("");
       for(i=0; i<n; i++){
          if(i%2==0)
           str+=S[i];
           
       }
       return str;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.delAlternate(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends
