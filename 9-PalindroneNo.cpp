class Solution {
public:
    bool isPalindrome(int n) 
    {
    //reversing a nuber and then cheking if equal or not
    int revNum = 0;
    int dup = n;
    while (n > 0) {
        int ld = n % 10;
        if((revNum>INT_MAX/10)||(revNum<INT_MIN/10)){
            return 0; }
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }
 
    if (dup == revNum) {
        return true;
    } else {
        return false;
    }
}
};
