#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <iostream>
#include <limits>
#include <memory>

// C++ Std usings

using std::shared_ptr;
using std::make_shared;

// Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility functions

inline double degrees_to_radians(const double& degrees)
{
	return degrees * pi / 180.0;
}

// Common headers

#include "color.h"
#include "interval.h"
#include "ray.h"
#include "vec3.h"

#endif
