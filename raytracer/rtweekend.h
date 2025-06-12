#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <cstdlib>
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

inline double random_double()
{
	// Returns a random real in [0, 1)
	return std::rand() / (RAND_MAX + 1.0);
}

inline double random_double(const double& min, const double& max)
{
	// Returns a random real in [min, max)
	return min + (max - min) * random_double();
}

// Common headers

#include "color.h"
#include "interval.h"
#include "ray.h"
#include "vec3.h"

#endif
