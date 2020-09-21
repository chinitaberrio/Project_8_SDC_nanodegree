
# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---
The main objective of this project is to implement a PID controller able to keep on track a simulated vehicle. PID control theory is extensively use in different industries, this case is not an exception. 

```
[![Watch the video](video.gif)]
```
While trying to tune the parameters for the PID controller, I found this information quite useful:
*(P) Proportional error correction. The difference between the setpoint and actual system output is amplified and fed back to provide the correction signal. The larger the deviation from the setpoint, the larger the correction signal.
*(I) Integral error correction. Persistent differences between the setpoint and actual system output accumulate over time, until they become large enough to drive the system output back toward the setpoint.
*(D) Derivative error correction. The correction signal opposes rapid deviations in system output, reducing the response to disturbances and transient conditions.
=======

While trying to tune the parameters for the PID controller, i found this information quite useful:

* (P) Proportional error correction. The difference between the setpoint and actual system output is amplified and fed back to provide the correction signal. The larger the deviation from the setpoint, the larger the correction signal.
* (I) Integral error correction. Persistent differences between the setpoint and actual system output accumulate over time, until they become large enough to drive the system output back toward the setpoint.
* (D) Derivative error correction. The correction signal opposes rapid deviations in system output, reducing the response to disturbances and transient conditions.
source: http://www.mstarlabs.com/docs/tn031.html

This on-line simulator will give you an idea of the effects of changing each of the ki, kp, kd parameters in a simple process: https://sites.google.com/site/fpgaandco/pid

## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1(mac, linux), 3.81(Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  * Run either `./install-mac.sh` or `./install-ubuntu.sh`.
  * If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets 
    cd uWebSockets
    git checkout e94b6e1
    ```
    Some function signatures have changed in v0.14.x. See [this PR](https://github.com/udacity/CarND-MPC-Project/pull/3) for more details.
* Simulator. You can download these from the [project intro page](https://github.com/udacity/self-driving-car-sim/releases) in the classroom.

Fellow students have put together a guide to Windows set-up for the project [here](https://s3-us-west-1.amazonaws.com/udacity-selfdrivingcar/files/Kidnapped_Vehicle_Windows_Setup.pdf) if the environment you have set up for the Sensor Fusion projects does not work for this project. There's also an experimental patch for windows in this [PR](https://github.com/udacity/CarND-PID-Control-Project/pull/3).

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`. 





