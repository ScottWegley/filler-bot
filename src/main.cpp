#include <iostream>
#include "PlayerManager.h"
#include <curses.h>

int main()
{
    initscr(); // Start curses mode
    noecho();  // Don't echo any keypresses
    cbreak();  // Disable line buffering, pass on everything

    printw("Game Pigeon Filler Bot\n");
    printw("-------------------------\n");

    int choice;

    do
    {
        printw("1. Play a Game\n");
        printw("2. Debug Mode\n");
        printw("3. Exit\n");
        printw("Please select an option: ");
        refresh(); // Print it on the real screen

        choice = getch() - '0'; // Read the input

        switch (choice)
        {
        case 1:
            clear(); // Clear the screen
            printw("Option 1 selected.\n");
            // Implement option 1 functionality here
            break;
        case 2:
            clear(); // Clear the screen
            printw("Option 2 selected.\n");
            // Implement option 2 functionality here
            break;
        case 3:
            clear(); // Clear the screen
            printw("Exiting program.\n");
            break;
        default:
            clear(); // Clear the screen
            printw("Invalid option selected. Please try again.\n");
        }
        refresh(); // Print it on the real screen
    } while (choice != 3);

    endwin(); // End curses mode

    return 0;
}