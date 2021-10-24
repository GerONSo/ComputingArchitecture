#include "FileUtils.h"

std::string FileUtils::readString(FILE* file) {
    char result[20];
    fscanf(file, "%s", result);
    return result;
}

int FileUtils::readInt(FILE* file) {
    int result;
    fscanf(file, "%d", &result);
    return result;
}