#include "pid.hpp"
#include <iostream>

//constructor
PID::PID(float samplingTime, float referenceValue, float Kp, float Ki, float Kd) 
	: samplingTime(samplingTime), referenceValue(referenceValue), Kp(Kp), Ki(Ki), Kd(Kd), integrator(0), differentiator(0), previousError(0), output(0) {

};
// for debugging
void PID::print() {
	std::cout << "Sampling time: " << samplingTime << "Reference value: " << referenceValue << "Kp: " << Kp << "Ki: " << Ki << "Kd: " << Kd << std::endl;
}

//it calculates and updates pid output
float PID::update(float measurement) {

	float error = referenceValue - measurement;
	float proportional = Kp * error;
	integrator = integrator + 0.5f * Ki * samplingTime * (error + previousError);
	differentiator = (2.0f * Kd * (error - previousError) / samplingTime) - differentiator;
	output = proportional + integrator + differentiator;
	previousError = error;

	std::cout << "Error " << error << "Output " << output << std::endl;

	return output;
}



