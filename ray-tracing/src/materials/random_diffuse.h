#pragma once

#include "../vec3.h"
#include "material.h"

class random_diffuse  : public material {
public:
	
	random_diffuse(const color& col) 
		: col(col) 
	{}

	virtual bool scatter(const ray& r, const hit_record& rec, color& attenuation, ray& scatered_ray) override {
		scatered_ray = ray(rec.p, random_in_hemisphere(rec.normal));
		attenuation = col;
		return true;
	}

private:
	color col;
};