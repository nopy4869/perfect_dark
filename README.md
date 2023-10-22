# Perfect Dark port

This repository contains a work-in-progress port of the [Perfect Dark decompilation](https://github.com/n64decomp/perfect_dark) to modern platforms.

To run the port, you must already have a Perfect Dark ROM, specifically the ntsc-final/revision 1 version  
(md5 `e03b088b6ac9e0080440efed07c1e40f`).

## Status

Currently only 32-bit platforms are supported, namely x86 Windows and Linux.
Note that 32-bit binaries will still work on 64-bit versions of those platforms,
though you might have to install some additional libraries.

The game is in a somewhat functional but probably unstable state.
There are major graphical issues, minor audio issues and possibly other issues.

There are currently no "extra features" implemented
except for janky mouselook, arbitrary resolution support (with partial widescreen support), some extra controls
and somewhat expanded heap size.

## Download

Latest [automatic builds](https://github.com/fgsfdsfgs/perfect_dark/actions) for supported platforms:
* [i686-windows](https://nightly.link/fgsfdsfgs/perfect_dark/workflows/c-cpp/port/pd-i686-windows.zip)
* [i686-linux](https://nightly.link/fgsfdsfgs/perfect_dark/workflows/c-cpp/port/pd-i686-linux.zip)

## Running

You must already have a Perfect Dark ROM to run the game, as specified above.

1. Create a directory named `data` next to `pd.exe`.
2. Put your Perfect Dark ROM named `pd.ntsc-final.z64` into it.
3. Run `pd.exe`.

## Controls

1964GEPD-style and Xbox-style bindings are implemented.

N64 pad buttons X and Y (or `X_BUTTON`, `Y_BUTTON` in the code) refer to the reserved buttons `0x40` and `0x80`, which are also leveraged by 1964GEPD.

Support for one controller, two-stick configurations are enabled for 1.2.


| Action           | Keyboard and mouse   | Xbox pad            | N64 pad              |
| -                | -                    | -                   | -                    |
| Fire / Accept    | LMB/Space            | RT                  | Z Trigger            |
| Aim mode         | RMB/Z                | LT                  | R Trigger            |
| Use / Cancel     | E                    | N/A                 | B                    |
| Use / Accept     | N/A                  | A                   | A                    |
| Crouch cycle     | N/A                  | L3                  | `0x80000000` (Extra) |
| Half-Crouch      | Shift                | N/A                 | `0x40000000` (Extra) |
| Full-Crouch      | Control              | N/A                 | `0x20000000` (Extra) |
| Reload           | R                    | X                   | X `(0x40)`           |
| Previous weapon  | Mousewheel forward   | B                   | D-Left               |
| Next weapon      | Mousewheel back      | Y                   | Y `(0x80)`           |
| Radial menu      | Q                    | LB                  | D-Down               |
| Alt fire mode    | F                    | RB                  | L Trigger            |
| Alt-fire oneshot | F + LMB or E + LMB   | A + RT or RB + RT   | A + Z, L + Z         |
| Quick-detonate   | E + Q                | A + B               | A + D-Left           |

## Building

### Windows

1. Install [MSYS2](https://www.msys2.org).
2. Open the `MINGW32` prompt. (**NOTE:** _not_ the `MSYS` prompt or the `MINGW64` prompt)
3. Install dependencies: `pacman -S mingw-w64-i686-toolchain mingw-w64-i686-SDL2 mingw-w64-i686-zlib make git`
4. Run `make -f Makefile.port` in the `perfect_dark` directory.
5. The resulting executable will be at `build/ntsc-final-port/pd.exe`.

### Linux

1. Ensure you have gcc, g++ and 32-bit versions of SDL2, libGL and ZLib installed on your system.
   * On a 64-bit system you also need to have `gcc-multilib` and `g++-multilib` (or your distro's analogues) installed.
2. Run the following command in the `perfect_dark` directory:
   * On a 64-bit system: ```make -f Makefile.port TARGET_PLATFORM=i686-linux```
   * On a 32-bit system: ```make -f Makefile.port```
3. The resulting executable will be at `build/ntsc-final-port/pd.exe`.  

Currently only `i686-linux` and `i686-windows` are supported, using `gcc -m32` and `i686-w64-mingw32-gcc` as compilers, respectively.  
Alternate compilers can be specified by passing `TOOLCHAIN=i686-whatever-` as a command line argument.

## Credits

* the original [decompilation project](https://github.com/n64decomp/perfect_dark) authors;
* doomhack for the only other publicly available [PD porting effort](https://github.com/doomhack/perfect_dark) I could find;
* [sm64-port](https://github.com/sm64-port/sm64-port) authors for the audio mixer and some other changes;
* [Ship of Harkinian team](https://github.com/Kenix3/libultraship/tree/main/src/graphic/Fast3D), Emill and MaikelChan for the libultraship version of fast3d that this port uses;
* lieff for [minimp3](https://github.com/lieff/minimp3);
* probably more I'm forgetting.
