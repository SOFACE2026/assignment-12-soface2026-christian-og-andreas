#include "revolver.hpp"

Revolver::Revolver() : projectile(1) //changed so revolver does damage
{
}

Projectile &Revolver::get_projectile()
{
    return this->projectile;
}