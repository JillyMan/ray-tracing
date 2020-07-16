#pragma once

#include <cmath>
#include <cstdlib>
#include <limits>
#include <memory>

using std::shared_ptr;
using std::make_shared;
using std::sqrt;

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;
const double epsilon = 0.01;

inline double degrees_to_radians(double degrees) 
{
	return degrees * pi / 180.0;
}

inline double random_double() 
{
	return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) 
{
	return min + (max - min) * random_double();
}

inline double clamp(double x, double min, double max) 
{
	if (x < min) return min;
	if (x > max) return max;
	return x;
}

inline double clamp01(double x) 
{
	return clamp(x, 0.0, 0.999);
}

double schlink(double cosine, double ref_idx) {
	auto r0 = (1.0 - ref_idx) / (1.0 + ref_idx);
	r0 *= r0;
	return r0 + (1.0 - r0) * pow((1 - cosine), 5.0);
}

#include "ray.h"
#include "vec3.h"