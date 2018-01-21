# Getting started with Blinky on mbed OS using CLion IDE

The example is specific for an xdot target, but can be easily update for any supported mbed target.

We are not using CMake to build the project, **but only to enable CLion features**.

Original repository:
 
https://developer.mbed.org/teams/mbed-os-examples/code/mbed-os-example-blinky/

# Setup

Please follow the tutorial https://hackmd.io/s/r196eUWBG

# CLion IDE

1. Clone this repo.
1. Import the project from source.
1. Select project files: only `main.cpp` for now.
1. Create a new Bash Run/Debug Configuration to be able to build from within the IDE.
    1. Script: `flashit`
    1. Interpreter path: `/bin/bash`
    1. Program arguments: `-t=xdot -c`
1. Run that! You should see stuff built in `BUILD` folder.
1. Take this opportunity to exclude it from CLion project. Right click on it - Mark Directory as - Excluded.
1. Create another Configuration for Flash/Upload. (just drop the `-c` option from program arguments).

## Tips

* Make sure you ignore the default `cmake-build-debug` folder using `.mbedignore` file.
* Add an `include_directories()` to `CMakeLists.txt`, so that CLion knows where to find headers.
    1. Look for the `BUILD/xdot_l151cc/GCC_ARM/.includes_*.txt` file.
    1. I used a scratch file (Cmd+Shift+N) to copy all the content and I apply some simple regexp find and replace, to make it cleaner.
    1. Use those folders as arguments for `include_directories()` in `CMakeLists.txt`.
* Take the `device_has` feature list for your target device, from `mbed-os/targets/targets.json` and `add_definitions()` in `CMakeLists.txt`.
* Add sources to the `${SOURCE_FILES}` in `CMakeLists.txt` if you want refactoring support. Not recommended, but you can use globbing, since you just use cmake lists for CLion’s features.