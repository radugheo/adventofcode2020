#include <bits/stdc++.h>

using namespace std;

ifstream fin  ("1.in");
ofstream fout ("1.out");

int i, j;
int v[205];

int main(){
    for (i=1; i<=200; i++){
        fin >> v[i];
    }
    for (i=1; i<200; i++){
        for (j=i+1; j<=200; j++){
            if (v[i] + v[j] == 2020){
                cout << v[i]*v[j];
                break;
            }
        }
    }
    return 0;
}
