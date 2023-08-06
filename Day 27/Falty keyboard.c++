class Solution {
public:
    
    void reverse(string &s){
        int i=0,j=s.size()-1;
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
    
    string finalString(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='i'){
                reverse(ans);
                
            }
            else{
                ans=ans+s[i];
            }
        }
        return ans;
    }
};