/*A linked list is like a ordered tree in which 
all nodes have degree 2 except the first and the last node
which have degree 1*/

/*elements are contiguous and there are detriments to 
using arrays; such as insertion of an element in the middle of 
an array take O(n) time, you need to shift all elements proceeding the
changed element and insert the element. This is done to preserve the 
property of contiguous arrays. 

Insertion of elements in LLs take O(1) time as we just need to change the address 
of the preceeding node and the inserted node.
*/

/*
Iteration only requires reference to the start node for 
traversal.
*/

#include <iostream>
#include <list>
using namespace std;

int main(){
    list <int> a;
    list <int> :: iterator it;

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    //iteration of lists 
    //without using iterators
    for(auto i : a)
        cout << i;
    
    //always use iterators for traversing lists

    //using iterators
    for(it = a.begin(); it != a.end(); it++)
        cout << " " << *it;
    return 0;
}