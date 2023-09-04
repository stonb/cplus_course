# C++ Learning
This GitHub contains several projects for learning purposes. Feel free to copy them and tweek them for your own learning path

## Compiling the code - Compiler
Each folder contains a separate program and it need to compile separately, in the future I might write a script to compile all the folders at once.

To compile the code/project, make sure you have a compiler installed on your machine such as [clang](https://clang.llvm.org/), [cygwin](https://www.cygwin.com/), [gnu-gcc](https://gcc.gnu.org/), [mingw](https://www.mingw-w64.org/). Depending on your OS you might or might not need to install the compiler.

An easy way to confirm you have an installer in your box, type the following command on your favorite terminal.

```bash
g++ --version
```
or 
```bash
g++ -v
```

you should get the version of the installed compiler if not, you may need to install one of the compilers mentioned above

## Compiling the code - Code to Executable

To compile the code, navigate to the folder on your favorite terminal and type the following command for programs with main only.

```bash
g++ main.c -o main.o
```

This will create an executable file main.o. To run the program run the file on terminal typing the following

```bash
./main.o
```

NOTE: If you are on Windows OS, you can change `main.o` to `main.exe`, this will create an executable file that you can then double click to run on your box.

## General Acknowledgement

This repository constitutes a personal workspace and is continually evolving.

It is important to note that none of the code within this repository carries a guarantee of flawless functionality across all computing environments.

Any resemblance between the examples contained herein and other codebases is purely coincidental and is never an intentional act of replication. 

Should you suspect any code within this repository to resemble your own intellectual property, please do not hesitate to contact me. I will promptly conduct a thorough review of your request and, if warranted, promptly remove the relevant code.

## License

[MIT](https://choosealicense.com/licenses/mit/)