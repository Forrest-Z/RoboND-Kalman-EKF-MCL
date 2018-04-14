#include <iostream>
#include <math.h>

using namespace std;

double f(double mu, double sigma2, double x)
{
// 1-dimensional Gaussian
    double prob = 1.0 / sqrt(2.0 * M_PI * sigma2) * exp(-0.5 * pow((x - mu), 2.0) / sigma2);
    return prob;
}

int main()
{
    double mu = 10.0;       // mean value
    double sigma2 = 4.0;    // sigma sequared
    double x = 8.0;         // x

    cout << "Mean = " << mu << endl;
    cout << "Sigma Sequared = " << sigma2 << endl;
    cout << "x = " << x << endl;
    cout << "Probability = " << f(mu, sigma2, x) << endl << endl;
    return 0;
}
