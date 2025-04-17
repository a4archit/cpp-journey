// day 11
// bmi calculator (updated)


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
    
    cout << "\nYour BMI is " << to_string(round(bmi)) << "\n\n";
    
    // comparing different values
    if (bmi < 18){
        cout << "underweight";
    } else if (bmi >= 18 && bmi < 25){
        cout << "normal";
    } else if (bmi >= 25 && bmi < 30){
        cout << "overweight";
    } else if (bmi >= 30 && bmi < 35){
        cout << "obesity class I";
    } else if (bmi >= 35 && bmi < 40){
        cout << "obesity class II";
    } else {
        cout << "obesity class III";
    }
    
    
    return 0;
}


