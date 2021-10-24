#include "Parallelepiped.h"
#include "utils/FileUtils.h"

Parallelepiped::Parallelepiped(int length, int width, int height) : 
        length(length),
        width(width),
        height(height) {}

double Parallelepiped::square() {
    return 2 * (length * width + length * height + width * height);
}

Figure* Parallelepiped::read(FILE* file) {
    int length = FileUtils::readInt(file);
    int width = FileUtils::readInt(file);
    int height = FileUtils::readInt(file);
    return new Parallelepiped(length, width, height);
}

void Parallelepiped::print(FILE* file) {
    fprintf(file, "Parallelepiped {\n\tlength: %d,\n\twidth: %d,\n\theight: %d,\n\tsquare(): %f\n}\n", length, width, height, square());
}