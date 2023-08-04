class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<int,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]=i;
        }

        int size=0;
        int end=0;
        vector<int>ans;
        for(int i=0;i<s.size();i++){

            end=max(end,mp[s[i]]);
            if(i<end){
                size++;
            }
            else if(i==end){
                ans.push_back(size+1);
                size=0;
            }

        }

        return ans;
    }
};