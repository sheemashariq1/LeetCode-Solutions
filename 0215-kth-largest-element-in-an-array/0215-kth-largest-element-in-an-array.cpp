class Solution {
public:
int largest (vector<int>& nums,int l,int r,int target){
    if(l==r){
        return nums[l];
    }
    int pivot=nums[l+(r-l)/2];
    int i=l;
    int mid=l;
    int j=r;
    while(mid<=j){
        if(nums[mid]<pivot){
            swap(nums[i],nums[mid]);
            i++;
            mid++;
        }
        else if(nums[mid]==pivot){
            mid++;
        }
        else{
            swap(nums[mid],nums[j]);
            j--;
        }
    }
        if(target<i){
            return largest(nums,l,i-1,target);
        }
        else if(target>=mid){
            return largest(nums,mid,r,target);
        }
        else{
            return nums[target];
        }
}
    int findKthLargest(vector<int>& nums, int k) {
        return largest(nums,0,nums.size()-1,nums.size()-k);
    }
};