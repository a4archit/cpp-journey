// day 16
// student information manager (basic)

# include <iostream>
using namespace std;



class Student {
    
    public:
        
        string name;
        int age;
        char sec = 'a';
        
        Student(string n, int a, char s='a'){
            name = n;
            age = a;
            sec = s;
        }
        
        void displayInfo(){
            cout << "name : " << name << endl;
            cout << "age  : " << age << endl;
            cout << "sec  : " << sec << endl;
        }
        
};




int main(int argc, char *argv[]){
	
	int maxStudents;
	cout << "Maximum number of students: ";
	cin >> maxStudents;
	
	for (int i=1; i<=maxStudents; i++){
	    string name;
	    int age;
	    char sec='a';
	    
	    cout << "\n\nEnter informations for student " << i;
	    
	    cout << "\n\tStudent name: ";
	    getline(cin,name);
	    
	    cout << "\n\tAge         : ";
	    cin >> age;
	    
	    cout << "\n\tSection     : ";
	    cin >> sec;
	}
	
	
	Student st1("aman",16);
	Student anmol("anmol", 14, 'b');
	
	anmol.displayInfo();
	
	
	return 0;
}
