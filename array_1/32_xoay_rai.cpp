/* Liệt kê các giá trị xuất hiện trong mảng từ lớn đên bé kèm số lần xuất hiện */
#include <bits/stdc++.h>
using namespace std;
int cnt[100001];
void xoay_trai(int a[],int k,int l){
    int g = k % l;
    for (int i = g; i < l; i++) {
        cout <<a[i]<< " ";
    }
    for (int i = 0; i < g; i++) {
        cout << a[i] << " ";
    }
    cout << endl; 
}
int main(){
    int n,k;
    cin >>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    };

    xoay_trai(a,k,n);
    
}