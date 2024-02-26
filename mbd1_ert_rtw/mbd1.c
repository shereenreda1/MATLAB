/*
 * File: mbd1.c
 *
 * Code generated for Simulink model 'mbd1'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Feb 26 09:59:48 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "mbd1.h"
#include "mbd1_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_mbd1_T mbd1_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_mbd1_T mbd1_Y;

/* Real-time model */
static RT_MODEL_mbd1_T mbd1_M_;
RT_MODEL_mbd1_T *const mbd1_M = &mbd1_M_;

/* Model step function */
void mbd1_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In6'
   */
  mbd1_Y.Sum = mbd1_U.In6;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In6'
   */
  mbd1_Y.Out2 = mbd1_U.In6;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In6'
   */
  mbd1_Y.Out3 = mbd1_U.In6;

  /* Outport: '<Root>/Addition' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Add'
   */
  mbd1_Y.Addition = mbd1_U.In1 + mbd1_U.In2;

  /* Outport: '<Root>/Subtraction' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Subtract'
   */
  mbd1_Y.Subtraction = mbd1_U.In1 - mbd1_U.In2;

  /* Outport: '<Root>/Division' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Divide'
   */
  mbd1_Y.Division = mbd1_U.In1 / mbd1_U.In2;

  /* Outport: '<Root>/Multiplication' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Product'
   */
  mbd1_Y.Multiplication = mbd1_U.In1 * mbd1_U.In2;

  /* Outport: '<Root>/Minus' incorporates:
   *  Inport: '<Root>/In3'
   *  UnaryMinus: '<Root>/Unary Minus'
   */
  mbd1_Y.Minus = -mbd1_U.In3;

  /* Outport: '<Root>/Decrement' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Inport: '<Root>/In3'
   *  Sum: '<Root>/Subtract1'
   */
  mbd1_Y.Decrement = mbd1_U.In3 - 1.0;

  /* Outport: '<Root>/Increment' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Inport: '<Root>/In3'
   *  Sum: '<Root>/Add1'
   */
  mbd1_Y.Increment = mbd1_U.In3 + 1.0;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In4'
   *  Inport: '<Root>/In5'
   *  Logic: '<Root>/Logical Operator'
   */
  mbd1_Y.Out4 = (mbd1_U.In4 && mbd1_U.In5);

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/In4'
   *  Inport: '<Root>/In5'
   *  Logic: '<Root>/Logical Operator1'
   */
  mbd1_Y.Out5 = (mbd1_U.In4 || mbd1_U.In5);

  /* Outport: '<Root>/Out6' incorporates:
   *  Inport: '<Root>/In4'
   *  Inport: '<Root>/In5'
   *  Logic: '<Root>/Logical Operator2'
   */
  mbd1_Y.Out6 = mbd1_U.In4 ^ mbd1_U.In5;

  /* Outport: '<Root>/Out7' incorporates:
   *  Inport: '<Root>/In4'
   *  Inport: '<Root>/In5'
   *  Logic: '<Root>/Logical Operator3'
   */
  mbd1_Y.Out7 = (mbd1_U.In4 == mbd1_U.In5);

  /* Outport: '<Root>/Out8' incorporates:
   *  Inport: '<Root>/In4'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator'
   */
  mbd1_Y.Out8 = mbd1_U.In4 ^ 1;

  /* Outport: '<Root>/Out9' incorporates:
   *  Inport: '<Root>/In5'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator1'
   */
  mbd1_Y.Out9 = mbd1_U.In5 ^ 1;
}

/* Model initialize function */
void mbd1_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(mbd1_M, (NULL));

  /* external inputs */
  (void)memset(&mbd1_U, 0, sizeof(ExtU_mbd1_T));

  /* external outputs */
  (void) memset((void *)&mbd1_Y, 0,
                sizeof(ExtY_mbd1_T));
}

/* Model terminate function */
void mbd1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
