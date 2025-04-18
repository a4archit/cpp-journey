// day 12

// this program takes user name and obtained marks of 
// five subjects [hindi, english, maths, sst, science] 
// as input and calculate total, average marks
// percentage and also find final result ('pass' or 'fail')


# include <iostream>

using namespace std;


int main(int argc, char *argv[]){
    
    // defining variables
    int maximumMarks = 100, total = 0, totalSubjects;
    float average, percentage;
    string result;
    
    // taking user name 
    string userName;
    cout << "Enter your name: ";
    getline(cin,userName);
    cout << "\n";
    
    // creating subjects and marks array
    string subjects[] = {"math","english","sst","science","hindi"};
    int marks[] = {0,0,0,0,0};
    
    totalSubjects = size(subjects);
    
    for (int i=0; i<totalSubjects; i++){
        // taking obtained marks of current iterative subject
        int obtainedMarks;
        cout << "\n\tEnter obtained marks of " << subjects[i] << ": ";
        cin >> obtainedMarks;
        
        // updating marks
        marks[i] = obtainedMarks;
        
        total += obtainedMarks;
        
    }
    
    // updating variables
    average = total/totalSubjects;
    percentage = ((total*100)/(totalSubjects*maximumMarks));
    result = (percentage>33)?"passed :)":"failed :(";
    
    // displaying outputs
    cout << "\n\n";
    cout << userName << " you are " << result;
    cout << "\n\n\tPercentage: " << percentage << " %";
    cout << "\n\tMM        : " << maximumMarks * totalSubjects;
    cout << "\n\tMO        : " << total;
    cout << "\n\tMean      : " << average;
    
    cout << "\n\n";
    return 0;
}


