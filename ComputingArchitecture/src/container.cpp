#include "container.h"

Container::Container() = default;

Container::~Container() = default;

void Container::addFigure(Figure* figure) {
    figures[currentSize] = figure;
    currentSize++;
}

Figure* Container::getFigureAt(int position) const {
    return figures[position];
}

void Container::sort() {
    for (int i = 1; i < currentSize; i++) {
        int j = i;
        while (j > 0 && figures[j]->square() < figures[j - 1]->square()) {
            std::swap(figures[j], figures[j - 1]);
            j--;
        }
    }
}

int Container::size() const {
    return currentSize;
}