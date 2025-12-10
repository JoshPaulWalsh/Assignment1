#pragma once
#include <vector>
#include <iostream>

class ordered_array {
  public:
    /* constructor
       Construct a new arr with the given capacity (maximum size).
       The size of a new arr should be 0.
    */
   ordered_array(int cap);
   
   /* size()
       Returns the number of elements in the array.
    */
   int size();   

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


    /* remove(e)
       Remove e from the array, if it exists. (If it does not exist, the
       array should be unchanged.) If multiple copies of e are present, only
       one should be removed.

       If e = -2147483648 then this does nothing.
    */
    void remove(int elem);

    /* exists(e)
       Returns true if e is present at least once in the array.

       If e == -2147483648 then this returns false.
    */
    bool exists(int elem);

    /* at(i)
       Returns a *reference* to the element at index i. If i < 0 or i >= size(),
       then the function should throw a std::out_of_range exception (this is the
       same exception that std::vector::at would throw in this situation).

       Note that at() should *never* return -2147483648.
    */
    int& at(int i);

  private:
   std::vector<int> arr;
   int max_capacity;
};