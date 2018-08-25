/*
 * ESP8266 WiFI RGB LED Matrix Settings file.
 * 
 * This file contains settings like wifi credentials and size of the led matrix.
 * 
 * Written by: Amon Benson
 * 
 * Copyright (c) 2018 Amon Benson
 * 
 * This file is part of WiFi-Matrix.
 *
 * WiFi-Matrix is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * WiFi-Matrix is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with WiFi-Matrix. If not, see <http://www.gnu.org/licenses/>.
 */

#define WIFI_SSID                       "AOU-Box-Repeater"
#define WIFI_PSK                        "ty0tSu7px2py"
#define WIFI_HOSTNAME                   "wifimatrix"

#define MATRIX_DATA_PIN                 4
#define MATRIX_BRIGHTNESS               255

#define MATRIX_WIDTH                    12
#define MATRIX_HEIGHT                   12

#define ANIMATION_CHANGE_INTERVAL       15000

#define INITIAL_DELAY                   0
#define MAX_UPLOAD_ANIMATION_FILES      512

#define D_ANIMATIONS                    "/animations"
#define F_WEBINTERFACE                  "/webinterface/index.html"