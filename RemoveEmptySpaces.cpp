#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
     int count = 0; 
    for (int i = 0;i<str.length(); i++) 
        if (str[i] != ' ') 
            str[count++] = str[i]; 
    str[count] = '\0';
        cout<<str;
    return 0;
}
