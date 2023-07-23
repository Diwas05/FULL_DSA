#include <iostream>
#include <cstdlib>

int main() {
    int choice;
    while (true) {
        std::cout << "Choose an option: " << std::endl;
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "You chose option 1." << std::endl;
                break;
            case 2:
                std::cout << "You chose option 2." << std::endl;
                break;
            case 3:
                std::cout << "Exiting program..." << std::endl;
                exit(0);
            default:
                std::cout << "Invalid option." << std::endl;
                break;
        }
    }
    return 0;
}