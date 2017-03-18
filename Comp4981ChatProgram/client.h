#ifndef CLIENT_H
#define CLIENT_H

#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <QString>
#include <QDebug>

#define BUFLEN 1024
#define DEFAULT_USERNAME "Anonymous"

class Client
{
public:
    Client();
    bool initSocket(QString ipAddr, QString port);

    bool changeUserName(QString _name);
    QString getUserName();
    bool sendMessage(QString _message);
    bool isConnected();
    bool disconnect();
    bool recvMessage();
private:
    QString username;
    int sock;
    bool boolConnected;
};

#endif // CLIENT_H
