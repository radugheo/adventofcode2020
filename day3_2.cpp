#include <bits/stdc++.h>

using namespace std;

ifstream fin  ("3.in");

long long i, j, sol1, sol2, sol3, sol4, sol5;
char a[505][505];

int main(){
    for (i=1; i<=323; i++){
        for (j=1; j<=31; j++){
            fin >> a[i][j];
        }
    }
    ///1
    i = 2, j = 2;
    while (i <= 323){
        if (a[i][j] == '#'){
            sol1++;
        }
        i++, j++;
        if (j > 31)
            j = j%31;
    }
    ///3
    i = 2, j = 4;
    while (i <= 323){
        if (a[i][j] == '#'){
            sol2++;
        }
        i++, j+=3;
        if (j > 31)
            j = j%31;
    }
    ///5
    i = 2, j = 6;
    while (i <= 323){
        if (a[i][j] == '#'){
            sol3++;
        }
        i++, j+=5;
        if (j > 31)
            j = j%31;
    }
    ///7
    i = 2, j = 8;
    while (i <= 323){
        if (a[i][j] == '#'){
            sol4++;
        }
        i++, j+=7;
        if (j > 31)
            j = j%31;
    }
    ///1, 2
    i = 3, j = 2;
    while (i <= 323){
        if (a[i][j] == '#'){
            sol5++;
        }
        i+=2, j++;
        if (j > 31)
            j = j%31;
    }
    cout << 1LL*sol1*sol2*1LL*sol3*sol4*sol5;
    return 0;
}

