#include <iostream>
#include <list>
using namespace std;

int main(){
    list <int> a;
    list <int> :: iterator it;

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    int inp = 4;
    bool ans = false;

    for(auto i : a){
        if(i == inp) ans = true;
    }
    cout << ans;

    return 0;
}