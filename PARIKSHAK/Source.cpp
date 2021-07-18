#include <iostream>
#include <string>
#include<fstream>

using namespace std;

void AdminLogin()
{
    string username;
    string password;

    cout << "LOGIN AS ADMIN" << endl;
    cout << "Enter the username:" << endl;
    cin >> username;
    cout << "Enter the password:" << endl;
    cin >> password;
}

void CandidateLogin()
{
    string username;
    string password;

    cout << "LOGIN AS CANDIDATE" << endl;
    cout << "Enter the username:" << endl;
    cin >> username;
    cout << "Enter the password:" << endl;
    cin >> password;
}




class Candidate
{
private:
    int ID;

public:
    string username;
    string password;
    string name;
    string aadhar;
    string address;
    string qualifications;

    void RegisterCandidate()
    {
        ID = ID + 1;
        Candidate user;
        string password_check1, password_check2;
        int match = 0;
        cout << "ENTER REGISTRATION DETAILS" << endl;
        cout << "Enter the username:" << endl;
        cin >> user.username;
        
        do
        {
            cout << "Enter the password:" << endl;
            cin >> password_check1;
            cout << "Re-Enter the password:" << endl;
            cin >> password_check2;
            if (password_check2 == password_check1)
            {
                match = 1;
                user.username = password_check1;
            }
        } while (match == 0);

        cout << "Enter the name:" << endl;
        cin >> user.name;
        cout << "Enter the aadhar number:" << endl;
        cin >> user.aadhar;
        cout << "Enter the address:" << endl;
        cin >> user.address;
        cout << "Enter the highest qualification:" << endl;
        cin >> user.qualifications;

        user.ID = ID;
    }

    

};

void NewRegistration()
{
    Candidate new_user;
    new_user.RegisterCandidate();

}


int main()
{
    int ch;
    cout << "MAIN MENU" << endl;
    cout << "1. Login as admin" << endl;
    cout << "2. Login as candidate" << endl;
    cout << "3. Register new candidate" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter your choice:" << endl;

    cin >> ch;

    switch (ch)
    {
    case 1:
        AdminLogin();
        break;
    case 2:
        CandidateLogin();
        break;
    case 3:
        NewRegistration();
        break;

    case 0:
        cout << "GOODBYE!" << endl;
        return 0;
    default:
        cout << "Incorrect choice";
        break;
    }
    return 0;
}