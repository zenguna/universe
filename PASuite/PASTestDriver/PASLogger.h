/*!
 *  @file    pasLogger.h
 *  @author  Gunasekaran.K
 *  @date    2019/06/12
 *  @version 0.1
 *
 *  @brief categorise the Logging
 *
 *  @section This file contains the declarations information of logging categorises
 *
 *  Here, the following 4 logging elements are classified
 *  category 1 (DEBUG) - Fine-grained statements concerning program state, typically used for debugging
 *  category 2 (INFO) - For informational statements concerning program state, representing program events or behavior tracking
 *  category 3 (WARNING) - statements that describe potentially harmful events or states in the program;
 *  category 4 (CRITICAL or FATAL) - statements representing the most severe of error conditions, assumedly resulting in program termination.
 *
 */

#ifndef PASLOGGER_H
#define PASLOGGER_H

//! Include header files
#include <QLoggingCategory>

//! Logging category declarations
Q_DECLARE_LOGGING_CATEGORY(logDebug)
Q_DECLARE_LOGGING_CATEGORY(logInfo)
Q_DECLARE_LOGGING_CATEGORY(logWarning)
Q_DECLARE_LOGGING_CATEGORY(logCritical)

#if 0
class pasLogger
{
public:
    pasLogger();
};
#endif

#endif // PASLOGGER_H

