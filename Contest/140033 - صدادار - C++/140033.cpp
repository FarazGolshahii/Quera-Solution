// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>
using namespace std;

int main()
{
    char strng[100];  // declaring variables..
    int i,vow=0;
    cin>>strng; // taking string from user.

    //Initializing for loop.
    for(i=0;strng[i];i++)  // iterate loop
    {
        //Counting the vowels in a string.
        if(strng[i]=='a'|| strng[i]=='e'||strng[i]=='i'||strng[i]=='o'||strng[i]=='u'||strng[i]=='A'||strng[i]=='E'||strng[i]=='I'||strng[i]=='O' ||strng[i]=='U')
        {
            vow++;
        }
    }
    cout<<vow;
    return 0;
}

