#include <bits/stdc++.h>

using namespace std;

ifstream fin  ("6.in");

int i, nr, sol, nrPers;
int f[1005];
char s[505];

int main(){
    while (fin.getline(s, 500)){
        if (s[0] == NULL){
            nr = 0;
            for (i='a'; i<='z'; i++){
                if (f[i] == nrPers){
                    nr++;
                }
            }
            memset(f, 0, sizeof(f));
            nrPers = 0;
            sol += nr;
        }
        else{
            nrPers++;
            for (i=0; s[i]!=0; i++){
                f[s[i]]++;
            }
        }
    }
    nr = 0;
    for (i='a'; i<='z'; i++){
        if (f[i] == nrPers){
            nr++;
        }
    }
    memset(f, 0, sizeof(f));
    sol += nr;
    cout << sol;
    return 0;
}
