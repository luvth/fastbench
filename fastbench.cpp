#include <iostream>
#include <chrono>
#include <string>
#include <cstdlib>

void benchmarkCommand(const std::string& command) {
    std::cout << "Benchmarking: " << command << std::endl;
    auto start = std::chrono::high_resolution_clock::now();
    int retCode = std::system(command.c_str());
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    if (retCode == 0) {
        std::cout << "Execution time: " << duration.count() << " ms" << std::endl;
    } else {
        std::cerr << "Error: The command failed with code " << retCode << std::endl;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <command or file to execute>" << std::endl;
        return 1;
    }

    std::string command;
    for (int i = 1; i < argc; ++i) {
        command += argv[i];
        if (i < argc - 1) command += " ";
    }

    benchmarkCommand(command);

    return 0;
}
