# analog driver

A photoreactor driver board with a physical knob to adjust light intensity via modulation of constant current.

## PCB

This PCB was designed using KiCAD version 5.
Refer to `driver.pdf` for schematic.
PCB images generated with [tracespace](https://github.com/tracespace/tracespace) follow.

<img src="./driver-.top.svg" width="100%"/>
<img src="./driver-.bottom.svg" width="100%"/>

## Bill of Materials

| reference      | value         | manufacturer | part number       | price | vendors |
| :------------- | :------------ | :----------- | :---------------- | :---- | :------ |
| C2             | 10u           | Yageo        | CC1206KKX7R8BB106 | $0.25 | [DigiKey](https://www.digikey.com/en/products/detail/yageo/CC1206KKX7R8BB106/5195365?s=N4IgTCBcDaIMJwIxgAwDYDSGAaB2ASgBwBCxi6IAugL5A) [Mouser](https://www.mouser.com/ProductDetail/Yageo/CC1206KKX7R8BB106/?qs=%2Fha2pyFadujG%252BB25mNGWlTAfaj3wXYmzjlPMfFLRNq4azOfH13S4tw%3D%3D) |
| D1             | (red)         | Lite-On      | LTST-C230KRKT     | $0.25 | [DigiKey](https://www.digikey.com/en/products/detail/lite-on-inc/LTST-C230KRKT/386857?s=N4IgTCBcDaIDIBUDKCC0BhMBmADAaQCU8EQBdAXyA) [Mouser](https://www.mouser.com/ProductDetail/Lite-On/LTST-C230KRKT/?qs=%2Fha2pyFadujtt9TjjkxDnLsTSvKz5QHldTfy80PY7mPtEP7ka44l7w%3D%3D) |
| J3, J4         | Barrel Jack   | CUI          | PJ-002A           | $1.50 | [DigiKey](https://www.digikey.com/en/products/detail/cui-devices/PJ-002A/96962) [Mouser](https://www.mouser.com/ProductDetail/CUI-Devices/PJ-002A/?qs=WyjlAZoYn51CKfAix9Mngw%3D%3D) |
| J5             | fan connector |              |                   |       |         |
| J7             | LED connector |              |                   |       |         |
| R1             | 6.8k          | Yageo        | RC1206FR-076K8L   | $0.10 | [DigiKey](https://www.digikey.com/en/products/detail/yageo/RC1206FR-076K8L/729028) |
| R2             | 100           | Yageo        | RC1206FR-07100RL  | $0.10 | [DigiKey](https://www.digikey.com/en/products/detail/yageo/RC1206FR-07100RL/728491?s=N4IgTCBcDaIAQCUDCBGMAGAbAMQQWnQHYV10EAZEAXQF8g) |
| R5             | 1k            | Yageo        | RC1206FR-071KL    | $0.10 | [DigiKey](https://www.digikey.com/en/products/detail/yageo/RC1206FR-071KL/728387?s=N4IgTCBcDaIEoGECMYAMA2AYnAtKg7EgNIAyIAugL5A) |
| RV1            | 2.2k          | Bourns       | 3362P-1-202TLF    | $3.00 | [DigiKey](https://www.digikey.com/en/products/detail/bourns-inc/3362P-1-202TLF/1232538?s=N4IgTCBcDaIMxwGxgAoFoCMawAYwBUAZAMRAF0BfIA) [Newark](https://www.newark.com/bourns/3362p-1-202tlf/trimmer-potentiometer-2kohm-10/dp/33M2835) |
| TP1            | (yellow)      | Keystone     | 5014              | $0.50 | [DigiKey](https://www.digikey.com/en/products/detail/keystone-electronics/5014/255336) |
| TP2            | (red)         | Keystone     | 5010              | $0.50 | [DigiKey](https://www.digikey.com/en/products/detail/keystone-electronics/5010/255332) |
| TP3            | (black)       | Keystone     | 5011              | $0.50 | [DigiKey](https://www.digikey.com/en/products/detail/keystone-electronics/5011/255333) |        |
| U2             | LED driver    | Mean Well    | LDD-1000L         | $6.00 | [DigiKey](https://www.digikey.com/en/products/detail/mean-well-usa-inc/LDD-1000L/7704722) [Allied](https://www.alliedelec.com/product/mean-well/ldd-1000l/70345765/) |

All prices are extended estimates in USD.
In general these are overestimates, so this should be an upper-estimate on cost.
Many of these components can be substituted, so take the above as suggestions.
Boards themselves can be printed for approximately $5 each.

## Changelog

### Unprinted

### Revision B

#### Fixed
- sign of LED terminals on silkscreen
- voltage divider: R1 to 6.8k R2 to 100 ohm
- adjusted voltage divider silkscreen

### Revision A

#### Added
- initial design
