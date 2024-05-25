#include<bits/stdc++.h>
using namespace std;
long long tron(long long a[],int l,int m,int r){
    int i,j,k,n1=m-l+1,n2=r-m;
    long long L[n1],R[n2];
    for(i=0;i<n1;i++) L[i]=a[l+i];
    for(i=0;i<n2;i++) R[i]=a[m+i+1];
    long long kq=0;
    i=0;j=0;k=l;
    while(i<n1&&j<n2){
        if(L[i]<=R[j]) a[k++]=L[i++];
        else {
            kq=kq+n1-i;
            a[k++]=R[j++];
        }
    }
    while(i<n1) a[k++]=L[i++];
    while(j<n2) a[k++]=R[j++];
    return kq;
}
