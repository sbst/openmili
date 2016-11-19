#include <RF24/RF24.h>
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <time.h>

#include "PL1167_nRF24.h"
#include "MiLightRadio.h"

using namespace std;

RF24 radio(RPI_V2_GPIO_P1_15,BCM2835_SPI_CS0, BCM2835_SPI_SPEED_8MHZ);

int main()
{
	radio.begin();
	radio.printDetails();
	return 0;
}
