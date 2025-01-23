/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Total_Pjt.c
 *
 * Code generated for Simulink model 'Total_Pjt'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Wed Jan 22 18:23:47 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Total_Pjt.h"
#include "rtwtypes.h"
#include "Total_Pjt_private.h"
#include <math.h>

/* Block states (default storage) */
DW_Total_Pjt_T Total_Pjt_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Total_Pjt_T Total_Pjt_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Total_Pjt_T Total_Pjt_Y;

/* Real-time model */
static RT_MODEL_Total_Pjt_T Total_Pjt_M_;
RT_MODEL_Total_Pjt_T *const Total_Pjt_M = &Total_Pjt_M_;

/*
 * Output and update for action system:
 *    '<S3>/Blue_On'
 *    '<S3>/Green_On'
 *    '<S3>/Red_On'
 */
void Total_Pjt_Blue_On(boolean_T rtu_In1, boolean_T rtu_In2, boolean_T rtu_In3,
  boolean_T *rty_RLed, boolean_T *rty_GLed, boolean_T *rty_BLed)
{
  /* SignalConversion generated from: '<S10>/In1' */
  *rty_RLed = rtu_In1;

  /* SignalConversion generated from: '<S10>/In2' */
  *rty_GLed = rtu_In2;

  /* SignalConversion generated from: '<S10>/In3' */
  *rty_BLed = rtu_In3;
}

/* Model step function */
void Total_Pjt_step(void)
{
  /* If: '<S5>/If' incorporates:
   *  Inport: '<Root>/pushSW1'
   */
  if (!Total_Pjt_U.pushSW1) {
    /* Outport: '<Root>/blueLed' incorporates:
     *  DataTypeConversion: '<S5>/Data Type Conversion'
     *  Sin: '<S5>/Sine Wave'
     */
    Total_Pjt_Y.blueLed = (uint16_T)floor(sin((real_T)Total_Pjt_DW.counter * 2.0
      * 3.1415926535897931 / 300.0) * 25000.0 + 25000.0);
  } else {
    /* Outputs for IfAction SubSystem: '<S5>/sw_off' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* Outport: '<Root>/blueLed' incorporates:
     *  Constant: '<S5>/Zero'
     *  DataTypeConversion: '<S5>/Data Type Conversion'
     *  SignalConversion generated from: '<S8>/In1'
     */
    Total_Pjt_Y.blueLed = 0U;

    /* End of Outputs for SubSystem: '<S5>/sw_off' */
  }

  /* End of If: '<S5>/If' */

  /* If: '<S4>/If' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion'
   *  Inport: '<Root>/lightSensor'
   *  Outport: '<Root>/redLed'
   */
  Total_Pjt_Y.redLed = (uint16_T)(Total_Pjt_U.lightSensor <= 3000);

  /* If: '<S3>/If' incorporates:
   *  Inport: '<Root>/rotateResistor'
   */
  if (Total_Pjt_U.rotateResistor > 2600) {
    /* Outputs for IfAction SubSystem: '<S3>/Blue_On' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* Outport: '<Root>/BLed' incorporates:
     *  Constant: '<S3>/Constant'
     *  Constant: '<S3>/Constant1'
     *  Constant: '<S3>/Constant2'
     *  Outport: '<Root>/GLed'
     *  Outport: '<Root>/RLed'
     */
    Total_Pjt_Blue_On(false, false, true, &Total_Pjt_Y.RLed, &Total_Pjt_Y.GLed,
                      &Total_Pjt_Y.BLed);

    /* End of Outputs for SubSystem: '<S3>/Blue_On' */
  } else if (Total_Pjt_U.rotateResistor > 1300) {
    /* Outputs for IfAction SubSystem: '<S3>/Green_On' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    /* Outport: '<Root>/BLed' incorporates:
     *  Constant: '<S3>/Constant3'
     *  Constant: '<S3>/Constant4'
     *  Constant: '<S3>/Constant5'
     *  Outport: '<Root>/GLed'
     *  Outport: '<Root>/RLed'
     */
    Total_Pjt_Blue_On(false, true, false, &Total_Pjt_Y.RLed, &Total_Pjt_Y.GLed,
                      &Total_Pjt_Y.BLed);

    /* End of Outputs for SubSystem: '<S3>/Green_On' */
  } else {
    /* Outputs for IfAction SubSystem: '<S3>/Red_On' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    /* Outport: '<Root>/BLed' incorporates:
     *  Constant: '<S3>/Constant6'
     *  Constant: '<S3>/Constant7'
     *  Constant: '<S3>/Constant8'
     *  Outport: '<Root>/GLed'
     *  Outport: '<Root>/RLed'
     */
    Total_Pjt_Blue_On(true, false, false, &Total_Pjt_Y.RLed, &Total_Pjt_Y.GLed,
                      &Total_Pjt_Y.BLed);

    /* End of Outputs for SubSystem: '<S3>/Red_On' */
  }

  /* End of If: '<S3>/If' */

  /* Update for Sin: '<S5>/Sine Wave' */
  Total_Pjt_DW.counter++;
  if (Total_Pjt_DW.counter == 300) {
    Total_Pjt_DW.counter = 0;
  }

  /* End of Update for Sin: '<S5>/Sine Wave' */
}

/* Model initialize function */
void Total_Pjt_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Total_Pjt_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
