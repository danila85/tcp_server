#include <iostream>
#include "server/server.h"

using namespace std;

int main()
{
    Server::ServerPtr serverPtr = CreateServer(54000);
    if (!serverPtr->Run())
        cerr << serverPtr->GetErrorText();

    return 0;
}

