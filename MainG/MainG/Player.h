#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;
class Player
{private:
	string name;
	int health;
	int damage;
	int status;
    int energy;
	int innuice;
public:
    Player();

    void setName(const string& n);
    string getName() const;

    void setHealth(int h);
    int getHealth() const;

    void setDamage(int d);
    int getDamage() const;

    void setStatus(int s);
    int getStatus() const;//а тут покумекать надо

    void setInnuice(int d);
    int getInnuice() const;

    void setEnergy(int e);
    int getEnergy() const;
};
class MainHero : public Player {

};
#endif
