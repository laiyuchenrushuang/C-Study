
#include<iostream>
#include <sstream>
using namespace std;
int getResult(int a, int b);
void showLog(string re);
int main()
{
    int a,b;
    a=7;
    b =1;
    int s=getResult(a,b);
    ostringstream oss;
    oss << "a+b=" << s ;
    showLog(oss.str());
    return 0;
}

int getResult(int a,int b)
{
    return a+b;
}

void showLog(string re)
{
    cout<<re<< endl;
}

