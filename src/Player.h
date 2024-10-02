#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
public:
    virtual ~Player() {} // Virtual destructor

    virtual std::string getName() const = 0;        // Pure virtual function for getting the player's name
    virtual std::string getDescription() const = 0; // Pure virtual function for getting the player's description
};

#endif // PLAYER_H