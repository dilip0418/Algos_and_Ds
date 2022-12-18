#include<iostream>
#include <string.h>
using namespace std;

bool is_Palindrome_String(string str, int n,int i){
    
    if(str[i] != str[n-i-1]) return false;
    is_Palindrome_String(str,n,i+1);
    return true;
}

int main(){
    // string str = "dilid";
    // int n = str.size();

    int n;
    string str;
    cout<< "enter a string: ";
    cin >>str;
    n = str.size(); 

    cout << "the size of the stirng is "<<n<<endl;
    if(is_Palindrome_String(str,n,0)) cout << "The "<<str<<" is a palindrome!"<< endl;
    else cout << "The "<<str<<" is'nt a palindrome!";
    return 0;
}