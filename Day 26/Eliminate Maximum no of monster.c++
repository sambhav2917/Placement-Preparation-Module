class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
         int n=dist.size();
        vector<float> time(n);
        for(int i=0;i<n;++i){
            time[i]=(dist[i]/(float)speed[i]);
        }
        sort(time.begin(),time.end());
        int min=0;
        for(int i=0;i<n;i++){
            if(min>=time[i]) return i;
            min++;
        }
        return n;
    }
};