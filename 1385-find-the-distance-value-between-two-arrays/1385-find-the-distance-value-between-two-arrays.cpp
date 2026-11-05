class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        for(int x:arr1){
            bool res=true;
            for(int y:arr2){
                res &=(abs(x-y)>d);
            }
            count+=res;
        }
        return count;
    }
};