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

#include <veins/modules/application/f2md/mdSupport/CheckTypePutter.h>

using namespace std;
using namespace boost;

CheckTypePutter::CheckTypePutter(int version, int port, std::string host) {
    this->port = port;
    this->host = host;
    httpr = HTTPRequest(port, host);
}

void CheckTypePutter::setMyId(LAddress::L2Type myId) {
    this->myId = myId;
}

void CheckTypePutter::PutCheckType(string checkType) {

    std::string response = httpr.Request(checkType, "PUT");

    std::cout << "-+-+-+-+-+-+-+-+--+-+-Type Put:" << checkType << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n";
}

double CheckTypePutter::getMinFactor() {
    return minFactor;
}
