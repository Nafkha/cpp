#include <iostream>
#include "imp.cpp"
using namespace std;

int main()
{
    int x,y;
    cout << "Donner X" << endl;
    cin>>x;
    cout<<"Donner Y"<<endl;
    cin>>y;
    cout<<somme(x,y);

    return 0;
}
