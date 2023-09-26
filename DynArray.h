#ifndef dyn_array_h
#define dyn_array_h

template <class T> class DynArray {
public:
  DynArray( int capacity );
  ~DynArray();
 
  int size() const;
  T& push_back( const T& elt );
  T& operator[]( int index ) ;
  const T& operator[]( int index ) const;
private:
  void grow();
  int capacity_;
  int size_;
  T* items_;
};
#include "DynArray.hpp"
#endif

