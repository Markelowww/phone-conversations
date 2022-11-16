#include <inttypes.h>
void CalculationSum(int64_t& dt64, double& ds, int64_t& d64, int64_t& t64, const int64_t& s64, double& sum)
{
    for (; dt64 > 0;)
    {
        ds = 1;
        if (d64 > 5)
            ds -= 0.1;
        if ((t64 >= 22) || (t64 < 8))
            ds -= 0.2;
        if (dt64 > 60)
        {
            ds = ds * 60 * s64;
            t64++;
            if (t64 == 24)
            {
                t64 = 0;
                d64++;
                if (d64 == 8)
                    d64 = 1;
            }
        }
        else
            ds = ds * dt64 * s64;
        sum += ds;
        dt64 -= 60;
    }
}