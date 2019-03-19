#include "pi.h"
#include <iostream>
#include <random>
#include <cmath>
#include <iomanip>

using namespace std;

void picalc(int i)
{
    cout << "Setup Random Number Generator output: " << endl;
    // A standard interface to a platform-specific non-deterministic random number generator
    random_device rd; // Create Random Device as seed
    mt19937 mt(rd ()); // Init Mersenne Twister Engine with that seed
    // A continous random distribution on the range [min, max] with equal probability.
    uniform_real_distribution<double> dist (0.0 , 1.0) ;

    // Generate 10 random numbers
    for ( int i =0; i <10; ++i)
    {
        cout << dist(mt) << "\n";
    }

    if(i == 1)
    {
        cout << "Throwing a Dart output: " << endl;
        throwingADart(dist, mt);
    }
    else
    {
        cout << "Throw many Darts output: " << endl;
        throwManyDarts(dist, mt, 5000000);
    }
}

void throwingADart(uniform_real_distribution<double>& dist, mt19937& mt)
{
    double x = dist(mt);
    double y = dist(mt);

    cout << "Single throw with (x,y) with values (" << x << "," << y << ")";

    if ( x*x + y*y <= 1)
    {
        cout << " was successful" << endl;
    }
    else
    {
        cout << " was unsuccessful" << endl;
    }
}

void throwManyDarts(uniform_real_distribution<double>& dist, mt19937& mt, int darts)
{
    cout << "Start to throw " << darts << " darts" << endl;
    int throws = 0;
    int success = 0;

    for(int i = 0;i < darts;i++) {
        double x = dist(mt);
        double y = dist(mt);
        throws++;
        if ( x*x + y*y <= 1)
        {
            success++;
        }
    }

    cout << "Successful throws: " << success << endl;
    cout << "Result: " << fixed << setprecision(17) << 4 * static_cast<double>(success) / static_cast<double>(throws) << endl;
}
