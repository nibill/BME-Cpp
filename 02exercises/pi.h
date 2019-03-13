#ifndef PI_H
#define PI_H
#include <random>

void picalc(int i);
void throwingADart(std::uniform_real_distribution<double>& dist, std::mt19937& mt);
void throwManyDarts(std::uniform_real_distribution<double>& dist, std::mt19937& mt, int darts);
#endif // PI_H
