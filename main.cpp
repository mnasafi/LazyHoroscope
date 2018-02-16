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
    

    string f; // firstName 
    string Ln; // lastName for if statement

    

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
    

    //part 2

    //initialize variables
    f = firstName;
    Ln = lastName;

    if(f[0]=='a' || f[0]=='A' || f[0]=='e' || f[0]=='E' || f[0]=='i' || f[0]=='I' || f[0]=='o' || f[0]=='O' || f[0]=='u' || f[0]=='U' )
    {
        cout << "You should keep a low profile.\n";

    }

    else
    {

        cout << "You are destined to be famous!\n";

    } //end if else



    // last letter retriever
    /*
    firstName[len -1]
    */

    int lastChar = lastName.length();

    if(Ln[lastChar - 1] == 'a' || Ln[lastChar - 1] == 'e' || Ln[lastChar - 1 ] == 'i' || Ln[lastChar - 1] == 'o' || Ln[lastChar - 1] == 'u')
    {
        cout << "You have already met your true love.\n";
    
    }


    cout << "Have a good day!\n";


  //end program  
  return 0;
} 
