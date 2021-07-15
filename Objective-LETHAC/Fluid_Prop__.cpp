#include "Fluid_Prop__.h"
void Fluid_Prop__::PropCal() {
	vis = Cal(coeff.vis, temp);
	rho = Cal(coeff.rho, temp);
	thcon = Cal(coeff.thcon, temp);
	cp = Cal(coeff.cp, temp);
	nu = Cal(coeff.nu, temp);
}

Fluid_Prop__::Fluid_Prop__(double temp) {
	this->temp = temp;
}

