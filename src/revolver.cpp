#include "revolver.hpp"

Revolver::Revolver() : projectile(0)
{
}

Projectile &Revolver::get_projectile()
{
    return this->projectile;
}