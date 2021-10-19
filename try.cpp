#include<iostream>
#include <vector>
using namespace std;
bool search(vector<int>& nums, int target) {
        if(nums.size()==0) return -1;
        int low=0;
        int high=nums.size()-1;
        int first = nums[0];
        bool is_target=target>=first;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            int val=nums[mid];
            if(val==target){
                return true;
            }
            bool is_big=val>=first;
            if(is_big == is_target){
                if(val<target){
                    low=mid+1;
                }else{
                    high =mid-1;
                }
            }else{
                if(is_big){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
            
        }
    return false;
}
int main(){
    vector<int>arr={2,5,6,0,0,1,2};
    cout<<search(arr,0);
    return 0;
}
