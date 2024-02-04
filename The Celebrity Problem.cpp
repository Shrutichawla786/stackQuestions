Q.The Celebrity Problem
link-->https://www.geeksforgeeks.org/problems/the-celebrity-problem/1
code-->class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    bool knows(vector<vector<int> >& M,int a , int b,int n){
        if(M[a][b]==1){
            return true;
        }
        else{
            return false;
        }
    }
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int>s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        while(s.size()>1){
            int a = s.top();
            s.pop();
            int b= s.top();
            s.pop();
            if(knows(M,a,b ,n)){
                s.push(b);
            }
            else if(knows(M,b ,a,n)){
                s.push(a);
            }
        }
        int candi= s.top();
        bool rowcheck= false;
        int zerocount=0;
        for(int i=0;i<n;i++){
            if(M[candi][i]==0){
                zerocount++;
            }
            
        }
        if(zerocount==n){
            rowcheck=true;
        }
        
        bool colcheck= false;
        int onecount=0;
        for(int i=0;i<n;i++){
            if(M[i][candi]==1){
                onecount++;
            }
        }
        if(onecount==n-1){
            colcheck=true;
        }
        if(rowcheck && colcheck){
            return candi;
        }
        else{
            return -1;
        }
    }
};
  Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
