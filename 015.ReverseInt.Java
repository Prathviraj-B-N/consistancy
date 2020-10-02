//leetcode.com/problems/reverse-integer/
class Solution {
    public int reverse(int x) {
        int a;
        int ans;
        int temp,temp1,rev=0,num;
        num =x;
            while(num!=0){
                temp = num%10;
                
                if(rev> Integer.MAX_VALUE/10 ||(rev== Integer.MAX_VALUE/10 && temp>7)){
                    return 0;
                }
                if(rev< Integer.MIN_VALUE/10 ||(rev==Integer.MIN_VALUE/10 && temp<-8) ){
                    return 0;
                }
                rev = rev*10+temp;
                num = num/10;
            }
        return rev;
    }
}
