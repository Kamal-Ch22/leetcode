class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f=0,ten=0,twe=0;
        for(int i=0;i<bills.size();i++)
        {
            f+=bills[i]==5;
            ten+=bills[i]==10;
            twe+=bills[i]==20;
            if(bills[i]==10)
            {
              if(f<=0) return false;
                else f--;
            }
            else if(bills[i]==20)
            {
                if(ten>0)
                {
                    ten--;
                    if(f<=0) return false;
                    else f--;
                }
                else if(f>=3) f-=3;
                else return false;
            }
            
        }
        return true;
       
    }
};