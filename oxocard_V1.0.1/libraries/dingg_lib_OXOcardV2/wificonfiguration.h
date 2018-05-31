#ifndef _LIB_WIFICONFIGURATION_H_
#define _LIB_WIFICONFIGURATION_H_
/*
 * \license LGPL-V2.1
 * Copyright (c) 2017 OXON AG. All rights reserved.
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see 'http://www.gnu.org/licenses/'
 */

#include <stdint.h>
#include "wireless.h"

/**
 * Description of the class
 */
class WifiConfiguration{

	public:
		char ssid[Wireless::SSID_MAX_LENGTH+1] = {0};
		char password[Wireless::PASSWORD_MAX_LENGTH+1] = {0};

	protected:

	private:

};

#endif