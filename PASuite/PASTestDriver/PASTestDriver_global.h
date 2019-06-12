/*!
 *  @file    PASTestDriver_global.h
 *  @author  Gunasekaran.K
 *  @date    2017/08/01
 *  @version 0.1
 *
 *  @brief static , non-static global variable declarations
 *
 *  @section
 *
 *
 *
 */

#ifndef PASTESTDRIVER_GLOBAL_HH
#define PASTESTDRIVER_GLOBAL_HH

//extend the visibility of variables in a c file for compiler hint
#ifdef __cplusplus
#   define EXTERN extern "C"
#else
#   define EXTERN extern
#endif

//! Include header files
#include <stdio.h>

#include <QtCore/qglobal.h>


#if defined(PASTESTDRIVER_LIBRARY)
#  define PASTESTDRIVERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define PASTESTDRIVERSHARED_EXPORT Q_DECL_IMPORT
#endif

//! /enum ReturnMessages.
/*! Return types declaration. */
enum ReturnMessages {
  OK = 0,               /*!< Enum value OK. */
  OUT_OF_MEMORY = 1,    /*!< Enum value OUT_OF_MEMORY. */
  MALFORMED_INPUT = 2,  /*!< Enum value MALFORMED_INPUT. */
  SERVER_ERROR = 3,     /*!< Enum value SERVER_ERROR. */
  CRITICAL_ERROR = 4    /*!< Enum value CRITICAL_ERROR. */
};

#endif // PASTESTDRIVER_GLOBAL_HH
