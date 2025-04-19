// day 13
// Table of any number

# include <iostream>

using namespace std;

int main(){

    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Table of " << to_string(num) << " is >>> \n";

    for (int i=1; i<=10; i++){
        cout << num << " x " << i << " = " << to_string(num*i) << endl;
    }

}
