#include <iostream>
#include <enet/enet.h>
#include <thread>
#include "Client/DummyClient.h"

int main() {
    if (enet_initialize () != 0)
    {
        fprintf (stderr, "An error occurred while initializing ENet.\n");
        return EXIT_FAILURE;
    }
    atexit (enet_deinitialize);

    DummyClient client = DummyClient();

    this_thread::sleep_for(chrono::seconds(3));
    client.connect("127.0.0.1", 5450);
    client.sendPacket("Hello");
}
