#include <bits/stdc++.h>

using namespace std;

ifstream fin  ("4.in");
ofstream fout ("4.out");

int i, j, k, indNull, sol;
char s[2005][105];

bitset <10005> f;

int main(){
    indNull = 1;
    for (i=1; i<=1121; i++){
        fin.getline (s[i], 1000);
        if (s[i][0] == NULL){
            for (j=indNull; j<i; j++){
                ///prelucrez s[j]
                for (k=0; s[j][k]!=0; k++){
                    fout << s[j][k];
                    if (s[j][k] == 'r' && s[j][k-1] == 'y' && s[j][k-2] == 'b'){ ///byr
                        f[1] = 1;
                    }
                    if (s[j][k] == 'r' && s[j][k-1] == 'y' && s[j][k-2] == 'i'){ ///iyr
                        f[2] = 1;
                    }
                    if (s[j][k] == 'r' && s[j][k-1] == 'y' && s[j][k-2] == 'e'){ ///eyr
                        f[3] = 1;
                    }
                    if (s[j][k] == 't' && s[j][k-1] == 'g' && s[j][k-2] == 'h'){ ///hgt
                        f[4] = 1;
                    }
                    if (s[j][k] == 'l' && s[j][k-1] == 'c' && s[j][k-2] == 'h'){ ///hcl
                        f[5] = 1;
                    }
                    if (s[j][k] == 'l' && s[j][k-1] == 'c' && s[j][k-2] == 'e'){ ///ecl
                        f[6] = 1;
                    }
                    if (s[j][k] == 'd' && s[j][k-1] == 'i' && s[j][k-2] == 'p'){ ///pid
                        f[7] = 1;
                    }
                }
            }
            fout << "\n";
            ///cout << f[1] << " " << f[2] << " " << f[3] << " " << f[4] << " " << f[5] << " " << f[6] << " " << f[7] << "\n";
            if (f[1] == 1 && f[2] == 1 && f[3] == 1 && f[4] == 1 && f[5] == 1 && f[6] == 1 && f[7] == 1){
                sol++;
            }
            indNull = i, f.reset();
        }
    }
    cout << sol + 1;
    return 0;
}
