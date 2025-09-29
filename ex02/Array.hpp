#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>
class Array {
    private:
        T *_data;
        unsigned int _size;

    public:
        Array() : _data(NULL), _size(0) {}
        Array(unsigned int size) : _data(new T[size]()), _size(size) {}
        Array(const Array &other) {
            _size = other._size;
            _data = new T[_size]();
            for (unsigned int i = 0; i < _size; i++) {
                _data[i] = other._data[i];
            }
        }
        Array &operator=(const Array &other) {
            if (this != &other) {
                _size = other._size;
                delete[] _data;                
                if (_size > 0) {
                    _data = new T[_size]();
                    for (unsigned int i = 0; i < _size; i++) {
                        _data[i] = other._data[i];
                    }
                } else {
                    _data = NULL;
                }
            }
            return *this;
        }
        ~Array(){
            delete[] _data;
        }
        T& operator[](unsigned int idx) {
            if (idx >= _size)
                throw std::out_of_range("Index is out of bounds.");
            return _data[idx];
        }
        const T& operator[](unsigned int idx) const {
            if (idx >= _size)
                throw std::out_of_range("Index is out of bounds.");
            return _data[idx];
        }
};

#endif