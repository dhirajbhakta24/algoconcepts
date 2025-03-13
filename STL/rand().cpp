#include <bits/stdc++.h>
using namespace std;
int f(int a , int b){
    srand(time(0));
    return (a + rand()%(b-a+1) );
}

int main()
{
    cout << f(4 , 24) << endl;
    
    return 0;
}