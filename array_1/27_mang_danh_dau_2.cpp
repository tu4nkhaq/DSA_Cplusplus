/* Liệt kê các giá trị xuất hiện trong mảng từ lớn đên bé kèm số lần xuất hiện */
#include <bits/stdc++.h>
using namespace std;
int cnt[100001];
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int &x:a) cin >> x;
    int max_val=-10e6;
    for(int i = 0; i < n;i++){
        cnt[a[i]]+=1;
        max_val= max(max_val,a[i]);
    }
    for(int i = 0; i <= max_val;i++){
        if(cnt[i]!=0){
            cout<<i<<" "<<cnt[i]<<endl;
        }
    }
}