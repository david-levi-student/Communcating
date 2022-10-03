#include <iostream>
#include <string>
#include <SDL.h>
#include <SDL_net.h>

//go into command prompt and type 'ipconfig' to see your address
//host and port number
IPaddress ip;

const int port = 1234;

int main(int argc, char* argv[]) //Make a client solution and copy all this into it
{
    if (SDL_Init(SDL_INIT_EVERYTHING) == -1)
    {
        std::cout << "SDL did not initialize properly." << std::endl;
        system("pause");
        return 0;
    }

    else if (SDLNet_Init() == -1);
    {
        std::cout << "Networking sub-system did not initialize properly." << std::endl;
        system("pause");
        return 0;
    }

    SDLNet_Quit();
    SDL_Quit();

    /*client-specific; put this in client solution
    
    if (SDLNet_ResolveHost(&ip, local ip address, port) == -1);
    {
        std::cout << "Could establish connection to server" << std::endl;
        system("pause");
        return 0;
    }*/

    //Server specific, don't copy
    //====================================================
    TCPsocket listenSocket = nullptr;
    TCPsocket clientSocket = nullptr;
    
    //setup with specific port number
    //as host we use nullptr
    if (SDLNet_ResolveHost(&ip, nullptr, port) == -1);
    {
        std::cout << "Could not create server" << std::endl;
        system("pause");
        return 0;
    }

    listenSocket = SDLNet_TCP_Open(&ip);

    if (!listenSocket)
    {
        std::cout << "Could not open listening socket" << std::endl << std::endl;
        system("pause");
        return 0;
    }

    //====================================================

    system("pause");
    return 0;
}