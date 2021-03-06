#ifndef HITABLE_H
#define HITABLE_H

#include "ray.h"

// forward 
class material;

struct hit_record {
    float t;
    vec3 point;
    vec3 normal;
    material *p_material;
};

class hitable {
public:
    virtual bool hit(const ray& r, float t_min, float t_max, hit_record& rec) const = 0;
};

#endif // HITABLE_H
