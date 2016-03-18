#ifndef SOCKET_HPP
#define SOCKET_HPP

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdio.h>

#pragma comment(lib, "Ws2_32.lib")

class Socket {
public:
    initilize();
};

#endif // SOCKET_HPP
