 PID Controller in C++

This repository contains a simple implementation of a PID (Proportional-Integral-Derivative) controller in C++. The implementation demonstrates how to set up and use a PID controller to control a process.

## Getting Started

To get started with this project, follow these steps:

1. **Clone the Repository:**
'git clone https://github.com/stuffedleaves/pidcpp.git'
2. **Navigate to the Project Directory:**
'cd pidcpp'
3. **Create a Build Directory:**
'mkdir build && cd build'
4. **Run CMake:**
'cmake ..'
5. **Build the Project:**
'make'
6. **Navigate to the Main Directory:**
'cd main'
7. **Run the Executable:**
'./main'
## Usage

The `main` executable demonstrates the usage of the PID controller. By default, it initializes with predefined PID parameters and setpoint. You can optionally pass command-line arguments to customize these parameters. The program then simulates the PID control loop for a predefined number of iterations.

7. **Example Usage:**
'./main [Sampling Time] [Reference Value] [Kp] [Ki] [Kd]'
