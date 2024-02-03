Q.Delete middle element of a stack
link->https://www.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1
code-->class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteFromStack(stack<int>&s , int count , int size){
        if(count== size/2){
            s.pop();
            return;
        }
        int num = s.top();
        s.pop();
        deleteFromStack(s , count+1,size);
        s.push(num);
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        deleteFromStack(s , 0 , sizeOfStack);
        
    }
};
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
  
