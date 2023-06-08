#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    //From Upper To Lower Case
    for ( int i=0; i<s.length(); i++ )
    {
        if ( s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + 32;
        }
    }
    //Removal of A,E,I,O,U,Y from text
    int len = s.length();
    for ( int i=0; i<len; i++ )
    {
        if ( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' )
        {
            for ( int j = i; j<len; j++ )
                s[j] = s[j+1];
            
            i--;
            len--;
        }
    }

    //Printing . before every consonant or before every letter as only consonat remain
    for ( int i=0; i<len; i++ )
    {
        cout<<"."<<s[i];
    }
}