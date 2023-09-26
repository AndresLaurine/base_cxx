#include <assert.h>

template <class T> DynArray<T>::DynArray(int size):
	capacity_( (size > 0 ) ? size : 1),
	size_(size)
{ 
	items_ = new T[capacity_];
	assert( size > -1);
}
template <class T> DynArray<T>::~DynArray(){
	delete[] items_;
}

template <class T> T& DynArray<T>::push_back(const T& elt ) {
	if (size_ == capacity_) {
		grow();
	}
	items_[size_] = elt;
	size_ +=1;
	return items_[size_-1];
}

template <class T> int DynArray<T>::size() const{
	return size_;
}

template <class T> void DynArray<T>::grow(){
	capacity_ *= 2;
        T* n_items = new T[capacity_];
        for (int i = 0 ; i < size_-1; ++i){
                n_items[i] = items_[i];
        }
        delete[] items_;
        items_ = n_items;    
}

template <class T> T& DynArray<T>::operator[] (int index) {
	assert ( index < size_ && index >= 0);
	return items_[index];
}

template <class T> const T& DynArray<T>::operator[] (int index) const {
        assert( index < size_ && index >= 0);
        return items_[index];
}
