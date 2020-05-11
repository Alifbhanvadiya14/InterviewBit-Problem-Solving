int Solution::isPalindrome(int A) {
    int ans=0, num=A;
    
    while(A>0){
        int rem;
        rem =A%10;
        ans = ans * 10 + rem;
        A = A/10;
    }
    
    if(num == ans) return true;
    else return false;
}
