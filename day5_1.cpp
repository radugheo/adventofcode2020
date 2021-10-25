#include <bits/stdc++.h>

using namespace std;

ifstream fin  ("5.in");

int t, st, dr, i, row, column, seatID, sol;
char s[15];

int main(){
    for (t=1; t<=817; t++){
        fin >> s;
        st = 0, dr = 127;
        for (i=0; i<7; i++){
            if (s[i] == 'F'){
                dr = (st + dr)/2;
            }
            else if (s[i] == 'B'){
                st = (st + dr)/2;
            }
        }
        row = st + 1;
        st = 0, dr = 7;
        for (i=7; i<10; i++){
            if (s[i] == 'L'){
                dr = (st + dr)/2;
            }
            else{
                st = (st + dr)/2;
            }
        }
        column = dr;
        seatID = row*8 + column;
        //cout << row << " " << column << " " << seatID << "\n";
        sol = max (sol, seatID);
    }
    cout << sol;
    return 0;
}
