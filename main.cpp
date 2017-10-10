/*******************************************************************************
 * Author       : Jesus Lopez                                                  *
 * Assignment   : Chapter 10.1                                                 *
 * Class        : CSC-17A 47466                                                *
 * Date         : 10/10/17                                                     *
 * Purpose      : Determines c-string Length                                   *
 ******************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;

//Function Prototypes
int findLen(char[]);

int main(int argc, char** argv) {

    //Variables
    int     size = 20;      //Input  - Size of charater string.
    char    userStr[size];  //Input  - User character string.
    int     strLnth;        //Output - String length.
        
    //Asks & Retrieves Information
    cout << "Enter a string:" << endl;
    cin.getline(userStr, size);
    
    //Determines String Length
    strLnth = findLen(userStr);
    
    //Outputs Information
    cout << "The size of your string is " << strLnth << " characters.";
    
    return 0;
}

//Determines String Length
int findLen(char c[])
{
    int sLength;         //String length.
    
    sLength = strlen(c);
    
    return sLength;
}