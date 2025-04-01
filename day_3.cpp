// today we learn taking usr input
// and operators 
// strings


# include <iostream>
using namespace std;



int main()
{
    // int a;
    // cout << "Enter a number: ";
    // cin >> a; 
    // a++;
    // ++a;
    // cout << endl << "You enter " << a << endl;

    
    // // ---------- Operators ------------- //
    // int x=10, y=20;
    // cout << "X & Y = " << (x & y) << "\n";
    // cout << "X | Y = " << (x | y) << "\n";
    // cout << "X ^ Y = " << (x ^ y) << "\n";
    // cout << "X >> 1 = " << (x >> 1) << endl;
    // cout << "X << 1 = " << (x << 1) << endl;




    // ------------- Strings --------------- //
    string fName = "rahul";
    string lName = "kumar";
    string fullName = fName + lName;
    string fullName2 = fName.append(lName);

    cout << "Concatenate with (+): " << fullName << endl;
    cout << "Concatenate with append(): " << fullName2 << endl;
    cout << "Calling length(): " << fullName.length() << endl;
    cout << "Calling size(): " << fullName.size() << endl;
    // indexing
    cout << fullName[1] << endl;
    cout << fullName[-1] << endl;
    cout << fullName[1,5] << endl;
    cout << fullName[1,5,1] << endl;
    cout << fullName[0,-1,-1] << endl;
    return 0;
}
