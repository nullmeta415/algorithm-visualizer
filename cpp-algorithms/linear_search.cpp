#include <iostream>
#include <vector>

#define T int

// typedef std::vector<T> vt;
using vt = std::vector<int>;

// Logic of linear search algorithm
int linear_search(vt &v, int key){

    for(int i=0; i<v.size(); i++){
        if(v[i]==key) return i;
    }

    return -1;
}

int main(){
    // Declaring the array and the number of elements of the array
    vt arr;
    int n;
    
    // Value to find in the array
    int key;

    // Taking value of `n`
    std::cin >> n;

    // Resizing the array upto `n`
    arr.resize(n, 0);

    // Inserting elements in the array
    for(int i=0; i<n; i++){
        std::cin >> arr[i];
    }

    // Taking value of `key`
    std::cin >> key;

    // True if the key is found in array
    bool result = linear_search(arr, key);

    // Display the result
    if(result != -1) std::cout << "Found at index " << result << std::endl;
    else std::cout << "NOT found!" << std::endl;

    return 0;

}