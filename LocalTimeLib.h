#pragma once

#include "TimeLib.h"

extern "C++" {

typedef struct ttinfo {
  long   tt_gmtoff;
  int8_t tt_isdst; // unused
  // unsigned int tt_abbrind;
  char iso_string[7]; // "+09:00"
} TimeZone;

TimeElements* localtime(void);
TimeElements* localtime(time_t t);
TimeElements* localtime(time_t t, TimeZone *tz);

}
