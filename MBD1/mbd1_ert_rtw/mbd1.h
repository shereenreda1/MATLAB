/*
 * File: mbd1.h
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

#ifndef RTW_HEADER_mbd1_h_
#define RTW_HEADER_mbd1_h_
#include <string.h>
#include <stddef.h>
#ifndef mbd1_COMMON_INCLUDES_
#define mbd1_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* mbd1_COMMON_INCLUDES_ */

#include "mbd1_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
  real_T In2;                          /* '<Root>/In2' */
  real_T In3;                          /* '<Root>/In3' */
  boolean_T In4;                       /* '<Root>/In4' */
  boolean_T In5;                       /* '<Root>/In5' */
  real_T In6;                          /* '<Root>/In6' */
} ExtU_mbd1_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Sum;                          /* '<Root>/Out1' */
  real_T Addition;                     /* '<Root>/Addition' */
  real_T Subtraction;                  /* '<Root>/Subtraction' */
  real_T Division;                     /* '<Root>/Division' */
  real_T Multiplication;               /* '<Root>/Multiplication' */
  real_T Minus;                        /* '<Root>/Minus' */
  real_T Decrement;                    /* '<Root>/Decrement' */
  real_T Increment;                    /* '<Root>/Increment' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
  boolean_T Out4;                      /* '<Root>/Out4' */
  boolean_T Out5;                      /* '<Root>/Out5' */
  boolean_T Out6;                      /* '<Root>/Out6' */
  boolean_T Out7;                      /* '<Root>/Out7' */
  boolean_T Out8;                      /* '<Root>/Out8' */
  boolean_T Out9;                      /* '<Root>/Out9' */
} ExtY_mbd1_T;

/* Real-time Model Data Structure */
struct tag_RTM_mbd1_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_mbd1_T mbd1_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_mbd1_T mbd1_Y;

/* Model entry point functions */
extern void mbd1_initialize(void);
extern void mbd1_step(void);
extern void mbd1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_mbd1_T *const mbd1_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Display10' : Unused code path elimination
 * Block '<Root>/Display11' : Unused code path elimination
 * Block '<Root>/Display12' : Unused code path elimination
 * Block '<Root>/Display13' : Unused code path elimination
 * Block '<Root>/Display14' : Unused code path elimination
 * Block '<Root>/Display15' : Unused code path elimination
 * Block '<Root>/Display2' : Unused code path elimination
 * Block '<Root>/Display3' : Unused code path elimination
 * Block '<Root>/Display4' : Unused code path elimination
 * Block '<Root>/Display5' : Unused code path elimination
 * Block '<Root>/Display6' : Unused code path elimination
 * Block '<Root>/Display7' : Unused code path elimination
 * Block '<Root>/Display8' : Unused code path elimination
 * Block '<Root>/Display9' : Unused code path elimination
 * Block '<Root>/Max of Elements' : Eliminated since input is scalar
 * Block '<Root>/Min of Elements' : Eliminated since input is scalar
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'mbd1'
 */
#endif                                 /* RTW_HEADER_mbd1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
