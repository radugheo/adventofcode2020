#include <bits/stdc++.h>

using namespace std;

ifstream fin  ("6.in");

int i, nr, sol;
int f[1005];
char s[505];

int main(){
    while (fin.getline(s, 500)){
        if (s[0] == NULL){
            nr = 0;
            for (i='a'; i<='z'; i++){
                if (f[i] != 0){
                    nr++;
                }
            }
            memset(f, 0, sizeof(f));
            sol += nr;
        }
        else{
            for (i=0; s[i]!=0; i++){
                f[s[i]]++;
            }
        }
    }
    nr = 0;
    for (i='a'; i<='z'; i++){
        if (f[i] != 0){
            nr++;
        }
    }
    memset(f, 0, sizeof(f));
    sol += nr;
    cout << sol;
    return 0;
}
