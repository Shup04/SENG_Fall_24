#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main() {
    std::ifstream file("STAFF01.json");
    if (!file) {
        std::cerr << "Unable to open the JSON file!" << std::endl;
        return 1;
    }

    json staffData;
    file >> staffData;

    for (const auto& record : staffData) {
        for (auto it = record.begin(); it != record.end(); ++it) {
            std::cout << it.key() << ": " << it.value() << std::endl;
        }
        std::cout << "------------" << std::endl;
    }

    return 0;
}
