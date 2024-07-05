#pragma once

class PID {

private:
	float samplingTime;
	float Kp;
	float Ki;
	float Kd;
	float referenceValue;
	float integrator;
	float differentiator;
	float previousError;
	float output;

public:
	PID(float samplingTime, float referenceValue, float Kp, float Ki, float Kd);

	void print();
	float update(float measurement);
};

