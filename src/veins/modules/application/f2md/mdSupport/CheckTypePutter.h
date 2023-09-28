/*******************************************************************************
 * @author  Philip Adamczyk
 * @email   ph.adamczyk@campus.lmu.de
 * @date    27/09/2023
 * @version 1.0
 *
 * SCA (Secure Cooperative Autonomous systems)
 * Copyright (c) 2013, 2018 Institut de Recherche Technologique SystemX
 * All rights reserved.
 *******************************************************************************/

#ifndef __VEINS_CheckTypePutter_H_
#define __VEINS_CheckTypePutter_H_

#include <tuple>
#include <omnetpp.h>
#include <stdio.h>
#include <stdlib.h>     /* atof */
#include <boost/algorithm/string.hpp>
#include <sys/types.h>
#include <sys/stat.h>
#include <veins/modules/application/f2md/mdSupport/BsmPrintable.h>
#include <veins/modules/application/f2md/mdSupport/HTTPRequest.h>
#include <iostream>
#include <string>
#include <vector>


using namespace veins;
using namespace omnetpp;

class CheckTypePutter{
public:

    int port = 8888;
    std::string host = "localhost";
    double minFactor = 1;

    LAddress::L2Type myId;

    HTTPRequest httpr = HTTPRequest(8888, "localhost");

    BsmPrintable bsmPrint;

    CheckTypePutter(int version ,int port, std::string host);

    void PutCheckType(std::string checkType);

    void setMyId(LAddress::L2Type myId);

    double getMinFactor();
};

#endif