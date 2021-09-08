# I2C_UART_Converter
I2C-UART Converter with Grove Connector


## 概要 
  * マイコンのI2CポートをUART通信ポートに変換するアダプタです
  * マイコンからI2Cデバイスとして制御し、UARTのボーレート設定、送信、受信処理をすることができます
  * I2C/UARTプロトコルブリッジ[SC16IS740][1]を搭載しています
  * I2CはGrove互換コネクタとなっており、3.3V/５Vの電源、通信に対応しています
  * I2C/UARTプロトコルブリッジSC16IS740は64bytesのバッファを内蔵しています
  * 7.3728MHzの水晶発振子を搭載しており、マイコンのメインクロックから独立してUARTのボーレート設定ができます  

## 注意 
  * Arduino Uno以外の場合はサンプルコード内SC16IS750.cppの29行目付近のWire定義を必要に応じて変更してください  


<img src="https://raw.githubusercontent.com/meerstern/I2C_UART_Converter/master/IR.jpg" width="360">
   
<img src="https://raw.githubusercontent.com/meerstern/I2C_UART_Converter/master/IR_2.jpg" width="360">
    
<img src="https://raw.githubusercontent.com/meerstern/I2C_UART_Converter/master/img1.jpg" width="360">

<img src="https://raw.githubusercontent.com/meerstern/I2C_UART_Converter/master/img2.jpg" width="360">
    
[1]: https://www.nxp.com/products/peripherals-and-logic/signal-chain/bridges/single-uart-with-i2c-bus-spi-interface-64-bytes-of-transmit-and-receive-fifos-irda-sir-built-in-support:SC16IS740_750_760 "*1"

MIT Lisense
