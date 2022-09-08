class Solution {
public:
    bool isHappy(int n) {
        int sum=0,i=0,a,b;
        int num=n;
        while(i<10000)
        {
            sum=0;
            while(num!=0)
            {
                a=num%10;
                b=num/10;
                num=b;
                sum=sum+(a*a);
                
            }
            num=sum;
            if(sum==1) return true;
            i++;
        }
        return false;
    }
};