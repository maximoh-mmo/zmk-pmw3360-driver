/*
 * Copyright (c) 2025 Max Heinze
 */

 #ifndef ZEPHYR_INCLUDE_PMW3366_H_
 #define ZEPHYR_INCLUDE_PMW3366_H_
 
 /**
  * @file pmw3366.h
  *
  * @brief Header file for the pmw3366 driver.
  */
 
 #include <zephyr/drivers/sensor.h>
 
 #ifdef __cplusplus
 extern "C" {
 #endif
 
 /**
  * @defgroup pmw3366 PMW3366 motion sensor driver
  * @{
  * @brief PMW3366 motion sensor driver.
  */
 
 /** @brief Sensor specific attributes of PMW3366. */
 enum pmw3366_attribute {
     /** Sensor CPI for both X and Y axes. */
     PMW3366_ATTR_CPI = SENSOR_ATTR_PRIV_START,
 
     /** Enable or disable sleep modes. */
     PMW3366_ATTR_REST_ENABLE,
 
     /** Entering time from Run mode to REST1 mode [ms]. */
     PMW3366_ATTR_RUN_DOWNSHIFT_TIME,
 
     /** Entering time from REST1 mode to REST2 mode [ms]. */
     PMW3366_ATTR_REST1_DOWNSHIFT_TIME,
 
     /** Entering time from REST2 mode to REST3 mode [ms]. */
     PMW3366_ATTR_REST2_DOWNSHIFT_TIME,
 
     /** Sampling frequency time during REST1 mode [ms]. */
     PMW3366_ATTR_REST1_SAMPLE_TIME,
 
     /** Sampling frequency time during REST2 mode [ms]. */
     PMW3366_ATTR_REST2_SAMPLE_TIME,
 
     /** Sampling frequency time during REST3 mode [ms]. */
     PMW3366_ATTR_REST3_SAMPLE_TIME,
 };
 
 /**
  * @}
  */
 
 #ifdef __cplusplus

 
 }
 #endif
 
 #endif /* ZEPHYR_INCLUDE_PMW3366_H_ */