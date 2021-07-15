#include<iostream>
#include<vector>

#ifndef PART_DEFINE
#define PART_DEFINE

using namespace std;

class Part__
{
public:
	vector<double> Y;
	vector<double> Yprime;

	vector<double> T, P;
	double WW;

	int N;
	int layers;
	int ID;
	int kind;
	Part__* last;
	Part__* next;
	Part__() = default;

	virtual vector<double> EST() = 0;
	virtual vector<double> FCN(double time, vector<double> &Y, vector<double> &Yprime) = 0;
	virtual double Pressure() = 0;
	virtual ~Part__() = default;
	virtual void merge(vector<double> Y) = 0;
	virtual void collect(vector<double> Y) = 0;
private:

};

class PartData__ {
public:
	virtual void readData();
};
#endif