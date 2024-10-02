#ifndef PLAYER_MANAGER_H
#define PLAYER_MANAGER_H

#include <vector>
#include <memory>   // For std::shared_ptr
#include "Player.h" // Include the Player class definition

class PlayerManager
{
public:
    // Delete the copy constructor and the assignment operator
    // to ensure the class cannot be copied.
    PlayerManager(const PlayerManager &) = delete;
    PlayerManager &operator=(const PlayerManager &) = delete;

    // Public static method to access the instance
    static PlayerManager &getInstance()
    {
        static PlayerManager instance; // Guaranteed to be destroyed and instantiated on first use.
        return instance;
    }

    // Function to get player options
    const std::vector<std::shared_ptr<Player>> &getPlayerOptions() const
    {
        return playerOptions;
    }
    // Other public member functions can go here

private:
    PlayerManager() {}  // Private Constructor
    ~PlayerManager() {} // Private Destructor

    // Private member to store a list of players
    std::vector<std::shared_ptr<Player>> playerOptions;

    // Private members as needed
};

#endif // PLAYER_MANAGER_H