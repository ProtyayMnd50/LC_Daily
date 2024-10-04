class Solution {
public:
    int md(int x,int k){
        if(x>=0)return x%k;
        else if(x>=-k&&x<0){
            return (x+k)%k;
        }else{
            int q=abs(x)/k;
            int cl=(q+1)*-1*k;
            return (x-cl)%k;
        }

    }
    bool canArrange(vector<int>& arr, int k) {
       map<int,int>mp;
       for(int i=0;i<arr.size();i++)
       {
        int modul=md(arr[i],k);
        mp[modul]++;
       }
       for(int i=1;i<k;i++){
        if(mp[i]!=mp[k-i])return false;
       }
       if(mp[0]&1)return false;

       return true;
    }
};