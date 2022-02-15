SPI Communication between STM32NUCLEOF401RE and Aurdiuno uno boards.



STM32NUCLEOF401RE - Master

GPIO Connections - PB10(SCK), PC2(MISO), and PC3(MOSI), Used software slave management

Flow chart:

1.Enable SPI2, GPIOB and GPIOC Peripheral clock in RCC.

2.Configure SPI2, control register settings values.

3.Configure GPIO Pins on GPIO Mode register.

4.Hardware connection setup(No need to setup NSS pins , since used Software slave management)

Aurdiuno uno - Slave

PB2, PB3, PB4 and PB5.

connect chip select/slave select - Ground.

Execution Result:

![SPI Communication(STM32nucleoF401RE and Aurdiuno uno)](https://user-images.githubusercontent.com/63492659/153843503-af19ce6b-a17d-4991-8e70-323b34755c6a.png)
