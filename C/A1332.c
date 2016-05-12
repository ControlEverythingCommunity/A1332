// Distributed with a free-will license.
// Use it any way you want, profit or free, provided it fits in the licenses of its associated works.
// A1332
// This code is designed to work with the A1332_I2CS I2C Mini Module available from ControlEverything.com.
// https://www.controleverything.com/content/Hall-Effect?sku=A1332_I2CS#tabs-0-product_tabset-2

#include <stdio.h>
#include <stdlib.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <fcntl.h>

void main() 
{
	// Create I2C bus
	int file;
	char *bus = "/dev/i2c-1";
	if((file = open(bus, O_RDWR)) < 0) 
	{
		printf("Failed to open the bus. \n");
		exit(1);
	}
	// Get I2C device, A1332 I2C address is 0x0C(12)
	ioctl(file, I2C_SLAVE, 0x0C);
    sleep(1);
    
    // Read 2 bytes of data
	// raw_adc msb, raw_adc lsb
    char data[2] = {0};
	
	// Checking valid data 
    while((data[0] == 0) && (data[1] ==0))
    {
	   if(read(file, data, 2) != 2)
	   {
		  printf("Erorr : Input/output Erorr \n");
	   }
    }
    
    // Convert the data to 12-bits
    int raw_adc = ((data[0] & 0x0F) * 256) + data[1];
    float angle = (raw_adc / 4096.0) * 360;

    // Output data to screen
    printf("Magnetic angle : %.2f \n", angle);
}
    