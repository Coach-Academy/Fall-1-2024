#include <bits/stdc++.h>
 
using namespace std;

bool is_lucky(int x){
    while(x != 0){
        if(x % 10 != 4 and x % 10 != 7)
            return false;
        x /= 10;
    }

    return true;
}


int32_t main(){

    int n; cin >> n;
    int ones = 0 , tows = 0, threes = 0, number_of_taxies = 0;

    for(int i=0; i<n; i++){
        int s; cin >> s;

        if(s == 1)
            ones++;
        else if(s == 2)
            tows++;
        else if(s == 3)
            threes++;
        else
            number_of_taxies++;
    }

    while(threes != 0  and ones != 0){ // 3
        threes--;
        ones--;
        number_of_taxies++;
    }

    if(threes != 0)
        number_of_taxies += threes;
    

    // 2
    while(tows >= 2) {
        tows -= 2;
        number_of_taxies++;
    }

    if(tows == 1){ // 2 1 1 or 2 1 or 2
        if(ones >= 2){
            tows--;
            ones -= 2;
            number_of_taxies++;
        }
        else if(ones == 1){
            tows--;
            ones--;
            number_of_taxies++;
        }
        else
            number_of_taxies++, tows--;
    }

    // 1
    // 1 or 1 1 or 1 1 1 or 1 1 1 1
    
    while(ones != 0){
        if(ones >= 4)
            ones -= 4, number_of_taxies++;
        else
            number_of_taxies++, ones = 0;
    }

    cout << number_of_taxies;

    return 0;
}