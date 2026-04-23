#include "revolver.hpp"

Revolver::Revolver() : projectile(1)
{
}

Projectile &Revolver::get_projectile()
{
    return this->projectile;
}