#include "LocalTimeLib.h"
#include "TimeLib.h"

extern TimeZone localtimezone;
TimeElements tm;

TimeElements* localtime(time_t t, TimeZone &tz) {
  breakTime(t + tz.tt_gmtoff, tm);
  return &tm;
}

TimeElements* localtime(time_t t) {
  return localtime(t, localtimezone);
}

TimeElements* localtime(void) {
  return localtime(now());
}
