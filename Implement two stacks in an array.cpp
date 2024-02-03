Q.Implement two stacks in an array

link-->https://www.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1
code-->class twoStacks
{
    int *arr;
    int top1;
    int top2;
    int size;
    public:
   
    
    twoStacks(int n=100)
    {
        size=n;
        top1=-1;
        top2=size;
        arr= new int[n];
    }
 
    //Function to push an integer into the stack1.
    void push1(int x)
    {
        if(top1<top2-1){
           top1++;
           arr[top1]=x;
        }
    }
    
    //Function to push an integer into the stack2.
    void push2(int x)
    {
        if(top1<top2-1){
            top2--;
            arr[top2]=x;
        }
       
    }
    
    //Function to remove an element from top of the stack1.
    int pop1()
    {
        if(top1==-1){
            return -1;
            
        }
        int ans = arr[top1];
        top1--;
        return ans;
    }
    
    //Function to remove an element from top of the stack2.
    int pop2()
    {
       if(top2==size){
           return -1;
       }
       int ans = arr[top2];
       top2++;
       return ans;
    }
};
Expected Time Complexity: O(1) for all the four methods.
Expected Auxiliary Space: O(1) for all the four methods.
