/*
Today I learn:
- if-else statements
- nested if-else
- switch-case
- for loop
- while loop
- do while loop
- for each loop
*/



# include <iostream>
# include <cmath>
using namespace std;

int count_vowels(string text);
void display_pow_of_2(int num);

int main(){

    // string name = "akshay kumar";
    // int vowels = count_vowels(name);

    // if (!vowels){
    //     cout << "No vowel found";
    // } else {
    //     cout << "There are total " << vowels << " vowel(s).";
    // }

    display_pow_of_2(10);


    cout << endl;
    return 0;
}


void display_pow_of_2(int num){
    for (int i=0; i<=num; i++){
        cout << "2^" << i << " = " << pow(2,i) << endl;
    }
}



int count_vowels(string text){
    int total = 0;
    int total_a = 0;
    int total_e = 0;
    int total_i = 0;
    int total_o = 0;
    int total_u = 0;

    for (char ch: text){
        switch (ch){
            case 'a':{
                total += 1;
                total_a += 1;
                break;
            }
            case 'e':{
                total += 1;
                total_e += 1;
                break;
            }
            case 'i':{
                total += 1;
                total_i += 1;
                break;
            }
            case 'o':{
                total += 1;
                total_o += 1;
                break;
            }
            case 'u':{
                total += 1;
                total_u += 1;
                break;
            }
            default:{
                continue;
            }
        }
    }

    return total;
}


