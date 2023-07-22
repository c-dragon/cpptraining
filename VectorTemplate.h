//
// Created by CorneliaCFranke on 22.07.2023.
//

#ifndef KLAUSURTRAINING_VECTORTEMPLATE_H
#define KLAUSURTRAINING_VECTORTEMPLATE_H

#include <vector>

template<typename T>
T vector_sum(const std::vector<T>& vec) {
    T sum  = 0.0;
    for (const T& element : vec) {
        sum += element;
    }
    return sum;
}

#endif //KLAUSURTRAINING_VECTORTEMPLATE_H
