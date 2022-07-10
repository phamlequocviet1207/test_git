#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

long long n,m,a1,b,a[10010],vt[100000];

int gcd4(int k, int l) {
    int tmp;
    while(l != 0) {
        tmp = k % l;
        k = l;
        l = tmp;
    }
    return k;
}

long long tinhToan(int x, int y){
    long long ucln = 0;
    for (int j=x; j<=y; j++){
        if (a[j] != 0){
            if (ucln == 0) ucln = a[j];
            else ucln = gcd4(ucln,a[j]);
        }
    }
    return ucln;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> a[i];
        vt[a[i]]++;
    }

    cin >> m;
    for (int i=1; i<=m; i++){
        cin >> a1 >> b;
        cout  << tinhToan(a1,b) << endl;
    }
}
