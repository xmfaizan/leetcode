class Solution {
public:

    int binSearch(int n){
        long long int ans=-1;
        int s=0;
        int e=n;
        long long int m = s+(e-s)/2;
        while(s<=e){
            long long int square =m*m;
            if(square>n){
                e=m-1; 
            }
            if(square<n){
                ans=m;
                s=m+1;
            }
            if((square)==n){
                return m;
            }
            m = s+(e-s)/2;
        }
        return ans;
    }    

    int mySqrt(int x) {
        return binSearch(x);
        
        
    }
};
