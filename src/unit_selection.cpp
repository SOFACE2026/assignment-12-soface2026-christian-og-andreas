#include "unit_selection.hpp"
#include "weapon.hpp"

void UnitSelection::addToSelection(Unit &unit)
{
    this->selected.push_back(&unit);
}

void UnitSelection::shootAt(Unit &unit)
{
    for (auto &u : this->selected)
    {
        u->shootAt(unit);
    }
}

void UnitSelection::takeHit(Projectile &Projectile)
{
    for (auto &u : this->selected)
    u->takeHit(Projectile);
    {
    }
}
