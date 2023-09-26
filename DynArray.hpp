template <class T> DynArray<T>::DynArray(int size):
	capacity_(size *2),size_ = size;
{ 
	items_ = new T[capacity_];
}
template <class T> DynArray<T>::~DynArray(){
	delete[] items_;
}

template <class T> DynArray<T>::push_back(const T& elt ) {
	size_ +=1;
	if (size_ < capacity_) {
		items_[size-1] = elt;
	}
	else {
		capacity_ *= 2;
		n_items = new T[capacity_];
		for (int i = 0 ; i < size_-1; ++i){
			n_items[i] = items_[i];
		}
		delete[] items_;
		items_ = n_items;
	}
	return *this;
}
