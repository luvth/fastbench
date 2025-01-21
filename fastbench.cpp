#include <iostream>
#include <chrono>
#include <string>
#include <cstdlib>

using namespace std;

void benchmarkCommand(const string& command) {
    cout << "Benchmarking: " << command << endl;
    auto start = chrono::high_resolution_clock::now();
    int retCode = system(command.c_str());
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);

    if (retCode == 0) {
        cout << "Execution time: " << duration.count() << " ms" << endl;
    } else {
        cerr << "Error: The command failed with code " << retCode << endl;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <command or file to execute>" << endl;
        return 1;
    }

    string command = argv[1];
    for (int i = 2; i < argc; ++i) {
        command += " ";
        command += argv[i];
    }

    benchmarkCommand(command);

    return 0;
}
