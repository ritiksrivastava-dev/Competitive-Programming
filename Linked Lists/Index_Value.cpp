#include <iostream>
#include <list>
using namespace std;

int main(){
    list <int> a;
    list <int> :: iterator it;

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    int inp = 3;
    int cnt = 0;

    for(auto i : a){
        if(i == inp) cout << cnt;
        cnt++;
    }

    return 0;
}