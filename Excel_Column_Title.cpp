string Solution::convertToTitle(int A) {
    //creating map
    string map ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    string ans;
    
    while(A>0){
        A = A-1;
        int rem = A%26;
        
        ans = (map[rem]) + ans;
        
        A =A/26;
    }
    
    return ans;
}
