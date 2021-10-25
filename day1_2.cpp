#include <bits/stdc++.h>

using namespace std;

ifstream fin  ("1.in");
ofstream fout ("1.out");

int i, j, k;
int v[205];

int main(){
    for (i=1; i<=200; i++){
        fin >> v[i];
    }
    for (i=1; i<200-1; i++){
        for (j=i+1; j<200; j++){
            for (k=j+1; k<=200; k++){
                if (v[i] + v[j] + v[k] == 2020){
                    cout << v[i]*v[j]*v[k];
                    break;
                }
            }
        }
    }
    return 0;
}

