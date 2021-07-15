#include "System__.h"
#include "HTX__.h"
vector<double> System__::EST() {
	vector<double> res;
	for(Part__* part:parts){
		vector<double> Y = part->EST();
		res.insert(res.end(), Y.begin(), Y.end());
	}
	return res;
}
vector<double> System__::FCN(double time, vector<double> &Y, vector<double> &Yprime) {
	vector<double> resPrime;
	for (Part__* part : parts) {
		auto fr = Y.begin() + SysMap[part].first;
		auto to = Y.begin() + SysMap[part].second;
		vector<double> single(fr, to);
		vector<double> singlePrime(fr, to);
		vector<double> prime = part->FCN(time, single, singlePrime);
		resPrime.insert(resPrime.end(), prime.begin(), prime.end());
	}
	return resPrime;
}