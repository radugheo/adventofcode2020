#include <bits/stdc++.h>

using namespace std;

ifstream fin  ("7.in");

int k, i, p, x, sol = -1;
int f[20005];

char ch[20005], *cuvinte[20005];

map <string, int> id;

string a, b, c;

vector <int> L[20005];

string convertToString(char* a, int sizee){
    int i;
    string s = "";
    for (i=0; i<sizee; i++) {
        s = s + a[i];
    }
    return s;
}

void muchie (string a, string b){
    if (!id[a]) id[a] = ++p;
    if (!id[b]) id[b] = ++p;
    if (a == "shinygold") x = id[a];
    L[id[a]].push_back (id[b]);
}

void dfs (int nod){
    sol++;
    f[nod] = 1;
    for (int i=0; i<L[nod].size(); i++){
        int vecin = L[nod][i];
        if (f[vecin] == 0){
            dfs (vecin);
        }
    }
}

int main(){
    for (int t=1; t<=594; t++){
        fin.getline(ch, 20000);
        char *pch;
        pch = strtok (ch, " ,.");
        k = 0;
        while (pch != NULL){
            cuvinte[++k] = pch;
            pch = strtok (NULL, " ,.");
        }
        a = convertToString(cuvinte[1], strlen(cuvinte[1]));
        b = convertToString(cuvinte[2], strlen(cuvinte[2]));
        a = a + b;
        for (i=6; i<=k; i+=4){
            b = convertToString(cuvinte[i], strlen(cuvinte[i]));
            c = convertToString(cuvinte[i+1], strlen(cuvinte[i+1]));
            if (b != "other"){
                b = b + c;
                ///fac muchie b->a
                muchie (b, a);
            }
        }
    }
    dfs (x);
    cout << sol;
    return 0;
}
