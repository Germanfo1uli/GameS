#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include "Player.h"
using namespace std;
class Enemy : public Player{
private:
	bool is_angry;
public:
    Enemy();
    void setstatus(bool s);
    bool getStatus() const;
};
#endif


