#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cout<< "Enter 3 numbers "<< endl;
    cin>> a >> b >> c;
    cout << "You entered: " << a <<", " << b << ", " << c << endl;

    if ((a >= b) && ( a >= c))
    {
        cout<<" greatest"<< a << endl;

    }else if( (b >= a) && ( b >= c))
    {
        cout<<" greatest "<< b << endl;
    }else
    {
        cout<< " greatest is "<< c <<endl;
    }
   return 0;

}
