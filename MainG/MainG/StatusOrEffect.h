#ifndef STATUSOREFFECT_H
#define STATUSOREFFECT_H
#include <string>
using namespace std;

class StatusOrEffect
{private:
	string nameEffect;
	int time;
	int damage_on_player;
	int Slowing_down;
public:
	StatusOrEffect();

	void setNameEffect(const string& ne);
	string getNameEffect() const;

	void setTime(int t);
	int getTime() const;

	void setDamageOnPlayer(int dp);
	int getDamageOnPlayer() const;

	void setSlowingdown(int sd);
	int getSlowingdown() const;

};

class FireEffect : StatusOrEffect {
private:
	bool is_active;
public:
	void setstatus(bool s);
	bool getStatus() const;
};

class FreezingEffect : StatusOrEffect {
private:
	bool is_active;
public:
	void setstatus(bool s);
	bool getStatus() const;
};

class PoisonEffect : StatusOrEffect {
private:
	bool is_active;
public:
	void setstatus(bool s);
	bool getStatus() const;
};

class StunEffect : StatusOrEffect {
private:
	bool is_active;
public:
	void setstatus(bool s);
	bool getStatus() const;
};
#endif

