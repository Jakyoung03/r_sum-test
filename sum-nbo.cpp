#include <iostream>
#include <fstream>
#include <cstdint>
#include <arpa/inet.h>

int main(int argc, char *argv[]) {
    if (argc < 2) return std::cerr << "Usage: " << argv[0] << " <file1> [file2...>\n", 1;

    uint32_t sum = 0, num;
    for (int i = 1; i < argc; i++) {
        std::ifstream file(argv[i], std::ios::binary);
        if (!file || !file.read(reinterpret_cast<char*>(&num), sizeof(num)))
            return std::cerr << "Error: " << argv[i] << "\n", 1;

        sum += ntohl(num);
    }
    std::cout << sum << " (0x" << std::hex << sum << ")\n";
}

