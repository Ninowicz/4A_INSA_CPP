#include "vecteur3d_version1.hpp"
#include <cmath> // Pour sqrt

using namespace std;

Vecteur3D::Vecteur3D()
{
  x = y = z = 0.0;
}

Vecteur3D::Vecteur3D(float a, float b, float c)
{
  x = a; y=b; z=c;
}

float Vecteur3D::norme() const
{
    return sqrt(x*x+y*y+z*z);
}

float Vecteur3D::prodScal(const Vecteur3D &v) const
{
  return x*x+y*y+z*v.z;
}

ostream &operator<<(ostream &os, const Vecteur3D &v)
{
  return os<<"("<<v.x<<","<<v.y<<","<<v.z<<")";
}
