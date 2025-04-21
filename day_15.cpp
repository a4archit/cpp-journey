// day 15
// exploring classes

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




int main(int argc, char *argv[])
{
	Student st1("aman",16);
	Student anmol("anmol", 14, 'b');
	
	// cout << st1.name << endl;
	// cout << st1.age << endl;
	// cout << st1.sec << endl;
	
	anmol.displayInfo();
	
	
	return 0;
}
