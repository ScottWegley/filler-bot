#include <iostream>
int main()
{
    std::cout << "Game Pigeon Filler Bot\n";
    std::cout << "-------------------------\n";

    int choice;

    do
    {
        std::cout << "1. Play a Game\n";
        std::cout << "2. Debug Mode\n";
        std::cout << "3. Exit\n";
        std::cout << "Please select an option: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "Option 1 selected.\n";
            // Implement option 1 functionality here
            break;
        case 2:
            std::cout << "Option 2 selected.\n";
            // Implement option 2 functionality here
            break;
        case 3:
            std::cout << "Exiting program.\n";
            return 0;
            break;
        default:
            std::cout << "Invalid option selected. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}