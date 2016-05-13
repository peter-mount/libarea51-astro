#include <stdlib.h>
#include <sys/types.h>
#include <math.h>
#include <time.h>
#include "area51/astro/time.h"

double astro_julian_0h( double jd) {
    return floor(jd-0.5)+0.5;
}
