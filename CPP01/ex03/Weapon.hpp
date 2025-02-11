#ifndef WEAPON_H
#define WEAPON_H

class Weapon
{
private:
    std::string _type;
public:
    Weapon(std:string type);

    void setType(std::string type);
    const std::string &getType() const;
};



#endif