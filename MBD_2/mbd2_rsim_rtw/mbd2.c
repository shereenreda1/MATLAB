/*
 * mbd2.c
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

#include <math.h>
#include "mbd2.h"
#include "mbd2_private.h"
#include "mbd2_dt.h"

/* user code (top of parameter file) */
const int_T gblNumToFiles = 0;
const int_T gblNumFrFiles = 0;
const int_T gblNumFrWksBlocks = 0;
const char *gblSlvrJacPatternFileName = "mbd2_rsim_rtw\\mbd2_Jpattern.mat";

/* Root inports information  */
const int_T gblNumRootInportBlks = 0;
const int_T gblNumModelInputs = 0;
extern rtInportTUtable *gblInportTUtables;
extern const char *gblInportFileName;
const int_T gblInportDataTypeIdx[] = { -1 };

const int_T gblInportDims[] = { -1 } ;

const int_T gblInportComplex[] = { -1 };

const int_T gblInportInterpoFlag[] = { -1 };

const int_T gblInportContinuous[] = { -1 };

#include "simstruc.h"
#include "fixedpoint.h"

/* Block signals (default storage) */
B rtB;

/* Block states (default storage) */
DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Parent Simstruct */
static SimStruct model_S;
SimStruct *const rtS = &model_S;

/* System initialize for root system: '<Root>' */
void MdlInitialize(void)
{
  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem5' */
  /* SystemInitialize for Outport: '<S6>/Out1' incorporates:
   *  Inport: '<S6>/In1'
   */
  rtB.In1 = 0.0;

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem5' */

  /* SystemInitialize for Merge: '<Root>/Merge' */
  strncpy(&rtB.Merge[0], &rtConstP.Merge_InitialOutput[0], 255U);
  rtB.Merge[255] = '\x00';
}

/* Start for root system: '<Root>' */
void MdlStart(void)
{
  /* Start for If: '<Root>/If' */
  ssSetBlockStateForSolverChangedAtMajorStep(rtS);
  ssSetBlockStateForSolverChangedAtMajorStep(rtS);
  ssSetBlockStateForSolverChangedAtMajorStep(rtS);
  rtDW.If_ActiveSubsystem = -1;

  /* Start for If: '<Root>/If2' */
  ssSetBlockStateForSolverChangedAtMajorStep(rtS);
  ssSetBlockStateForSolverChangedAtMajorStep(rtS);
  ssSetBlockStateForSolverChangedAtMajorStep(rtS);
  rtDW.If2_ActiveSubsystem = -1;

  /* Start for If: '<S10>/If' */
  ssSetBlockStateForSolverChangedAtMajorStep(rtS);
  ssSetBlockStateForSolverChangedAtMajorStep(rtS);
  rtDW.If_ActiveSubsystem_j = -1;

  /* ConstCode for Outport: '<Root>/y2' */
  rtY.y2 = rtrtC.Add;

  /* ConstCode for Outport: '<Root>/y3' */
  rtY.y3 = rtrtC.Subtract;

  /* ConstCode for Outport: '<Root>/y4' */
  rtY.y4 = rtrtC.Divide;

  /* ConstCode for Outport: '<Root>/y5' */
  rtY.y5 = rtrtC.Product;
  MdlInitialize();
}

/* Outputs for root system: '<Root>' */
void MdlOutputs(int_T tid)
{
  int32_T i;
  int8_T rtAction;
  int8_T rtPrevAction;

  /* MATLAB Function: '<Root>/MATLAB Function' */
  rtY.y = 1.0;
  for (i = 0; i < 5; i++) {
    rtY.y *= (real_T)i + 1.0;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */

  /* Outport: '<Root>/y1' */
  rtY.y1 = 24.0;

  /* If: '<Root>/If' incorporates:
   *  Constant: '<Root>/Constant5'
   *  Inport: '<S6>/In1'
   */
  rtPrevAction = rtDW.If_ActiveSubsystem;
  rtDW.If_ActiveSubsystem = 2;
  if (rtPrevAction != 2) {
    switch (rtPrevAction) {
     case 0:
      ssSetBlockStateForSolverChangedAtMajorStep(rtS);
      break;

     case 1:
      ssSetBlockStateForSolverChangedAtMajorStep(rtS);
      break;

     case 2:
      ssSetBlockStateForSolverChangedAtMajorStep(rtS);
      break;
    }
  }

  if (2 != rtPrevAction) {
    /* Enable for IfAction SubSystem: '<Root>/If Action Subsystem5' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* Enable for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    /* Enable for If: '<Root>/If' */
    if (ssGetT(rtS) != ssGetTStart(rtS)) {
      ssSetBlockStateForSolverChangedAtMajorStep(rtS);
    }

    /* End of Enable for SubSystem: '<Root>/If Action Subsystem' */

    /* End of Enable for SubSystem: '<Root>/If Action Subsystem5' */
  }

  /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem5' incorporates:
   *  ActionPort: '<S6>/Action Port'
   */
  rtB.In1 = 75.0;

  /* End of If: '<Root>/If' */
  /* End of Outputs for SubSystem: '<Root>/If Action Subsystem5' */

  /* If: '<Root>/If2' incorporates:
   *  Merge: '<Root>/Merge'
   *  SignalConversion generated from: '<S3>/Out1'
   *  SignalConversion generated from: '<S4>/Out1'
   *  SignalConversion generated from: '<S5>/Out1'
   */
  rtPrevAction = rtDW.If2_ActiveSubsystem;
  if (rtB.In1 >= 70.0) {
    rtAction = 0;
  } else if (rtB.In1 >= 60.0) {
    rtAction = 1;
  } else {
    rtAction = 2;
  }

  rtDW.If2_ActiveSubsystem = rtAction;
  if (rtPrevAction != rtAction) {
    switch (rtPrevAction) {
     case 0:
      ssSetBlockStateForSolverChangedAtMajorStep(rtS);
      break;

     case 1:
      ssSetBlockStateForSolverChangedAtMajorStep(rtS);
      break;

     case 2:
      ssSetBlockStateForSolverChangedAtMajorStep(rtS);
      break;
    }
  }

  switch (rtAction) {
   case 0:
    if (rtAction != rtPrevAction) {
      /* Enable for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S3>/Action Port'
       */
      /* Enable for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
       *  ActionPort: '<S1>/Action Port'
       */
      /* Enable for If: '<Root>/If' incorporates:
       *  If: '<Root>/If2'
       */
      if (ssGetT(rtS) != ssGetTStart(rtS)) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
      }

      /* End of Enable for SubSystem: '<Root>/If Action Subsystem' */

      /* Enable for If: '<Root>/If2' */

      /* End of Enable for SubSystem: '<Root>/If Action Subsystem2' */
    }

    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&rtB.Merge[0], &rtrtC.StringConstant_g[0], 255U);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem2' */
    rtB.Merge[255] = '\x00';
    break;

   case 1:
    if (rtAction != rtPrevAction) {
      /* Enable for IfAction SubSystem: '<Root>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S4>/Action Port'
       */
      /* Enable for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
       *  ActionPort: '<S1>/Action Port'
       */
      /* Enable for If: '<Root>/If' incorporates:
       *  If: '<Root>/If2'
       */
      if (ssGetT(rtS) != ssGetTStart(rtS)) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
      }

      /* End of Enable for SubSystem: '<Root>/If Action Subsystem' */

      /* Enable for If: '<Root>/If2' */

      /* End of Enable for SubSystem: '<Root>/If Action Subsystem3' */
    }

    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    strncpy(&rtB.Merge[0], &rtrtC.StringConstant_ou[0], 255U);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem3' */
    rtB.Merge[255] = '\x00';
    break;

   default:
    if (rtAction != rtPrevAction) {
      /* Enable for IfAction SubSystem: '<Root>/If Action Subsystem4' incorporates:
       *  ActionPort: '<S5>/Action Port'
       */
      /* Enable for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
       *  ActionPort: '<S1>/Action Port'
       */
      /* Enable for If: '<Root>/If' incorporates:
       *  If: '<Root>/If2'
       */
      if (ssGetT(rtS) != ssGetTStart(rtS)) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
      }

      /* End of Enable for SubSystem: '<Root>/If Action Subsystem' */

      /* Enable for If: '<Root>/If2' */

      /* End of Enable for SubSystem: '<Root>/If Action Subsystem4' */
    }

    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    strncpy(&rtB.Merge[0], &rtrtC.StringConstant_o[0], 255U);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem4' */
    rtB.Merge[255] = '\x00';
    break;
  }

  /* End of If: '<Root>/If2' */

  /* Outport: '<Root>/y6' */
  strncpy(&rtY.y6[0], &rtB.Merge[0], 255U);
  rtY.y6[255] = '\x00';

  /* If: '<S10>/If' */
  rtPrevAction = rtDW.If_ActiveSubsystem_j;
  rtAction = (int8_T)!(rtrtC.Mod == 0.0);
  rtDW.If_ActiveSubsystem_j = rtAction;
  if (rtPrevAction != rtAction) {
    switch (rtPrevAction) {
     case 0:
      ssSetBlockStateForSolverChangedAtMajorStep(rtS);
      break;

     case 1:
      ssSetBlockStateForSolverChangedAtMajorStep(rtS);
      break;
    }
  }

  if (rtAction == 0) {
    if (rtAction != rtPrevAction) {
      /* Enable for IfAction SubSystem: '<S10>/If Action Subsystem' incorporates:
       *  ActionPort: '<S11>/Action Port'
       */
      /* Enable for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
       *  ActionPort: '<S1>/Action Port'
       */
      /* Enable for If: '<S10>/If' incorporates:
       *  If: '<Root>/If'
       */
      if (ssGetT(rtS) != ssGetTStart(rtS)) {
        ssSetBlockStateForSolverChangedAtMajorStep(rtS);
      }

      /* End of Enable for SubSystem: '<Root>/If Action Subsystem' */

      /* End of Enable for SubSystem: '<S10>/If Action Subsystem' */
    }
  } else if (rtAction != rtPrevAction) {
    /* Enable for IfAction SubSystem: '<S10>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    /* Enable for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    /* Enable for If: '<S10>/If' incorporates:
     *  If: '<Root>/If'
     */
    if (ssGetT(rtS) != ssGetTStart(rtS)) {
      ssSetBlockStateForSolverChangedAtMajorStep(rtS);
    }

    /* End of Enable for SubSystem: '<Root>/If Action Subsystem' */

    /* End of Enable for SubSystem: '<S10>/If Action Subsystem1' */
  }

  /* End of If: '<S10>/If' */
  UNUSED_PARAMETER(tid);
}

/* Update for root system: '<Root>' */
void MdlUpdate(int_T tid)
{
  UNUSED_PARAMETER(tid);
}

/* Termination for root system: '<Root>' */
void MdlTerminate(void)
{
}

/* Function to initialize sizes */
void MdlInitializeSizes(void)
{
  ssSetNumContStates(rtS, 0);          /* Number of continuous states */
  ssSetNumY(rtS, 7);                   /* Number of model outputs */
  ssSetNumU(rtS, 0);                   /* Number of model inputs */
  ssSetDirectFeedThrough(rtS, 0);      /* The model is not direct feedthrough */
  ssSetNumSampleTimes(rtS, 1);         /* Number of sample times */
  ssSetNumBlocks(rtS, 51);             /* Number of blocks */
  ssSetNumBlockIO(rtS, 2);             /* Number of block outputs */
}

/* Function to initialize sample times. */
void MdlInitializeSampleTimes(void)
{
  /* task periods */
  ssSetSampleTime(rtS, 0, 0.0);

  /* task offsets */
  ssSetOffsetTime(rtS, 0, 1.0);
}

/* Function to register the model */
/* Turns off all optimizations on Windows because of issues with VC 2015 compiler.
   This function is not performance-critical, hence this is not a problem.
 */
#if defined(_MSC_VER)

#pragma optimize( "", off )

#endif

SimStruct * mbd2(void)
{
  static struct _ssMdlInfo mdlInfo;
  (void) memset((char *)rtS, 0,
                sizeof(SimStruct));
  (void) memset((char *)&mdlInfo, 0,
                sizeof(struct _ssMdlInfo));
  ssSetMdlInfoPtr(rtS, &mdlInfo);

  /* timing info */
  {
    static time_T mdlPeriod[NSAMPLE_TIMES];
    static time_T mdlOffset[NSAMPLE_TIMES];
    static time_T mdlTaskTimes[NSAMPLE_TIMES];
    static int_T mdlTsMap[NSAMPLE_TIMES];
    static int_T mdlSampleHits[NSAMPLE_TIMES];
    static boolean_T mdlTNextWasAdjustedPtr[NSAMPLE_TIMES];
    static int_T mdlPerTaskSampleHits[NSAMPLE_TIMES * NSAMPLE_TIMES];
    static time_T mdlTimeOfNextSampleHit[NSAMPLE_TIMES];

    {
      int_T i;
      for (i = 0; i < NSAMPLE_TIMES; i++) {
        mdlPeriod[i] = 0.0;
        mdlOffset[i] = 0.0;
        mdlTaskTimes[i] = 0.0;
        mdlTsMap[i] = i;
        mdlSampleHits[i] = 1;
      }
    }

    ssSetSampleTimePtr(rtS, &mdlPeriod[0]);
    ssSetOffsetTimePtr(rtS, &mdlOffset[0]);
    ssSetSampleTimeTaskIDPtr(rtS, &mdlTsMap[0]);
    ssSetTPtr(rtS, &mdlTaskTimes[0]);
    ssSetSampleHitPtr(rtS, &mdlSampleHits[0]);
    ssSetTNextWasAdjustedPtr(rtS, &mdlTNextWasAdjustedPtr[0]);
    ssSetPerTaskSampleHitsPtr(rtS, &mdlPerTaskSampleHits[0]);
    ssSetTimeOfNextSampleHitPtr(rtS, &mdlTimeOfNextSampleHit[0]);
  }

  ssSetSolverMode(rtS, SOLVER_MODE_SINGLETASKING);

  /*
   * initialize model vectors and cache them in SimStruct
   */

  /* block I/O */
  {
    ssSetBlockIO(rtS, ((void *) &rtB));
    (void) memset(((void *) &rtB), 0,
                  sizeof(B));
  }

  /* external outputs */
  {
    ssSetY(rtS, &rtY);
    (void) memset((void *)&rtY, 0,
                  sizeof(ExtY));
  }

  /* states (dwork) */
  {
    void *dwork = (void *) &rtDW;
    ssSetRootDWork(rtS, dwork);
    (void) memset(dwork, 0,
                  sizeof(DW));
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    ssSetModelMappingInfo(rtS, &dtInfo);
    dtInfo.numDataTypes = 16;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;
  }

  /* Model specific registration */
  ssSetRootSS(rtS, rtS);
  ssSetVersion(rtS, SIMSTRUCT_VERSION_LEVEL2);
  ssSetModelName(rtS, "mbd2");
  ssSetPath(rtS, "mbd2");
  ssSetTStart(rtS, 0.0);
  ssSetTFinal(rtS, 10.0);

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    ssSetRTWLogInfo(rtS, &rt_DataLoggingInfo);
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(ssGetRTWLogInfo(rtS), (NULL));
    rtliSetLogXSignalPtrs(ssGetRTWLogInfo(rtS), (NULL));
    rtliSetLogT(ssGetRTWLogInfo(rtS), "tout");
    rtliSetLogX(ssGetRTWLogInfo(rtS), "");
    rtliSetLogXFinal(ssGetRTWLogInfo(rtS), "");
    rtliSetLogVarNameModifier(ssGetRTWLogInfo(rtS), "rt_");
    rtliSetLogFormat(ssGetRTWLogInfo(rtS), 4);
    rtliSetLogMaxRows(ssGetRTWLogInfo(rtS), 0);
    rtliSetLogDecimation(ssGetRTWLogInfo(rtS), 1);
    rtliSetLogY(ssGetRTWLogInfo(rtS), "");
    rtliSetLogYSignalInfo(ssGetRTWLogInfo(rtS), (NULL));
    rtliSetLogYSignalPtrs(ssGetRTWLogInfo(rtS), (NULL));
  }

  {
    static ssSolverInfo slvrInfo;
    ssSetStepSize(rtS, 0.2);
    ssSetMinStepSize(rtS, 0.0);
    ssSetMaxNumMinSteps(rtS, -1);
    ssSetMinStepViolatedError(rtS, 0);
    ssSetMaxStepSize(rtS, 0.2);
    ssSetSolverMaxOrder(rtS, -1);
    ssSetSolverRefineFactor(rtS, 1);
    ssSetOutputTimes(rtS, (NULL));
    ssSetNumOutputTimes(rtS, 0);
    ssSetOutputTimesOnly(rtS, 0);
    ssSetOutputTimesIndex(rtS, 0);
    ssSetZCCacheNeedsReset(rtS, 0);
    ssSetDerivCacheNeedsReset(rtS, 0);
    ssSetNumNonContDerivSigInfos(rtS, 0);
    ssSetNonContDerivSigInfos(rtS, (NULL));
    ssSetSolverInfo(rtS, &slvrInfo);
    ssSetSolverName(rtS, "VariableStepDiscrete");
    ssSetVariableStepSolver(rtS, 1);
    ssSetSolverConsistencyChecking(rtS, 0);
    ssSetSolverAdaptiveZcDetection(rtS, 0);
    ssSetSolverRobustResetMethod(rtS, 0);
    ssSetSolverStateProjection(rtS, 0);
    ssSetSolverMassMatrixType(rtS, (ssMatrixType)0);
    ssSetSolverMassMatrixNzMax(rtS, 0);
    ssSetModelOutputs(rtS, MdlOutputs);
    ssSetModelLogData(rtS, rt_UpdateTXYLogVars);
    ssSetModelLogDataIfInInterval(rtS, rt_UpdateTXXFYLogVars);
    ssSetModelUpdate(rtS, MdlUpdate);
    ssSetTNextTid(rtS, INT_MIN);
    ssSetTNext(rtS, rtMinusInf);
    ssSetSolverNeedsReset(rtS);
    ssSetNumNonsampledZCs(rtS, 0);
  }

  ssSetChecksumVal(rtS, 0, 1803424386U);
  ssSetChecksumVal(rtS, 1, 3723287135U);
  ssSetChecksumVal(rtS, 2, 2954543053U);
  ssSetChecksumVal(rtS, 3, 1330272580U);
  return rtS;
}

/* When you use the on parameter, it resets the optimizations to those that you
   specified with the /O compiler option. */
#if defined(_MSC_VER)

#pragma optimize( "", on )

#endif
