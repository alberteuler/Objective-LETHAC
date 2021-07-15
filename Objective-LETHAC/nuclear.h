#pragma once
#include<vector>
class nuclear
{
public:
	nuclear() {
		C.resize(6);
		beta.resize(6);
		lambda.resize(6);
	}
	nuclear(double NInit, double rhoInit,double LA) : N(NInit), rho(rhoInit),LAMBDA(LA){
		C.resize(6);
		beta.resize(6);
		lambda.resize(6);
	}
	~nuclear() = default;
	std::vector<double> EST();
	std::vector<double> FCN(double time);
protected:
	double N, LAMBDA;
	double rho;
	std::vector<double> C, beta, lambda;
};

