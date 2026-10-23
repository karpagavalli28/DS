#include <iostream>
using namespace std;
void merge(int a[],int l,int m,int r){
    int t[100],i=l,j=m+1,k=0;
    while(i<=m&&j<=r){
        if(a[i]<a[j]) t[k++]=a[i++];
        else t[k++]=a[j++];
    }
    while(i<=m) t[k++]=a[i++];
    while(j<=r) t[k++]=a[j++];
    for(i=l,k=0;i<=r;i++,k++) a[i]=t[k];
}
void sort(int a[],int l,int r){
    if(l<r){
        int m=(l+r)/2;
        sort(a,l,m);
        sort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main(){
    int a[]={25,10,45,30,15,50,20};
    int n=7;
    sort(a,0,n-1);
    cout<<"Sorted weights: ";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
