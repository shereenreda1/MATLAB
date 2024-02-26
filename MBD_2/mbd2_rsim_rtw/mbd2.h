/*
 * mbd2.h
 *
 * Code generation for model "mbd2".
 *
 * Model version              : 1.6
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Mon Feb 26 14:11:15 2024
 *
 * Target selection: rsim.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_mbd2_h_
#define RTW_HEADER_mbd2_h_
#include <string.h>
#include <stddef.h>
#ifndef mbd2_COMMON_INCLUDES_
#define mbd2_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rsim.h"
#include "rt_logging.h"
#include "dt_info.h"
#endif                                 /* mbd2_COMMON_INCLUDES_ */

#include "mbd2_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME                     mbd2
#define NSAMPLE_TIMES                  (1)                       /* Number of sample times */
#define NINPUTS                        (0)                       /* Number of model inputs */
#define NOUTPUTS                       (7)                       /* Number of model outputs */
#define NBLOCKIO                       (2)                       /* Number of data output port signals */
#define NUM_ZC_EVENTS                  (0)                       /* Number of zero-crossing events */
#ifndef NCSTATES
#define NCSTATES                       (0)                       /* Number of continuous states */
#elif NCSTATES != 0
# error Invalid specification of NCSTATES defined in compiler command
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         (NULL)
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)
#endif

/* Block signals (default storage) */
typedef struct {
  char_T Merge[256];                   /* '<Root>/Merge' */
  real_T In1;                          /* '<S6>/In1' */
} B;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int8_T If_ActiveSubsystem;           /* '<Root>/If' */
  int8_T If2_ActiveSubsystem;          /* '<Root>/If2' */
  int8_T If_ActiveSubsystem_j;         /* '<S10>/If' */
} DW;

/* Invariant block signals (default storage) */
typedef struct {
  const char_T StringConstant[256];    /* '<S12>/String Constant' */
  const char_T StringConstant_b[256];  /* '<S11>/String Constant' */
  const char_T StringConstant_o[256];  /* '<S5>/String Constant' */
  const char_T StringConstant_ou[256]; /* '<S4>/String Constant' */
  const char_T StringConstant_g[256];  /* '<S3>/String Constant' */
  const char_T StringConstant_j[256];  /* '<S2>/String Constant' */
  const char_T StringConstant_f[256];  /* '<S1>/String Constant' */
  const real_T Add;                    /* '<S9>/Add' */
  const real_T Subtract;               /* '<S9>/Subtract' */
  const real_T Divide;                 /* '<S9>/Divide' */
  const real_T Product;                /* '<S9>/Product' */
  const real_T Mod;                    /* '<S10>/Mod' */
} ConstB;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: Merge_InitialOutput
   * Referenced by: '<Root>/Merge'
   */
  char_T Merge_InitialOutput[256];
} ConstP;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T y;                            /* '<Root>/y' */
  real_T y1;                           /* '<Root>/y1' */
  real_T y2;                           /* '<Root>/y2' */
  real_T y3;                           /* '<Root>/y3' */
  real_T y4;                           /* '<Root>/y4' */
  real_T y5;                           /* '<Root>/y5' */
  char_T y6[256];                      /* '<Root>/y6' */
} ExtY;

/* External data declarations for dependent source files */
extern const char *RT_MEMORY_ALLOCATION_ERROR;
extern B rtB;                          /* block i/o */
extern DW rtDW;                        /* states (dwork) */
extern ExtY rtY;                       /* external outputs */
extern const ConstB rtrtC;             /* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP rtConstP;

/* Simulation Structure */
extern SimStruct *const rtS;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Display2' : Unused code path elimination
 * Block '<Root>/Display3' : Unused code path elimination
 * Block '<Root>/Display4' : Unused code path elimination
 * Block '<Root>/Display5' : Unused code path elimination
 * Block '<Root>/Display6' : Unused code path elimination
 * Block '<Root>/Display7' : Unused code path elimination
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
 * '<Root>' : 'mbd2'
 * '<S1>'   : 'mbd2/If Action Subsystem'
 * '<S2>'   : 'mbd2/If Action Subsystem1'
 * '<S3>'   : 'mbd2/If Action Subsystem2'
 * '<S4>'   : 'mbd2/If Action Subsystem3'
 * '<S5>'   : 'mbd2/If Action Subsystem4'
 * '<S6>'   : 'mbd2/If Action Subsystem5'
 * '<S7>'   : 'mbd2/MATLAB Function'
 * '<S8>'   : 'mbd2/MATLAB Function1'
 * '<S9>'   : 'mbd2/Subsystem'
 * '<S10>'  : 'mbd2/even_or_odd'
 * '<S11>'  : 'mbd2/even_or_odd/If Action Subsystem'
 * '<S12>'  : 'mbd2/even_or_odd/If Action Subsystem1'
 */

/* user code (bottom of header file) */
extern const int_T gblNumToFiles;
extern const int_T gblNumFrFiles;
extern const int_T gblNumFrWksBlocks;
extern rtInportTUtable *gblInportTUtables;
extern const char *gblInportFileName;
extern const int_T gblNumRootInportBlks;
extern const int_T gblNumModelInputs;
extern const int_T gblInportDataTypeIdx[];
extern const int_T gblInportDims[];
extern const int_T gblInportComplex[];
extern const int_T gblInportInterpoFlag[];
extern const int_T gblInportContinuous[];

#endif                                 /* RTW_HEADER_mbd2_h_ */
