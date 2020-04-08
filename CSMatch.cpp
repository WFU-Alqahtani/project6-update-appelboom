#include "CSMatch.h"


int CSMatch::getId() const
{
return id;
}

void CSMatch::setId(int value)
{
id = value;
}

std::string CSMatch::getMap() const
{
return map;
}

void CSMatch::setMap(std::string value)
{
map = value;
}

int CSMatch::getRound() const
{
return round;
}

void CSMatch::setRound(int value)
{
round = value;
}

double CSMatch::getSeconds() const
{
return seconds;
}

void CSMatch::setSeconds(double value)
{
seconds = value;
}

std::string CSMatch::getAttack_side() const
{
return attack_side;
}

void CSMatch::setAttack_side(std::string value)
{
attack_side = value;
}

std::string CSMatch::getVictory_side() const
{
return victory_side;
}

void CSMatch::setVictory_side(std::string value)
{
victory_side = value;
}

int CSMatch::getHp_damage() const
{
return hp_damage;
}

void CSMatch::setHp_damage(int value)
{
hp_damage = value;
}

int CSMatch::getArm_damage() const
{
return arm_damage;
}

void CSMatch::setArm_damage(int value)
{
arm_damage = value;
}

std::string CSMatch::getWeapon() const
{
return weapon;
}

void CSMatch::setWeapon(std::string value)
{
weapon = value;
}

std::string CSMatch::getWeapon_type() const
{
return weapon_type;
}

void CSMatch::setWeapon_type(std::string value)
{
weapon_type = value;
}

int CSMatch::getAward() const
{
return award;
}

void CSMatch::setAward(int value)
{
award = value;
}

bool CSMatch::operator <(CSMatch object) {
    //Order by id
    return (this->getId() < object.getId());
}

bool CSMatch::operator <=(CSMatch object) {
    //Order by id
    return (this->getId() <= object.getId());
}

bool CSMatch::operator >(CSMatch object) {
    //Order by id
    return (this->getId() > object.getId());
}

bool CSMatch::operator ==(CSMatch object) {
    //Order by id
    return (this->getId() == object.getId());
}

std::ostream& operator <<(std::ostream& os, const CSMatch &csMatch){
    os << std::string("Id: ") << std::to_string(csMatch.getId()) << std::string("\n");
    os << std::string("Map: ") << csMatch.getMap() << std::string("\n");
    os << std::string("Round: ") << std::to_string(csMatch.getRound()) << std::string("\n");
    os << std::string("Seconds: ") << std::to_string(csMatch.getSeconds()) << std::string("\n");
    os << std::string("Attacking side: ") << csMatch.getAttack_side() << std::string("\n");
    os << std::string("Victory side: ") << csMatch.getVictory_side() << std::string("\n");
    os << std::string("Hp damage: ") << std::to_string(csMatch.getHp_damage()) << std::string("\n");
    os << std::string("Arm damage: ") << std::to_string(csMatch.getArm_damage()) << std::string("\n");
    os << std::string("Weapon: ") << csMatch.getWeapon() << std::string("\n");
    os << std::string("Weapon type: ") << csMatch.getWeapon_type() << std::string("\n");
    os << std::string("Award: ") << std::to_string(csMatch.getAward()) << std::string("\n");
    return os;
}
