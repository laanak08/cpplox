# Nystrom's [Crafting Interpreters](http://www.craftinginterpreters.com/): An Implementation in C++

## Build

    mkdir build
    cd build

    cmake ..
    cmake --build .

Or, to optionally build and run tests and benchmarking, use this cmake command instead:

    cmake .. -DENABLE_TESTING=TRUE

## Vagrant

This project comes with vagrant files to make it easier to build on a variety of platforms with a variety of compilers.

### Build with MSVC 2017

    cd vagrant/w16s-vs17c
    vagrant up

#### First time boot manual steps

1. Install CMake. The installer will be on the desktop. Select the option to add cmake to the system PATH.
2. Install Visual Studio's _Desktop Development with C++_. Navigate to _Control Panel_ > _Programs and Features_. Select Microsoft Visual Studio and press Change. Update the Visual Studio installer, then update Visual Studio itself. Finally, modify the installation and tick the box to install Desktop Development with C++.

#### Build

In the VM, open a command prompt and run:

    pushd \\vboxsvr\cpplox

    mkdir build
    cd build

    cmake .. -A x64
    cmake --build . --config Release

### Build with MSVC 2015

    cd vagrant/w16s-vs15c
    vagrant up

#### First time boot manual steps

1. Install CMake. The installer will be on the desktop. Select the option to add cmake to the system PATH.
2. Install Visual C++. Navigate to _Control Panel_ > _Programs and Features_. Select Microsoft Visual Studio and press Change. Modify the installation and tick the box to install Visual C++.

#### Build

In the VM, open a command prompt and run:

    pushd \\vboxsvr\cpplox

    mkdir build
    cd build

    cmake .. -A x64
    cmake --build . --config Release

## Copyright

Copyright 2018 Jeff Mott. [MIT License](https://opensource.org/licenses/MIT).
