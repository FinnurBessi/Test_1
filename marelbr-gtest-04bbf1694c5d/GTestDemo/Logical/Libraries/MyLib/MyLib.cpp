#include <bur/plctypes.h>
#include "CalcTriangle.hpp"
UDINT bur_heap_size = 1000;

extern "C" _BUR_PUBLIC float pythagora_c(float a, float b)
{
	CalcTriangle calc;
	
	calc.set_a(a);
	calc.set_b(b);

	return calc.get_c();
}
