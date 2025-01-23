/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * File: Total_Pjt.h
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

#ifndef RTW_HEADER_Total_Pjt_h_
#define RTW_HEADER_Total_Pjt_h_
#ifndef Total_Pjt_COMMON_INCLUDES_
#define Total_Pjt_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Total_Pjt_COMMON_INCLUDES_ */

#include "Total_Pjt_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int32_T counter;                     /* '<S5>/Sine Wave' */
} DW_Total_Pjt_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T pushSW1;                   /* '<Root>/pushSW1' */
  uint16_T lightSensor;                /* '<Root>/lightSensor' */
  uint16_T rotateResistor;             /* '<Root>/rotateResistor' */
} ExtU_Total_Pjt_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint16_T blueLed;                    /* '<Root>/blueLed' */
  uint16_T redLed;                     /* '<Root>/redLed' */
  boolean_T RLed;                      /* '<Root>/RLed' */
  boolean_T GLed;                      /* '<Root>/GLed' */
  boolean_T BLed;                      /* '<Root>/BLed' */
} ExtY_Total_Pjt_T;

/* Real-time Model Data Structure */
struct tag_RTM_Total_Pjt_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_Total_Pjt_T Total_Pjt_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Total_Pjt_T Total_Pjt_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Total_Pjt_T Total_Pjt_Y;

/* Model entry point functions */
extern void Total_Pjt_initialize(void);
extern void Total_Pjt_step(void);
extern void Total_Pjt_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Total_Pjt_T *const Total_Pjt_M;

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
 * '<Root>' : 'Total_Pjt'
 * '<S1>'   : 'Total_Pjt/Subsystem1'
 * '<S2>'   : 'Total_Pjt/Subsystem1/Subsystem'
 * '<S3>'   : 'Total_Pjt/Subsystem1/light_redLed'
 * '<S4>'   : 'Total_Pjt/Subsystem1/Subsystem/light_redLed'
 * '<S5>'   : 'Total_Pjt/Subsystem1/Subsystem/sw1_blueLed'
 * '<S6>'   : 'Total_Pjt/Subsystem1/Subsystem/light_redLed/bright'
 * '<S7>'   : 'Total_Pjt/Subsystem1/Subsystem/light_redLed/dark'
 * '<S8>'   : 'Total_Pjt/Subsystem1/Subsystem/sw1_blueLed/sw_off'
 * '<S9>'   : 'Total_Pjt/Subsystem1/Subsystem/sw1_blueLed/sw_on'
 * '<S10>'  : 'Total_Pjt/Subsystem1/light_redLed/Blue_On'
 * '<S11>'  : 'Total_Pjt/Subsystem1/light_redLed/Green_On'
 * '<S12>'  : 'Total_Pjt/Subsystem1/light_redLed/Red_On'
 */
#endif                                 /* RTW_HEADER_Total_Pjt_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
