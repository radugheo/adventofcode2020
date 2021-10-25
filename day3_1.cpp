#include <bits/stdc++.h>

using namespace std;

ifstream fin  ("3.in");

int i, j, sol;
char a[505][505];

int main(){
    for (i=1; i<=323; i++){
        for (j=1; j<=31; j++){
            fin >> a[i][j];
        }
    }
    i = 2, j = 4;
    while (i <= 323){
        //cout << i << " " << j << "\n";
        if (a[i][j] == '#'){
            sol++;
        }
        i++, j+=3;
        if (j > 31)
            j = j%31;
    }
    cout << sol;
    return 0;
}
