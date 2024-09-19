class Solution {
public:
        vector<int>solve(string s){
            vector<int>res;
            int cnt=0;
            for(int i=0;i<s.size();i++){
                if(s[i]=='+'||s[i]=='*'||s[i]=='-'){
                    cnt++;
                    vector<int>lft=solve(s.substr(0,i));
                    vector<int>rgt=solve(s.substr(i+1));

                    for(auto &x:lft){
                        for(auto &y:rgt){
                            if(s[i]=='+')res.push_back(x+y);
                            else if(s[i]=='-')res.push_back(x-y);
                            else res.push_back(x*y);
                        }
                    }
                }
            }
            if(cnt==0)res.push_back(stoi(s));//no operator found
            return res;
        }
        vector<int> diffWaysToCompute(string expression) {
            return solve(expression);
        }
};