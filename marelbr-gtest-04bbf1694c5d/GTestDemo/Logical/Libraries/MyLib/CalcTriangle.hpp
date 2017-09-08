#include <math.h>

class CalcTriangle
{
	public:
		CalcTriangle() : a(0), b(0), c(0) { }
		~CalcTriangle() { }
		
		void set_a(float val) { a = val;}
		void set_b(float val) { b = val;}
		void set_c(float val) { c = val;}
		
		float get_c() { c = sqrt(a*a + b*b); return c; }
		float get_b() { b = sqrt(c*c - a*a); return b; }
		float get_a() { a = sqrt(c*c - b*b); return a; }
		
	private:
		float a;
		float b;
		float c;
};
