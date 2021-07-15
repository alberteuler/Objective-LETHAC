#pragma once
#include "part.h"
class HTX__ :
    public Part__
{
public:
    vector<double> TP, TS, TW;
    double ID, MD, OD;
    double WP, WS;
    double height, length;
    double tcorin, tcorout;
    
    HTX__() = default;
    HTX__(int N);

    virtual vector<double> EST();
    virtual vector<double> FCN(float time, vector<float> Y, vector<float> Yprime);

private:
    void initTemp();
    void CalHeat();
    void CalTemp();
    void CalPrime();
    void CorWW();
    double delta, inputTemp, inputWW, inputTempS;
};

