#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>vec={1,2,-1,-2};
    int j=0;
    int arr[vec.size()];
    for(int i=0;i<vec.size();i++){
        if(vec[i]<0){
            arr[j++]=vec[i];
        }
    }
    if(j==vec.size() or j==0) cout<<-1;

    for(int i=0;i<vec.size();i++){
        if(vec[i]>0){
            arr[j++]=vec[i];
        }
    }
    // for(int i=0;i<vec.size();i++){
    //     if(vec[i]>0){
    //         for(j=i+1;j<vec.size();j++){
    //             if(vec[j]<0){
    //                 swap(vec[i],vec[j]);
    //             }
    //         }
    //     }

    // }
    for(auto it:arr){
        cout<<it<<" ";
    }

}
