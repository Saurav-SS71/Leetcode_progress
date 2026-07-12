class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int T=0;
        vector<int> V1,V2;
        for(char c: startTime){
            if(isdigit(static_cast<unsigned char>(c))){
                V1.push_back(c);
            }
        }
        for(char c: endTime){
            if(isdigit(static_cast<unsigned char>(c))){
                V2.push_back(c);
            }
        }
        T+=V2[5]-V1[5] + 10*(V2[4]-V1[4]);
        T=T+ 60*(V2[3]-V1[3]) + 10*60*(V2[2]-V1[2]);
        T=T + 3600*(V2[1]-V1[1]) + 10*3600*(V2[0]-V1[0]);
        return T;
    }
};