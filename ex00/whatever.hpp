#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename T> class whatever {
    private:
        whatever(){};
        whatever(const whatever &other);
        whatever &operator=(const whatever &other);
        ~whatever() {};

    public:
        static void swap(T &a, T &b) {
            T prev;
            prev = a;
            a = b;
            b = prev;
        } 
        static T min(T a, T b) {
            if (a == b) return b;
            if (a > b) return b;
            return a;
        }
        static T max(T a, T b) {
            if (a == b) return b;
            if (a > b) return a;
            return b;
        }
};

#endif