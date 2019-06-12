/*!
 *  @file    main.cpp
 *  @author  Gunasekaran.K
 *  @date    2017/07/30
 *  @version 0.1
 *
 *  @brief PASuite demo
 *
 *  @section This file involves the demonstration process of PASuite
 *
 *  In this demonstration process, the following operations are performed
 *  - All the initial setup of instances creations and flush operations
 *  - Event manager operations of config files reading, extracting, output formatting
 *  - Tool adapter process of performance measurements; profiling,tracing and performance data file creation
 *  - Report generation of performance measurement results
 *
 */
/**********************************************************************************
 * Copyright (c) 
 *
 * This file is part of passuite.
 *
 * passuite is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License version 1.0 as published by the Free Software Foundation.
 *
 * passuite is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with passuite; if not, write to the Free Software
 * Foundation, Inc., xxx Street, xxx Floor, xxx place, postal code xxx  country xxxx
 **********************************************************************************/


//! Include Qt header files
#include <QCoreApplication>
#include <QStringList>
#include <QFile>
#include <QDir>
#include <QTextStream>
#include <QDateTime>
#include <QLoggingCategory>
#include <QtDebug>
#include <QDebug>

//! Include c++ header files
#include <iostream>

//! Include PASuite Header files
#include "../PASTestDriver/PASLogger.h"
#include "../PASPerfLib/PASPerfLib.h"
#include "../PASTestDriver/PASTestDriver.h"
#include "../PASTestDriver/PASTestDriver_global.h"


//! Namespace addition
using namespace std;

//! Smart pointer to the log file
QScopedPointer<QFile>   m_logFile;

//! A function to Declare a Handler
/*!
      A more elaborate description of the constructor.
 */
void messageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg);

//! A function to initialize all instances
/*!
      All the class instances, threads, timers & state monitors are initilized.
 */
int Initialize();

//! A function to allocate memory for all classes instances
/*!
      memory allocation for data collection objects, lists, application profiles, threads, state monitors.
 */
int Start();

//! A function to perform PASuite process
/*!
      initiate the process to collect parameters data with its values, status monitoring, thread executions & application executions.
 */
int Execute();

//! A function to finish PASuite process
/*!
      confirm the de-allocation of memory, instances destroy,application status completed/suspended or cancelled
 */
int Stop();

int main(int argc, char *argv[])
{
  QCoreApplication app(argc, argv);
  Q_UNUSED(app);

#if 0
  QStringList args = app.arguments();
  if (args.count() == 2)
    {
          std::cout << "This is a test demo" << std::endl;
          return 1;
    }
 std::cout << "Welcomes to PASuite...Happycoding" << std::endl;
#endif

 //Local variable declarations
 uint ret = OK;

 //! Create the log file,
 //! Carefully check that,  What is the path for the file
m_logFile.reset(new QFile("logFile.txt"));
//! Open the log file
if (!m_logFile.data()->open(QFile::Append | QFile::Text)) {
        cerr << "Cannot open file for writing: "
                  << qPrintable(m_logFile.take()->errorString()) << std::endl;
        return OK;
    }
//! Create the Message handler
#if 0
    ret = qInstallMessageHandler(messageHandler);
    if(ret != OK) {
        cerr << "Message Handler execution failure. " <<endl;
        return SERVER_ERROR;
    }
#endif
    qInstallMessageHandler(messageHandler);
    qInfo(logInfo()) << "PASuite Demo Start";   //!< PASuite Demo Started

    // Initialization for class instances, threads, timers & state monitors
    ret = Initialize();
    if(ret != OK) {
        qDebug(logDebug()) << "Initialze() Error ";
        return SERVER_ERROR;
    }
    // memory allocation for data collection objects, lists, application profiles, threads, statemonitors
    ret = Start();
    if(ret != OK) {
        qDebug(logDebug()) << "Start() Error ";
        return SERVER_ERROR;
    }
    // initiate the process to collect parameters data with its values, status monitoring, thread executions & application executions.
    ret = Execute();
    if(ret != OK) {
        qDebug(logDebug()) << "Execute() Error ";
        return SERVER_ERROR;
    }
    // confirm the de-allocation of memory, instances destroy,application status completed/suspended or cancelled
    ret = Stop();
    if(ret != OK) {
        qCritical(logCritical()) << "Stop() Error ";
        return CRITICAL_ERROR;
    }
    qInfo(logInfo()) << "PASuite Demo End";     //!< PASuite Demo End

    return OK;
}
//! A function definition
/*! messageHandler function implementation comprises the functionalities of log file read,open & write to store the
 * message information. Also it stores the date and time informations along with each context.
 * /param [in] type Qt message types
 * /param [in] context Message contextual information
 * /param [in] msg Logging messages
 * /param [out] out QTextStream text stream which contains the logfile data
 * /return void
 */
void messageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    // Open the write stream to a file
    QTextStream out(m_logFile.data());
    // Record the recording date
    out << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ");
    // Determine the Message Type levels

    if (type >= 0)
    {
        switch (type)
        {
        case QtInfoMsg:     out << "INF "; break;
        case QtDebugMsg:    out << "DBG "; break;
        case QtWarningMsg:  out << "WRN "; break;
        case QtCriticalMsg: out << "CRT "; break;
        case QtFatalMsg:    out << "FTL "; break;
        }
    }
    else {
        std::cerr << "Arguments is having invalid values: " << std::endl;
        out.flush();
    }
    // Write the Message information into the file as per the order
#if 0
    out << context.version<<":"<<context.file<<":"<<context.line<<":"<<context.function<<":"<<context.category << ": "
        << msg << endl;
#endif
        out <<":"<<context.file<<":"<<context.line<<":"<<context.function<<":"<<context.category << ": " << msg << endl;
        //qInfo(context.QMessageLogContext, "an informational message");
        //qCInfo(context.file) << "an informational message";

    out.flush();    // Clear the buffered data
}

//! A function definition
/*! All the class instances, threads, timers & state monitors are initilized.
 * /param [in] No Arguments
 * /param [out] No Arguments
 * /return OK
 */
int Initialize()
{
    qInfo(logInfo()) << " Enter";

    qInfo(logInfo()) << " Exit";
    return OK;
}
//! A function definition
/*! memory allocation for data collection objects, lists, application profiles, threads, state monitors.
 * /param [in] No Arguments
 * /param [out] No Arguments
 * /return OK
 */
int Start()
{
    qInfo(logInfo()) << " Enter";

    qInfo(logInfo()) << " Exit";
    return OK;
}
//! A function definition
/*! initiate the process to collect parameters data with its values, status monitoring, thread executions & application executions.
 * /param [in] No Arguments
 * /param [out] No Arguments
 * /return OK
 */
int Execute()
{
    qInfo(logInfo()) << " Enter";

    qInfo(logInfo()) << " Exit";
    return OK;
}
//! A function definition
/*! confirm the de-allocation of memory, instances destroy,application status completed/suspended or cancelled
 * /param [in] No Arguments
 * /param [out] No Arguments
 * /return OK
 */
int Stop()
{
    qInfo(logInfo()) << " Enter";

    qInfo(logInfo()) << " Exit";
    return OK;
}
