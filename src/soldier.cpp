#include "soldier.hpp"
#include "weapon.hpp"

#include <sstream>

Soldier::Soldier(std::string name, Weapon *weapon) : weapon(weapon), name(name)
{
}

void Soldier::shootAt(Unit &unit)
{
    
    this->weapon->shootAt(unit);
}

void Soldier::takeHit(Projectile &projectile)
{
    UnitEvent event;
    std::string out;
    out.append(name);
    out.append(" got hit for ");
    out.append(std::to_string(projectile.damage));
    out.append(" damage");

    event.message =out;
    Subject::notify(event);
}