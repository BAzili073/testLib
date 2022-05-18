#ifndef TESTLIB_H
#define TESTLIB_H
#include <QDebug>
#include <QObject>
#include <QString>

class TestLib : public QObject
{
    Q_OBJECT

  public:
    TestLib();
  public slots:
    void getPing();
  signals:
    void sendPong();
};

#endif // TESTLIB_H
