#include "PID.h"
#include <iostream>

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */
  Kp = Kp_;
  Ki = Ki_;
  Kd = Kd_;

  p_error = 0.0;
  i_error = 0.0;
  d_error = 0.0;
  cte_prev = 0.0;

}

void PID::UpdateError(double cte) {
  /**
   * Update PID errors based on cte.
   */
  p_error = cte;
  i_error += cte;
  d_error = cte - cte_prev ;
  cte_prev = cte;

}

double PID::TotalError() {
  /**
   * Calculate and return the total error
   */

  double t_error = Kp*p_error + Ki*i_error + Kd*d_error;
  // limiting the error within [-1 - 1]
  t_error = std::max(t_error,-1.0);
  t_error = std::min(1.0, t_error );


  return t_error;  // TODO: Add your total error calc here!
}


