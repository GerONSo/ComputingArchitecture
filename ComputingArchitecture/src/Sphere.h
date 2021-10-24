#pragma once

#include "figure.h"

class Sphere : public virtual Figure {
public:
    Sphere(int radius);

    double square() override;

    static Figure* read(FILE* file);

    void print(FILE* file) override;

private:
    int radius;
};