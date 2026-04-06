#include<iostream>
#include<vector>
using namespace std;
//Functions of vector class
/*
-push_back(element) :append element
-emplace_back : does same work as Push_back(val) but doesn't copy,{research about it more}
-pop_back()  :removes last element
-empty() : returns true if empty
-at(index) :checks if index exist, if exist return index value else throws error(safe and slow)
-Arr_name[index] :return value at given index,doesn't check if index exist(fast but error-prone)
-front(): return very first element
-back(): returns last element
-insert(iterator,value) :insert value at given position
-erase(iterator) :removes value from given position (slow as O(n^2))
-clear() :removes all element not memory.
-size() :returns how many elements in vector
-capacity() :returns how many elements vector can hold before it needs to reallocate memory.
-reserve(n) :pre-allocate memory for n elements
-shrink_to_fit() :reduce capacity to match the current size by freeing up the unused memory.
FOR ITERATOR
-begin() :iterator begins from start of vector
-end() :iterator ends at last of vector
-rbegin() : iterator begins from last of vector
-rend() : iterator ends at last of vector
//ALGORITHMS    include header [ #include<algorithm> ] to access these func
-sort(begin(),end())   : will sort elements from begin to end (increasing order)
-sort(rbegin(),rend()) or sort(begin(),end(),greater<int>()) : sort in decreasing order
- *max_element(begin(),end()) : for finding max element
- *min_element(begin(),end()) : for finding min element
*/
int main()
{
    vector<int> A={2,3,4,5};
    vector<int> B;
    A.pop_back();
    A.push_back(22);
    vector<int>::iterator itr; //instead of this declaration u can simply use but initialization is must[ auto itr=A.begin();]
    for(auto itr=A.begin();itr!=A.end();++itr) //better to use auto so if you change datatype or vector to any other container it will adapt
    {
        cout<<*itr<<" ";
    }
    
    B.emplace_back(30);
    for(int x:B)
    {
        cout<<x<<" ";
    }
//Understanding capacity vs size
    vector<int> C;
    C.push_back(1);
    cout << "Size: " << C.size() << " Capacity: " << C.capacity() << endl; 
    // Size is 1, Capacity might be 1

    C.reserve(100); 
    cout << "After reserve - Capacity: " << C.capacity() << endl;
    // Capacity is now 100, but Size is still 1. 
    // No memory reallocations will happen for the next 99 additions!

    C.shrink_to_fit();
    cout << "After shrink - Capacity: " << C.capacity() << endl;
    // Capacity is now back to 1. Memory is saved.

//enhancing insert() and erase() : better to use as given below

    vector<int> D = {2, 3, 4, 5};

    // To insert '99' at the 2nd position (index 1)
    D.insert(D.begin() + 1, 99); 
    // Result: {2, 99, 3, 4, 5}

    // To erase the 3rd element
    D.erase(D.begin() + 2); 
    // Result: {2, 99, 4, 5}
    return 0;
}