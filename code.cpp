#include<iostream>
#include<vector>
#include<string>
using namespace std;
void printSubsequence(string arr,string ds,int n,int i){
    if(i==n){
        if(ds.size()!=0){
        for(auto it:ds){
            cout<<it<<" ";
        }

        cout<<endl;
        return;
    }
    }
    ds.push_back(arr[i]);
    printSubsequence(arr,ds,n,i+1);
    ds.pop_back();
    printSubsequence(arr,ds,n,i+1);
}
int main(){
    string arr="ab";
    string ds;
    printSubsequence(arr,ds,arr.size(),0);
}