Q.Implement stack using array

link->https://www.geeksforgeeks.org/problems/implement-stack-using-array/1
code-->
void MyStack :: push(int x)
{
    // Your Code
    top++;
    arr[top]=x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code 
    if(top==-1){
        return -1;
    }
    int ans = arr[top];
    top--;
    return ans;
}
Expected Time Complexity : O(1) for both push() and pop().
Expected Auixilliary Space : O(1) for both push() and pop().
