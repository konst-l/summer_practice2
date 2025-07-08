#include <iostream>
#include <regex>
#include <string>
#include <fstream>
#include <vector>

using namespace std;


void process_line(const string& s, ofstream& output_file) {
    regex zp(R"([\-\']{2,}|[^a-zA-Z0-9\'\-\"])")
    string r2 = regex_replace(s,
    zp,
    " ");
}

int main()  
{
    setlocale(LC_ALL, "rus");
    ifstream input_file("input.txt");
    if (!input_file.is_open()) {
        cerr << "Не удалось открыть файл input.txt" << endl;
        return 1;
    }

    ofstream output_file("output.txt");
    if (!output_file.is_open()) {
        cerr << "Не удалось создать output.txt" << endl;
        return 1;
    }

    vector<string> lines;
    string line;
    while (getline(input_file, line)) {
        lines.push_back(line);
    }
    input_file.close();

    for (auto v : lines) {
        process_line(v, output_file);
    }
    output_file.close();

    return 0;
}