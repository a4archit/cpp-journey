// day 9
// practice
// pattern problem


# include <iostream>

using namespace std;


int main(int argc, char *argv[]){
    // cout << "chal gya";
    
    for (int i=0; i<=50; i+=2){
        //cout << to_string('*'*i) << endl;
        for (int j=i; j>=0; --j){
            cout << '*';
        }
        
        cout << endl;
    }
    
    
    return 0;
}


