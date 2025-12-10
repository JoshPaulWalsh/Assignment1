#include "ordered_array.hpp"

ordered_array::ordered_array(int cap)
    : max_capacity(cap)
{
    arr.reserve(cap);
}

int ordered_array::size(){
    return arr.size();
}

int ordered_array::capacity() {
    return max_capacity;
}

void ordered_array::insert(int val){
    if(arr.size() == max_capacity){
        std::cout << "The ordered array's capacity is full";
        return;
    }
      
    for(int i = 0; i < arr.size(); i++){
        if(val < arr[i]){
        arr.insert(arr.begin() + i, val);
        return;
        }
    }
    arr.push_back(val);
}

void ordered_array::remove(int val){
    for(int i = 0; i < arr.size(); i++){
        if(val == arr[i]){
            arr.erase(arr.begin() + i);
            return;
        }
    }
}

bool ordered_array::exists(int val){
  for(int i = 0; i < arr.size(); i++){
     if(val == arr[i]){
        return true;
     }
  }
  return false;
}

int& ordered_array::at(int i){
  if(i < 0 || i >= arr.size()){
     throw std::out_of_range("Index out of range");
  }
  return arr[i];
}

int main(){
    using namespace std;
    ordered_array arr(10); // Capacity 10, Size 0

    cout << arr.size() << endl; // Should print 0

    arr.insert(3);
    arr.insert(2);
    arr.insert(1);

    cout << arr.size() << endl; // Should print 3

    // This should print 1, 2, 3
    for(int i = 0; i < arr.size(); ++i)
        cout << arr.at(i) << ", ";
}
