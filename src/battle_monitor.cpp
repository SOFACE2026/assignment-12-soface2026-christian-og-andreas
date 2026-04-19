#include <iostream>
#include "battle_monitor.hpp"

void BattleMonitor::do_update(void *event)
{
    UnitEvent *e = static_cast<UnitEvent *>(event);
    std::cout << e->message << std::endl;
}