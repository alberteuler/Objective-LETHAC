#pragma once
#include "part.h"
#include "unordered_map"
class System__ :
    public Part__
{
    vector<Part__*>parts;
    unordered_map<Part__*, pair<int, int>> SysMap;
    friend class Structure__;
    virtual vector<double> EST() override;
    virtual vector<double> FCN(double time,vector<double> &Y, vector<double> &Yprime) override;
};




