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
        nr = 0, m--, M--;
        if (!(s[m] == litera && s[M] == litera) && (s[m] == litera || s[M] == litera))
            sol++;
        //cout << s[m] << " " << s[M] << "\n";
    }
    cout << sol;
    return 0;
}

