# andimoto keyboards

![andimoto keyboards](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [andimoto](https://github.com/andimoto/qmk_firmware/tree/andimoto-keyboards/keyboards/andimoto)
* Hardware Supported: *Arduino Pro Micro / Teensy2*
* Hardware Availability: *https://github.com/andimoto/keebcu*

## Supported Keyboards
- andimoto7583 (ArduinoProMicro)
- andimotoSmallTKL (ArduinoProMicro)
- andimotoSmallTKLiso (Teensy2)


```
Note: Installing gcc-avr on Linux Mint 19.1 (maybe also other versions affected) with installed gcc-arm-embedded, gives an error:

... dpkg: Fehler beim Bearbeiten des Archivs /var/cache/apt/archives/gcc-avr_1%3a5.4.0+Atmel3.6.0-1build1_amd64.deb (--unpack):
 Versuch, »/usr/lib/libcc1.so.0.0.0« zu überschreiben, welches auch in Paket gcc-arm-embedded 7-2018q2-1~bionic1 ...

 Workaround: Install deb package with force-all:
 sudo dpkg --force-all -i /var/cache/apt/archives/gcc-avr_1%3a5.4.0+Atmel3.6.0-1build1_amd64.deb
```

## Create new andimoto keyboard
- Go to keyboards/andimoto
- copy one of the available keyboards and rename it to the new name
- rename necessary files and configs
- set pin config and usb vendor name in config.h
- set bootloader variable in rules.mk
  - *Arduino Pro Micro: caterina*
  - *Teensy2: halfkay*
- change LAYOUT define in \<keyboard name>.h
- open keymap.c in keymaps/default and set new layout array
  - if using ISO DE (etc.) do:
    __*#include "keymap_german.h"*__
- build: make andimoto/\<keyboard name>:default
-flash: make andimoto/\<keyboard name>:default:flash





Please go into keyboard directory for further informations.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
