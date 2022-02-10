#include <iostream>
#include<cmath>


using namespace std;

int main()
{
    double a=24.325,result;
    result=llrint(a);
    cout<<"Rounding downward : "<<result<<""<<endl;


    a=26.0356983;
    result=llrint(a);
    cout<<"Rounding to nearest : "<<result<<""<<endl;


    a=29.363636;
    cout.precision(3);
    cout<<"precision of a is : "<<a<<""<<endl;

    return 0;
}
