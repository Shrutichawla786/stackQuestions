Q.Get minimum element from stack
link-->https://www.geeksforgeeks.org/problems/get-minimum-element-from-stack/1
code-->
class Solution{
    int minEle;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           //Write your code here
           if(s.empty()){
               return -1;
           }
            else{
                return minEle;
           }
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
           if(s.empty()){
               return -1;
           }
           int y= s.top();
           s.pop();
           if(y<minEle){
               minEle = 2*minEle-y;
               return ( minEle+y)/2;
           }
           else{
               return y;
           }
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           //Write your code here
           if(s.empty()){
               minEle = x;
               s.push(x);
           }
           else if(x<minEle){
               s.push(2*x-minEle);
               minEle=x;
           }
           else{
               s.push(x);
           }
       }
};
Expected Time Complexity: O(1) for all the 3 methods.
Expected Auxiliary Space: O(1) for all the 3 methods.
