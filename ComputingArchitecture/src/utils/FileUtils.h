#include <string>

class FileUtils {
public:
    static std::string readString(FILE* file);

    static int readInt(FILE* file);
};