int Solution::isPower(int A) {
    
    if(A==1) return 1;
    
    for(int i=2;i*i<=A;i++){
        int logp = log(A)/log(i);
        
        if(ceil(logp)==floor(logp)) {
            return true;
        }
    }
    
    return false;
}
