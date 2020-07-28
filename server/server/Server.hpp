//
//  Server.hpp
//  server
//
//  Created by user on 2020/7/28.
//  Copyright © 2020 user. All rights reserved.
//

#ifndef Server_hpp
#define Server_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <iostream>

class Server {
public:
    int32_t Init();
private:
    struct sockaddr mSockAddr;
    int32_t mSockFd;
    
};
#endif /* Server_hpp */
