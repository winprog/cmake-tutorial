#include "MathFunctions.h"
#include <math.h>
#include <stdio.h>
#include "TutorialConfig.h"

double mysqrt(double x)
{
    fprintf(stdout, "call mysqrt\n");
    if (x <= 0.0)
        return 0.0;

#if defined (HAVE_LOG) && defined (HAVE_EXP)
    fprintf(stdout, "compute by log and exp\n");
    double result = exp(log(x)*0.5);
#else
    double result = sqrt(x);
#endif

    return result;
}
