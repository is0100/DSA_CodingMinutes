#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include <unordered_set>
using namespace std;
struct triple{
   int x,y,z;

};


pair<int,int>closeSum(vector<int>arr,int n,int t){
   int sum=0;
   int ans=0;
  vector<triple>as;
  pair<int,int>ass;
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        sum=arr[i]+arr[j];
        as.push_back({arr[i],arr[j],sum});
        if(sum<t){
         ans=max(ans,sum);
        }
      }
   }
   int size=as.size();
   for(int i=0;i<size;i++){
      if(as[i].z==ans){
        return make_pair(as[i].x,as[i].y);
      }
   }
return make_pair(-1,-1);
}

void check(vector<int>arr,int size,int target){
   unordered_set<int>s;
   for(int i=0;i<size;i++){
      int x=target-arr[i];
      if(s.find(x)!=s.end())
         cout<<arr[i]<<" "<<x;

      s.insert(arr[i]);

   }
}
int main(){

vector<int>arr={0, -1, 2, -3, 1};
   int r=arr.size();
   int target ;
   cin>>target;
pair<int,int>p=closeSum(arr,r,target);
   cout<<p.first<<" "<<p.second;
   cout<<endl;

   check(arr,r,target);

}