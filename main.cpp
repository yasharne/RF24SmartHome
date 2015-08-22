#include <string>
#include <getopt.h>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <./RF24/RF24.h>

using namespace std;

const int pipesNumber = 2;
RF24 radio(RPI_V2_GPIO_P1_22, RPI_V2_GPIO_P1_24, BCM2835_SPI_SPEED_8MHZ);
const uint64_t pipes[pipesNumber] = { 0xF0F0F0F0E1LL, 0xF0F0F0F0D2LL };
unsigned long gotMessage;

void setup(void)
{
  
}

int main(int argc, char **argv)
{
    std::cout << "Hello, world!" << std::endl;
    return 0;
}
