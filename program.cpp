#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

string generateRandomPassword(int length){
    const string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@#$%*_";

    srand(time(0));

    string password;

    for(int i=0; i<length; i++) {
        int randomIndex = rand() % charset.length();
        password += charset[randomIndex];
    }
    return password;
}

int main(){
    cout<<"\n\n\n\t\t\tWelcome to Password Generator\n\n";

    int passwordLength;
    start:
    cout<<"\tEnter the desired password length: ";
    cin>>passwordLength;

    if (passwordLength <= 0) {
        cout<<"\tInvalid password length.\n\tPlease enter a positive integer.\n"<<endl;
        goto start;
    }
   
    string generatedPassword = generateRandomPassword(passwordLength);
    cout<<"\tGenerated Password: "<<generatedPassword<<endl;

    return 0;
}