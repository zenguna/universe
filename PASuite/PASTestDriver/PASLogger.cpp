/*!
 *  @file    pasLogger.cpp
 *  @author  Gunasekaran.K
 *  @date    2017/07/30
 *  @version 0.1
 *
 *  @brief categorise the Logging
 *
 *  @section This file contains the definition information of logging categorises with reference to the Qt Logging
 *
 *  Here, the following 4 logging elements are classified
 *  category 1 (DEBUG) - Fine-grained statements concerning program state, typically used for debugging
 *  category 2 (INFO) - For informational statements concerning program state, representing program events or behavior tracking
 *  category 3 (WARNING) - statements that describe potentially harmful events or states in the program;
 *  category 4 (CRITICAL or FATAL) - statements representing the most severe of error conditions, assumedly resulting in program termination.
 *
 */

//! include the header files
#include "PASLogger.h"

//! Log categories definitions
Q_LOGGING_CATEGORY(logDebug,    "Debug")
Q_LOGGING_CATEGORY(logInfo,     "Info")
Q_LOGGING_CATEGORY(logWarning,  "Warning")
Q_LOGGING_CATEGORY(logCritical, "Critical")


#if 0
pasLogger::pasLogger()
{

}
#endif
