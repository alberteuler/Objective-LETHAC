#pragma once
#include "part.h"
#include <vector>
#include <math.h>

#ifndef TUBE_DEFINE
#define TUBE_DEFINE
class Tube__ :
    public Part__
{
public:
    Tube__() = default;
    Tube__(int N);
    Tube__(int N, int length, int ID, int OD, int angle);

    virtual vector<double> EST();
    virtual vector<double> FCN(double time, vector<double> &Y, vector<double> &Yprime) override;
    virtual double Pressure();

    double ID, OD, length, angle;
    int grav;
private:
    vector<double> T, Tw;
    double WW;
    double Area,Harea, Tin;
    double PF, PE;
    void HeatLoss();


    double DPCal() const;
};
Tube__::Tube__(int N) {
    kind = 0;
    T.resize(N);
    Tw.resize(N);
    this->N = N;
    layers = 3;
    int totalNum = layers * N;
    Y.resize(totalNum);
    Yprime.resize(totalNum);
}

Tube__::Tube__(int N, int length, int ID, int OD, int angle) {
    kind = 0;
    T.resize(N);
    Tw.resize(N);
    layers = 3;
    int totalNUm = layers;
    this->N = N;
    this->length = length;
    this->ID = ID;
    this->OD = OD;
    this->angle = angle;
    Harea = 3.14 * OD * length;
    Area = 3.14 * pow(ID, 2) /4;
}

class TubeData__ {

};

#endif

