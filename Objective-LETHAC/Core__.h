#pragma once
#include"part.h"
class Core__ :
    public Part__
{
public:
    vector<double> T, Tw;
    bool UsingNuclear;
    //para Parameter;
    virtual vector<double> EST() override;
    virtual vector<double> FCN(float time, vector<float> Y, vector<float> Yprime);
    Core__(int N);
    //Core__(para parameter);
};


