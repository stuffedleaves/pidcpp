/*
File Name: main.cpp

Description:
This code example calculates the P, I, and D components of a PID controller in the z-domain.
The gains of the PID controller can be adjusted through trial and error to achieve the desired system behavior.

Author: Feyza Civri
E-mail: feyzacivri@gmail.com

Date: 2024-07-05
*/

#include <iostream>
#include "pid.hpp"

int main(int argc, char* argv[])
{
    //Default values
    float referenceValue = 1;
    float samplingTime = 0.02;
    float Kp = 0.3;
    float Ki = 0.8;
    float Kd = 0.00001;
    float measurement = 20;

    //User arguments
    if (argc > 1)
    {
        referenceValue = std::atof(argv[1]);
        samplingTime = std::atof(argv[2]);
        Kp = std::atof(argv[3]);
        Ki = std::atof(argv[4]);
        Kd = std::atof(argv[5]);
    }

    PID pid(samplingTime,referenceValue, Kp, Ki, Kd);

    pid.print();

    for (float i = 0; i < 2; i += samplingTime) {
        float inc = pid.update(measurement);
        measurement += inc;
        std::cout << "Measurement " << measurement << std::endl;
    }

    return 0;
}