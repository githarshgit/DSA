#include <iostream>
#include <vector>

using namespace std;

/**
 * Demonstrates basic usage of std::vector in C++ STL.
 * Documentation:
 * - push_back(val): Adds an element to the end.
 * - size(): Returns the number of elements.
 * - capacity(): Returns the size of the storage space currently allocated.
 * - at(idx) / [idx]: Accesses element at a specific index.
 * - front() / back(): Accesses the first and last elements.
 */
int main() {
    // 1. Dynamic growth using push_back
    vector<int> vec1; 
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);
    vec1.push_back(4);
    vec1.push_back(5);

    cout << "vec1 Size: " << vec1.size() << endl;         // Output: vec1 Size: 5
    cout << "vec1 Capacity: " << vec1.capacity() << endl; // Output: vec1 Capacity: 8 (implementation dependent)
    cout << "vec1[1]: " << vec1[1] << endl;               // Output: vec1[1]: 2
    cout << "vec1.at(2): " << vec1.at(2) << endl;         // Output: vec1.at(2): 3
    cout << "vec1 Front: " << vec1.front() << endl;       // Output: vec1 Front: 1
    cout << "vec1 Back: " << vec1.back() << endl;         // Output: vec1 Back: 5

    // 2. Initialization using list
    vector<int> vec2 = {6, 7, 8, 9, 0};
    cout << "\nvec2 Size: " << vec2.size() << endl;       // Output: vec2 Size: 5
    cout << "vec2 Capacity: " << vec2.capacity() << endl; // Output: vec2 Capacity: 5
    cout << "vec2 Front: " << vec2.front() << endl;       // Output: vec2 Front: 6
    cout << "vec2 Back: " << vec2.back() << endl;         // Output: vec2 Back: 0
    
    // Iterating through the vector using a range-based for loop
    for (int val : vec2) {
        cout << val << " ";
    }

    // 3. Initialization with specific size and default value (size, value)
    vector<int> vec3(10, 0);
    cout << "\nvec3 Size: " << vec3.size() << endl;       // Output: vec3 Size: 10
    cout << "vec3 Capacity: " << vec3.capacity() << endl; // Output: vec3 Capacity: 10
    cout << "vec3 Front: " << vec3.front() << endl;       // Output: vec3 Front: 0
    cout << "vec3 Back: " << vec3.back() << endl;         // Output: vec3 Back: 0
   
    
// erase 
  vector<int> vec4 = {1,2,3,4,5,6,7,8,9,10};

    //erase
    vec4.erase(vec4.begin()+2);//vec4.erase(position)

    //erase in range 
    vec4.erase(vec4.begin()+4,vec4.begin()+7); //vec4.erase(start,end)

    for(int i: vec4){
        cout<<i<<" ";
    }



    return 0;
}




