#pragma once

#include "figure.h"

class Parallelepiped : public virtual Figure {
public:
    Parallelepiped(int length, int width, int height);

    double square() override;

    static Figure* read(FILE* file);

    void print(FILE* file) override;

private:
    int length;
    int width;
    int height;
};