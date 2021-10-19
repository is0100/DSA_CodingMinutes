// Rat in a maze two direction  r->,  d 

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int n,m;
void subset(int i,int j,string s ,int n,int m,vector<vector<int>>&vis){
    if(i>=n || j>=m || vis[i][j]==1) return;
    if(i==n-1 && j==m-1){
        cout<<s<<endl;
        return;
    }
    vis[i][j]=1;
    s+="r";
    subset(i+1,j,s,n,m,vis);
    s.pop_back();


    s+="d";
    subset(i,j+1,s,n,m,vis);
    s.pop_back();

    vis[i][j]=0;
    
}
int main(){
   cin>>n>>m;
   vector<vector<int>>vis(n,vector<int>(m,0));
   string s=" ";
    
    subset(0,0,s,n,m,vis);

}


#include<iostream>
#include<vector>
using namespace std;
int n,m;
string dir="drul";
int di[]={+1,+0,-1,+0};
int dj[]={+0,+1,+0,-1};
void subset(int i,int j,string s ,int n,int m,vector<vector<int>>&vis){
    if(i>=n || j>=m || vis[i][j]==1) return;
    if(i==n-1 && j==m-1){
        cout<<s<<endl;
        return;
    }
    vis[i][j]=1;
    for(int x=0;x<4;x++){
        s+=dir[x];
        subset(i+di[x],j+dj[x],s,n,m,vis);
    }
    vis[i][j]=0;
    
}
int main(){
   cin>>n>>m;
   vector<vector<int>>vis(n,vector<int>(m,0));
   string s=" ";
    
    subset(0,0,s,n,m,vis);

}