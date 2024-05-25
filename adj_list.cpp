#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int matrix[n][n];
    vector<pair<int,int>> e_list;
    memset(matrix,0,sizeof(matrix));
    scanf("\n");
    for(int i=0;i<n;i++){
        string ke,e;
        getline(cin,ke);
        stringstream stream(ke);
        while(stream>>e){
              matrix[i][stoi(e)-1]=1;
        }
    }
    cout<<"Ma tran ke:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<matrix[i][j]<<' ';
        cout<<endl;
    }
    cout<<"Danh sach canh:\n";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(matrix[i][j]) cout<<i+1<<' '<<j+1<<endl;
        }
    }
}