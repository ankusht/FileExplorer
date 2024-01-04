#include <string.h>

class File {
    private:
        int size;

    public:
        void copy();
        void move(std::string move_to_directory);
        void deleteFile();
};