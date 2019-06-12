/*!
 *  @file    PASTestDriver.h
 *  @author  Gunasekaran.K
 *  @date    2017/08/01
 *  @version 0.1
 *
 *  @brief Providing facade class and its subsystem classes with data and its methods
 *
 *  @section This file contains the information of instances operation for data collection, timers, threads
 *
 *
 *
 */

#ifndef PASTESTDRIVER_H
#define PASTESTDRIVER_H

//! Include header files

/*! /struct PASJsonParamDefaultProperties
 *
 * The structure JsonParamDefaultProperties contains the default parameters of a json config file
 *
 * /
struct PASJsonParamDefaultProperties
{
    QString category_name;          //!< category name eg. "parameters"
    QString section_name;           //!< section name eg. "para1"
    QString param_actual_name;      //!< param actual name eg. "param_name"
    QString param_tool_name;        //!< tool name
    QString param_unit_name;        //!< unit name
    QString param_monitor_name;     //!< monitor name
    QString param_parser_name;      //!< parser name
    QString param_cmdargument_name; //!< commandline argument name
    QString param_rptdisplay_name;  //!< report display name
    QString param_grpahtype_name;   //!< type of graph name

};
/*! /struct PASJsonTaskProperties
 *
 * The structure JsonParamDefaultProperties contains the PAS Task parameters of a json config file
 *
 * /
struct PASJsonTaskProperties
{
    QString category_name;          //!< category name eg. "run1"
    QString section_name;           //!< section name eg. "para1"
    QString param_aut_name;         //!< param Application Under Test name
    QString param_scenarios_name;   //!< scenarios name
    QString param_local_config_path_name; //!< parameters local config file path name
    QString param_skip_name;        //!< skip true or fale name
    QString param_monitor_name;     //!< monitoring on/off name
 };

/*! /struct PASJsonScenariosProperties
 *
 * The structure PASJsonScenariosProperties contains the Scenarios parameters of a json config file
 *
 * /
struct PASJsonScenariosProperties
{
    QString category_name;          //!< category name eg. "scene1"
    QString section_name;           //!< section name eg. "test1"
    QString param_timeout_name;     //!< param timeout
    QString param_map_location_name;   //!< param in1
    QString param_start_node_name; //!< param in2
    QString param_end_node_name; //!< param in3
    QString param_expected_result_file_name;     //!< param exp1
 };


class jsonDataCollection
{
private:

};


class pasTestDriver
{
public:
    pasTestDriver();
};

#endif // PASTESTDRIVER_H
