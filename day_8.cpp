// day 8

// practice - structures

# include <iostream>
# include <string>
# include <limits>

using namespace std;



// decalaring structure for users
struct Person{
    string name;
    int age;
    string gender;
    float weight = 60.0f;
};

// declaring a method that display user information
void displayUserInformation(Person user);




// main method
int main(){

    // testing user structure
    Person person;
    person.name = "aman";
    person.age = 34;
    person.gender = "male";

    char permission;
    int count = 0;

    while (true) {
        count++;
        cout << "\n\nDo you want to add a new user? \n (Enter 'n' for stop): ";
        cin >> permission;
        if (permission == 'n') {
            break;
        }
        
        // creating new instance for struct [Person]
        Person newUser;

        // decalring variables
        string name, gender;
        int age;
        float weight;



        // ---------  taking user values --------------- //

        // taking user name
        cout << "\n--- Name of new user: ";
        getline(cin,name);
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // taking user age
        cout << "--- Age of user     : ";
        cin >> newUser.age;

        // taking user gender
        cout << "--- Gender of user  : ";
        getline(cin, gender);
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // taking user weight (if user wants)
        cout << "--- Enter user weight (If not skip this step): ";
        string weightPermission;
        getline(cin, weightPermission);
        if (weightPermission.size() != 0) {
            weight = stof(weightPermission);
            newUser.weight = weight;
        }

        // updating all informations
        newUser.name = name;
        newUser.age = age;
        newUser.gender = gender;

        cout << "\nUser added sucessfully (" << to_string(count) << ")" << endl;
        displayUserInformation(newUser);

    }


    // cout << person.weight << " kg" << endl;


    cout << endl;
    return 0;
}




void displayUserInformation(Person user){
    cout << "-{ User name   : " << user.name << endl;
    cout << "-{ User age    : " << user.age << endl;
    cout << "-{ User gender : " << user.gender << endl;
    cout << "-{ User weight : " << user.weight << endl;
}





