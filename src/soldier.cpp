#include "soldier.hpp"
#include "weapon.hpp"

#include <sstream>

Soldier::Soldier(std::string name, Weapon *weapon) : weapon(weapon), name(name)
{
}

void Soldier::shootAt(Unit &unit)
{
    
    this->weapon->shootAt(unit);//make the weapon shoot at a unit
}

void Soldier::takeHit(Projectile &projectile)
{
    UnitEvent event;
    std::string out;
    //format the string so it matches expected behavior
    out.append(name);
    out.append(" got hit for ");
    out.append(std::to_string(projectile.damage));
    out.append(" damage");

    event.message =out;
    Subject::notify(event);
}