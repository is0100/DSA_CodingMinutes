#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int  n,sum;cin>>n>>sum;
    vector<int >arr(n);
    for(int i=0;i<n;++i)
    cin>>arr[i];
    
    int cusum=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        cusum+=arr[i];
        for(int j=i+1;j<n;j++){
            if(sum-cusum==arr[j]) cnt++;
        }
    }


cout<<cnt;
    return 0;
}