class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int low=0, high=nums.size()-1,mid=(low+high)/2;
        int count=0;
        merge_sort(nums, low, mid, count);
        merge_sort(nums, mid+1, high, count);
        merge(nums, low,  mid, high, count);
        return count;
    }
    void merge_sort(vector<int> &nums, int low, int high, int &count){
        if(low>=high){return ;}
        int mid=(low+high)/2;
        merge_sort(nums, low, mid, count);
        merge_sort(nums, mid+1, high, count);
        merge(nums, low,  mid, high, count);
    }
    
    void merge(vector<int> &nums, int low, int mid, int high, int & count){
        int left=low, right=mid+1;
        vector<int> V;
        while(left<=mid&&right<=high){
            if((long long )nums[left]>2LL*nums[right]){
                count+=mid-left+1;
                right++;
            }
            else{left++;}
        }
        left=low; right=mid+1;
        while(left<=mid&&right<=high){
            if(nums[left]<=nums[right]){
                V.push_back(nums[left++]);
            }
            else{
                V.push_back(nums[right++]);
            }
        }
        while(left<=mid){V.push_back(nums[left++]);}
        while(right<=high){V.push_back(nums[right++]);}

        for(int i=0; i<V.size(); i++){
            nums[low+i]=V[i];
        }
    }
};