using namespace std;
#include <iostream>
#include <vector>
#pragma once

class ordered_array {
  public:
    /* constructor
       Construct a new data with the given capacity (maximum size).
       The size of a new data should be 0.
    */
   
   vector<int> data;

   int size(int);   

   int size(){
      return data.size();
   }

   /* capacity()
       Returns the maximum size of the array.
    */

   int capacity();

    /* insert(e)
       Insert e into the array. Note that it is OK to insert duplicates; if n 
       copies of a value are inserted into the array then n copies should appear
       in the array.

       If size() == capacity() then this does nothing.

       If e == -2147483648 then this does nothing (i.e., -2147483648 is not a
       valid value to insert).
    */
   void insert(int val);

   void insert(int val){
      if(data.size() == data.capacity()){
         cout << "The ordered array's capacity is full";
         return;
      }
      
      for(int i = 0; i < data.size(); i++){
         if(val < data[i]){
            data.insert(data.begin() + i, val);
            return;
         }
      }
    }

    /* remove(e)
       Remove e from the array, if it exists. (If it does not exist, the
       array should be unchanged.) If multiple copies of e are present, only
       one should be removed.

       If e = -2147483648 then this does nothing.
    */
    void remove(int elem);

    void remove(int val){
      for(int i = 0; i < data.size(); i++){
         if(val == data[i]){
            data.erase(data.begin() + i);
         }
      }
    }

    /* exists(e)
       Returns true if e is present at least once in the array.

       If e == -2147483648 then this returns false.
    */
    bool exists(int elem);

    bool exists(int val){
      for(int i = 0; i < data.size(); i++){
         if(val == data[i]){
            return true;
         }
      }
      return false;
    }

    /* at(i)
       Returns a *reference* to the element at index i. If i < 0 or i >= size(),
       then the function should throw a std::out_of_range exception (this is the
       same exception that std::vector::at would throw in this situation).

       Note that at() should *never* return -2147483648.
    */
    int& at(int i);

  private:

    // Add private members as needed
};