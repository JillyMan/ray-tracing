#pragma once

#include "../ray.h"
#include "../shapes/hittable.h"

class material { 
public:
	virtual bool scatter(const ray& r, const hit_record& rec, color& attenuation, ray& scatered_ray) = 0;
};