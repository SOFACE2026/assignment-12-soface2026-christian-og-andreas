#include "soldier.hpp"
#include "weapon.hpp"

#include <sstream>

Soldier::Soldier(std::string name, Weapon *weapon) : weapon(weapon), name(name)
{
}

void Soldier::shootAt(Unit &unit)
{
}

void Soldier::takeHit(Projectile &projectile)
{
}