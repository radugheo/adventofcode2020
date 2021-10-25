#include <bits/stdc++.h>

using namespace std;

ifstream fin  ("2.in");

int i, m, M, nr, sol, j;
char ch, litera;
char s[1005];

int main(){
    for (i=1; i<=1000; i++){
        fin >> m >> ch >> M >> litera >> ch;
        fin >> s;
        nr = 0;
        for (j=0; s[j]!=0; j++){
            if (s[j] == litera){
                nr++;
            }
        }
        if (nr >= m && nr <= M){
            sol++;
        }
    }
    cout << sol;
    return 0;
}
