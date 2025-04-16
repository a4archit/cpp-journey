// day 10
// bmi calculator


# include <iostream>
# include <cmath>

using namespace std;


int main(int argc, char *argv[]){
    
    string name;
    
    // input user name
    cout << "What's your name: ";
    getline(cin,name);
    
    cout << "Hey " << name << " give me these values first :- \n";
    
    
    
    // taking user height and weight
    
    float height, weight_kg;
    
    cout << "\n\n\tyour height (cm) \n\t> ";
    cin >> height;
    
    cout << "\n\n\tyour weight (kg) \n\t> ";
    cin >> weight_kg;
    
    
    // calculating bmi
    height /= 100;
    double bmi = (weight_kg/pow(height,2));
    
    cout << "\nYour BMI is " << to_string(round(bmi));
    
    
    return 0;
}


