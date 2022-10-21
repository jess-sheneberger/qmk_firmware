# handwired/jess2

![handwired/jess2](imgur.com image replace me!)

*A short description of the keyboard/project*

* Keyboard Maintainer: [Jess Sheneberger](https://github.com/jess-sheneberger)
* Hardware Supported: RP2040

Make example for this keyboard (after setting up your build environment):

    make handwired/jess2:default

Flashing example for this keyboard:

    make handwired/jess2:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: QK_BOOT = apple button
