#include "TimeLib.h"
#include "LocalTimeLib.h"
#include <stdio.h>

TimeZone localtimezone = {  9*60*60, 0, "+09:00" };

char time_string[50];

void setup() {
  Serial.begin(115200);
  setTime(0);
  TimeElements *tm = localtime();
  sprintf(time_string, "%04d-%02d-%02dT%02d:%02d:%02d%s",
    tm->Year + 1970, tm->Month, tm->Day, tm->Hour, tm->Minute, tm->Second, localtimezone.iso_string);
  Serial.println(time_string);
}

void loop() {
}
