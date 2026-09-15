class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int res=0;
        for(int i=0;i<32;i++){
            int last_digit= n & 1;
            n= n>>1;
            res = (res<<1) | last_digit;
        }

        return res;
    }
};
