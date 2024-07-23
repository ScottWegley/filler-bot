#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
    virtual ~Player() {} // Virtual destructor

    // Example of a pure virtual function
    virtual void play() = 0;

    // Add more pure virtual functions as needed
};

#endif // PLAYER_H