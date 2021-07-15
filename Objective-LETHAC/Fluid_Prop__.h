#pragma once
#include <vector>
struct propCoeff
{
	std::vector<double> vis, rho, thcon, cp, nu, prop;
};

class Fluid_Prop__
{
public:
	double temp;
	double vis, rho, thcon, cp, nu, prop;
	struct propCoeff coeff;

	Fluid_Prop__() = default;
	Fluid_Prop__(double temp);
	~Fluid_Prop__() = default;
	void PropCal();
	virtual const double HTC(double WW, double A, double D) = 0;
	virtual const double Fric(double WW, double A, double D) = 0;
private:
	const double Cal(std::vector<double>& coeff, double x) {
		double res = 0.0;
		double bar = 1;
		for (double co : coeff) {
			bar *= x;
			res += bar * co;
		}
		return res;
	}
};



class LBE :
	public Fluid_Prop__ {
	LBE();
	LBE(double temp);
	virtual const double HTC(double WW, double A, double D) override;
	virtual const double Fric(double WW, double A, double D) override;
};
LBE::LBE() {

}
LBE::LBE(double temp) {

}

class water :
	public Fluid_Prop__ {
	water();
	water(double temp);
};
water::water() {

}
water::water(double temp) {

}
