#pragma once

#include <cmath>
#include <cstdlib>
#include <limits>
#include <memory>
#include <string>

using std::shared_ptr;
using std::make_shared;
using std::sqrt;

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

inline double degrees_to_radians(double degrees) 
{
	return degrees * pi / 180;
}

inline double random_double() 
{
	return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) 
{
	return min + (max - min) * random_double();
}

#include "ray.h"
#include "vec3.h"