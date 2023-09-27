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

#include <veins/modules/application/f2md/mdSupport/MlTypeRetriever.h>

using namespace std;
using namespace boost;

MlTypeRetriever::MlTypeRetriever(int version, int port, std::string host) {
    this->port = port;
    this->host = host;
    httpr = HTTPRequest(port, host);
}

void MlTypeRetriever::setMyId(LAddress::L2Type myId) {
    this->myId = myId;
}

string MlTypeRetriever::GetMlType() {

    std::string response = httpr.Request("","GET");

    std::cout << "-+-+-+-+-+-+-+-+--+-+-Type response:" << response << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n";

    return response;
}

double MlTypeRetriever::getMinFactor() {
    return minFactor;
}
