//Aurdiuno Uno as a slave

#include<SPI.h>
#include<stdint.h>

uint8_t data;
uint8_t data1 = 0x02;
void initSPI_Slave() {
  //DDRB &= ~((1<<2)|(1<<3)|(1<<5)); // SCK, MOSI and  SS/CS are inputs
  DDRB |= (1 << 4); // MISO output
  SPCR &= ~(1 << MSTR); // SPI (slave mode)
  SPCR |= (1 << 0) | (1 << 1); // (fosc/16)
  SPCR |= (1 << SPE); // Enable SPI
}
void setup() {
  //Initialize slave
  initSPI_Slave();
  Serial.begin(9600);
}
void loop() {
  //SPDR - SPI data register
  Serial.println("Current SPDR Value is:");
  Serial.println(SPDR, HEX);
  //Check whether communication over or not(SPIF flag of status register will send if communication over)
  while (!(SPSR & (1 << SPIF))); // Tunggu data masuk
  data = SPDR;  //read SPDR data register value.
  Serial.println("Data Received ==> ");
  Serial.println(data, HEX);


}
