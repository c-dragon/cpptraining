//
// Created by CorneliaCFranke on 22.07.2023.
//

#ifndef KLAUSURTRAINING_FUNCTORTEMPLATE_H
#define KLAUSURTRAINING_FUNCTORTEMPLATE_H

#include <vector>

template<typename T, typename Predicate>
unsigned int count(const std::vector<T>& vec, const Predicate& predicate) {
    unsigned int count = 0;
    for (const T& element : vec) {
        if (predicate(element)) {
            count++;
        }
    }
    return count;
}

#endif //KLAUSURTRAINING_FUNCTORTEMPLATE_H
