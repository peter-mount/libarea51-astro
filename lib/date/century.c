#include <stdlib.h>
#include <sys/types.h>
#include <math.h>
#include <time.h>
#include "area51/astro/time.h"

double astro_julian_century(double jd) {
    return (jd - JD_2000_D) / DAYS_CENTURY_D;
}

