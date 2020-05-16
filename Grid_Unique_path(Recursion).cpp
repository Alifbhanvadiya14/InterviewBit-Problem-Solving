int Solution::uniquePaths(int A, int B) {
    //if row or column equals to 1
    if(A==1 || B ==1) return 1;
    
    return uniquePaths(A,B-1) + uniquePaths(A-1,B);
}
