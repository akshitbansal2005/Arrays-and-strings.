#include<iostream>
using namespace std;
int main()
{
    string str;
    int i,flag=0;

    cout<<"Enter a string: ";
    cin>>str;

    int n = str.length();

    for(i=0;i<n;i++)
    {
        if(str[i] == str[n-i-1])
        {
            flag++;
        }
    }
    
    if(flag==n)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not palindrome.";
    }
}

/*Output
Enter a string: madam
Palindrome*/
