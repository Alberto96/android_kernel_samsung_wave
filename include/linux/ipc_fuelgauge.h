/*
 *  Copyright (C) 2009 Dominik Marszk <dmarszk@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __IPC_FUELGAUGE_H_
#define __IPC_FUELGAUGE_H_

struct ipc_fuelgauge_platform_data {
	int (*battery_online)(void);
	int (*charger_online)(void);
	int (*charger_enable)(void);
	int (*power_supply_register)(struct device *parent,
		struct power_supply *psy);
	void (*power_supply_unregister)(struct power_supply *psy);
};

#endif
