// day 14
// practice structures


# include <iostream>

using namespace std;



// creating structure for storing information about student
struct Student{
    string name = "", surname = "";
    int age = NULL;
    float weight = NULL;
};


// definition of display method
void displayInformation(Student student);


int main(){

    Student arpit, aman, ansh;

    // updating values
    ansh.name = "ansh";
    ansh.surname = "khepad";
    ansh.age = 56;
    ansh.weight = 87;

    displayInformation(ansh);


    cout << endl;
    return 0;
}


// writing script of defined method
void displayInformation(Student student){
    cout << "\n\n----- Information of [" + student.name << "] ";
    cout << "\n\tSurname: " << student.surname;
    cout << "\n\tAge    : " << student.age;
    cout << "\n\tWeight : " << student.weight;
}

