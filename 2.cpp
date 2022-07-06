#include<iostream>

using namespace std;

int main(void)
{
    char c;
    
    cin.get(c);
    
    while(c!='\n')
    {
        cout<<c;
        cin.get(c);
    }
    
    cout<<"\n";
    return 0;
}