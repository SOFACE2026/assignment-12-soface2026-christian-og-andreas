#include "unit_selection.hpp"
#include "weapon.hpp"

void UnitSelection::addToSelection(Unit &unit)
{
    //when selected push it back into the selected units vector
    this->selected.push_back(&unit);
}

void UnitSelection::shootAt(Unit &unit)
{
    for (auto &u : this->selected)
    {
        //for every unit selected shoot at target unit
        u->shootAt(unit);
    }
}

void UnitSelection::takeHit(Projectile &Projectile)
{
    for (auto &u : this->selected)
    //for every unit selected take a hit from the projectile
    u->takeHit(Projectile);
    {
    }
}
