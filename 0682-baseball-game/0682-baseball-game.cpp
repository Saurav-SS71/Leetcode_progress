class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> V;
        for(auto & i: operations){
            if(i=="C"){
                V.pop_back();
            }
            else if(i=="+"){
                V.push_back(V[V.size()-1]+V[V.size()-2]);
            }
            else if(i=="D"){
                V.push_back(2*V[V.size()-1]);
            }
            else{
                V.push_back(stoi(i));
            }
        }
        int sum=0;
        for(int i:V){
            sum+=i;
        }
        return sum;
    }
};