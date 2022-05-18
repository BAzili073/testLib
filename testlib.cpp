#include "testlib.h"

TestLib::TestLib()
{
}

void TestLib::getPing()
{
    QString sendStr("testlib: test slot received");
    qDebug() << sendStr;
    emit sendPong();
}
