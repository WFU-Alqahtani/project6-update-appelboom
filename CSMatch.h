#ifndef CS_MATCH_H
#define CS_MATCH_H

//Dataset available at https://www.kaggle.com/skihikingkevin/csgo-matchmaking-damage/version/1#mm_master_demos.csv
//Each CSMatch contains the data of a Counter Strike match (really famous online game)
#include <stdlib.h>
#include <string>

class CSMatch {

public:
    // Node constructor
    CSMatch()
    {
    }

    CSMatch(int id, std::string map, int round, double seconds, std::string attack_side,
            std::string victory_side, int hp_damage, int arm_damage, std::string weapon, std::string weapon_type, int award)
    {
        this->id = id;
        this->map = map;
        this->round = round;
        this->seconds = seconds;
        this->attack_side = attack_side;
        this->victory_side = victory_side;
        this->hp_damage = hp_damage;
        this->arm_damage = arm_damage;
        this->weapon = weapon;
        this->weapon_type = weapon_type;
        this->award = award;
    }

    //Destructor
    ~CSMatch(){
    }

    int getId() const;
    void setId(int value);

    std::string getMap() const;
    void setMap(std::string value);

    int getRound() const;
    void setRound(int value);

    double getSeconds() const;
    void setSeconds(double value);

    std::string getAttack_side() const;
    void setAttack_side(std::string value);

    std::string getVictory_side() const;
    void setVictory_side(std::string value);

    int getHp_damage() const;
    void setHp_damage(int value);

    int getArm_damage() const;
    void setArm_damage(int value);

    std::string getWeapon() const;
    void setWeapon(std::string value);

    std::string getWeapon_type() const;
    void setWeapon_type(std::string value);

    int getAward() const;
    void setAward(int value);

    bool operator <(CSMatch object);
    bool operator <=(CSMatch object);
    bool operator >(CSMatch object);
    bool operator ==(CSMatch object);

    friend std::ostream& operator<<(std::ostream& os, const CSMatch &csMatch);

private:
    int id;
    std::string map;
    int round;
    double seconds;
    std::string attack_side;
    std::string victory_side;
    int hp_damage;
    int arm_damage;
    std::string weapon;
    std::string weapon_type;
    int award;

};

#endif //CS_MATCH_H

