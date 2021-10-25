#include <bits/stdc++.h>

using namespace std;

ifstream fin  ("4.in");

int i, j, k, indNull, sol;
int byr, iyr, eyr, hgt, pid, cm, in, hcl, ecl, nr1, nr2, nr3;
char s[2005][105];

bitset <10005> f;

int main(){
    indNull = 1;
    for (i=1; i<=4; i++){
        fin.getline (s[i], 1000);
        byr = iyr = eyr = hgt = cm = in = hcl = ecl = pid = nr1 = nr2 = nr3 = 0;
        for (j=0; s[i][j]!=0; j++){
            if (s[i][j] == 'r' && s[i][j-1] == 'y' && s[i][j-2] == 'b'){ ///byr
                nr1 = (s[i][j+2] - '0')*1000 + (s[i][j+3] - '0')*100 + (s[i][j+4] - '0')*10 + (s[i][j+5] - '0');
                if (nr1 >= 1920 && nr1 <= 2002){
                    byr = 1;
                }
            }
            if (s[i][j] == 'r' && s[i][j-1] == 'y' && s[i][j-2] == 'i'){ ///iyr
                nr2 = (s[i][j+2] - '0')*1000 + (s[i][j+3] - '0')*100 + (s[i][j+4] - '0')*10 + (s[i][j+5] - '0');
                if (nr2 >= 2010 && nr2 <= 2020){
                    iyr = 1;
                }
            }
            if (s[i][j] == 'r' && s[i][j-1] == 'y' && s[i][j-2] == 'e'){ ///eyr
                nr3 = (s[i][j+2] - '0')*1000 + (s[i][j+3] - '0')*100 + (s[i][j+4] - '0')*10 + (s[i][j+5] - '0');
                if (nr3 >= 2020 && nr3 <= 2030){
                    eyr = 1;
                }
            }
            if (s[i][j] == 't' && s[i][j-1] == 'g' && s[i][j-2] == 'h'){ ///hgt
                if (s[i][j+2] == 'c' && s[i][j+3] == 'm'){
                    cm = (s[i][j+4] - '0')*100 + (s[i][j+5] - '0')*10 + (s[i][j+6] - '0');
                }
                if (s[i][j+2] == 'i' && s[i][j+3] == 'n'){
                    in = (s[i][j+4] - '0')*10 + (s[i][j+5] - '0');
                }
                if ((cm >= 150 && cm <= 193) || (in >= 59 && in <= 76)){
                    hgt = 1;
                }
            }
            if (s[i][j] == 'l' && s[i][j-1] == 'c' && s[i][j-2] == 'h'){ ///hcl
                if (s[i][j+2] == '#'){
                    for (k=j+3; k<=j+8; k++){
                        if ((s[i][k] >= '0' && s[i][k] <= '9') || (s[i][k] >= 'a' && s[i][k] <= 'f')){
                            hcl = 1;
                        }
                        else{
                            hcl = 0;
                            break;
                        }
                    }
                }
            }
            if (s[i][j] == 'l' && s[i][j-1] == 'c' && s[i][j-2] == 'e'){ ///ecl
                j++;
                if (s[i][j+1] == 'a' && s[i][j+2] == 'm' && s[i][j+3] == 'b'){
                    ecl = 1;
                }
                if (s[i][j+1] == 'b' && s[i][j+2] == 'l' && s[i][j+3] == 'u'){
                    ecl = 1;
                }
                if (s[i][j+1] == 'b' && s[i][j+2] == 'r' && s[i][j+3] == 'n'){
                    ecl = 1;
                }
                if (s[i][j+1] == 'g' && s[i][j+2] == 'r' && s[i][j+3] == 'y'){
                    ecl = 1;
                }
                if (s[i][j+1] == 'g' && s[i][j+2] == 'r' && s[i][j+3] == 'n'){
                    ecl = 1;
                }
                if (s[i][j+1] == 'h' && s[i][j+2] == 'z' && s[i][j+3] == 'l'){
                    ecl = 1;
                }
                if (s[i][j+1] == 'o' && s[i][j+2] == 't' && s[i][j+3] == 'h'){
                    ecl = 1;
                }
            }
            if (s[i][j] == 'd' && s[i][j-1] == 'i' && s[i][j-2] == 'p'){ ///pid
                j++;
                if (s[i][j+1] == '0'){
                    for (k=j+1; k<=j+9; k++){
                        if (s[i][j] >= '0' && s[i][j] <= '9'){
                            pid = 1;
                        }
                        else{
                            pid = 0;
                            break;
                        }
                    }
                }
            }
        }
        if (byr == iyr == eyr == hgt == cm == in == hcl == ecl == pid == 1){
            sol++;
        }

    }
    cout << sol;
    return 0;
}

