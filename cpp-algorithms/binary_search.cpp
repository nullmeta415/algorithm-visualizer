#include <iostream>
#include <vector>

int binarySearch(std::vector<int> &v, int key){

    if(v.empty()) 
        return -2;
    
    int start = 0, end = v.size()-1;
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start)/2;  // To avoid overflow

        if(key == v[mid]){
            ans = mid;
            return ans;
        } else if(key < v[mid]){
            end = mid - 1;
        } else {    // key > v[mid]
            start = mid + 1;
        }
    }

    return ans;

}

int main(){

    // Taking the size of the array
    int n;
    std::cin >> n;

    // Declaring and resizing the array
    std::vector<int> arr(n);    // alternative
    // arr.resize(n,0);

    // Inserting elements in the array
    for(int i=0; i<n; i++){
        std::cin >> arr[i];
    }

    // Accepting the key element to find in the array
    int target;
    std::cin >> target;

    // Getting the result after search processing
    int res = binarySearch(arr, target);
    if(res!=-1) std::cout << "Found at index " << res << std::endl;
    else if(res==-2) std::cout << "No elements to search" << std::endl;
    else std::cout << "Not found" << std::endl;

    return 0;
}