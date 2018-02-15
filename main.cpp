//Authors: Mustafa Nasafi

#include<iostream>
#include<string> //string class library


using namespace std;

int main()
{

    //declare variables
    
    string firstName;
    string lastName;
    string nickName ="";
    int lucky;
    

    int repeatAmount;

    //get user input

    cout << "Hello!\n";
    cout << "What's your first name?\n";

    cin >> firstName;

    cout << "What's your last name?\n";
    
    cin >> lastName;


    // pushback first characters of name to nickname with dots in between
    //push_back is the function for character only. takes single character and stores into nickName
    nickName.push_back(firstName[0]);
    nickName.push_back('.');
    nickName.push_back(lastName[0]);
    nickName.push_back('.');

    cout << "Welcome, " << nickName << " here is your fortune..." << endl;


    //tell fortune

    lucky = firstName.length();
    cout << "Your lucky number is: " << lucky << endl;  // display lucky number
    


  //end program  
  return 0;
} 
