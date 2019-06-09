#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <string>
#include <cstdlib>

#include "utils/fd_wrapper.hpp"

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

class client {

public:

    static unsigned int const REPEAT;
    static unsigned int const BUFFER_SIZE;
    static unsigned int const EPOLL_MAX_EVENTS;

    client();

    ~client();

    void connect(std::string const &address, uint16_t port);

    void send(std::string const &message);

    void disconnect();

private:

    fd_wrapper socket_desc;
    sockaddr_in server_address;

};

#endif // CLIENT_HPP
