#include<iostream>
using namespace std;

isEven(int n){
    if (n % 2 == 0)
    {

        return 1;
    }
    else
        return 0;
}

int main()
{
    int num;int even_odd;

    cout<< "enter num" << endl;

    cin >> num ;

   even_odd = isEven(num);
   if(even_odd == 1)
   {
    cout<< "even number"<< endl;
    }
    else
        cout<< "odd number" << endl;


return 0;


}
