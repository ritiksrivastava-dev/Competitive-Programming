
#include <iostream>
#include <list>
using namespace std;

int main(){
    list <int> a;
    list <int> :: iterator it;

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    int sum = 0;
    for(auto i : a)
        sum += i;
    cout << sum;
    
    return 0;
}