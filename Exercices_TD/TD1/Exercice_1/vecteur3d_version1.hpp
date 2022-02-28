#ifndef VECTEUR3D_HPP
#define VECTEUR3D_HPP
#include <iostream>

class Vecteur3D {
    public:
        float x, y, z;
    public:
        Vecteur3D();
        Vecteur3D(float, float, float);
        float norme() const;
        float prodScal(const Vecteur3D &) const;
};
std::ostream &operator <<(std::ostream &, const Vecteur3D &);
#endif