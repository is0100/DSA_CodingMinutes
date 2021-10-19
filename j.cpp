#include<iostream>
#include<vector>
using namespace std;
int subset(int ind,int arr[],int n,int k,int sum){
    if(ind==n){
        if(sum%k==0){
            return 1;
        }else{
            return 0;
        }
    }
    //if pick
    // ds.push_back(arr[ind]);
    sum+=arr[ind];
    int l;
    l=subset(ind+1,arr,n,k,sum);
    //if not pick
    // ds.pop_back();
    sum-=arr[ind];
    int r ;
    r=subset(ind+1,arr,n,k,sum);
    return l+r;
}

int main(){
    int arr[]={3,2};
    vector<int>ds;
    int n=sizeof(arr)/sizeof(int);
 
    cout<<subset(0,arr,n,2,0)-1;
}
























































































#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
#define n 10
int main(){
   int cnt=0;
    int A [n]={0,0,1,1,1,2,2,3,3,4};

if (n==0 || n==1)
return n;

int temp[n];

if(n < 2) return n;
        int id = 1;
        for(int i = 1; i < n; ++i) 
            if(A[i] != A[i-1])
             A[id++] = A[i];
      


    cout<<id<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    
}



  