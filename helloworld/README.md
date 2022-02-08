# Getting Sarted with C++ :metal:

C++ was designed to be an extension to the C language. The main difference between the two is that C++ has added Object-Oriented-Programming (OOP) features and more. If you are interested in game development or working with operating systems then C++ is a wise language to master.

Overall C++ is a low level language and that means a plethora of things, lets break it down

- Compiles down to machine code

- In C++ you need to manage memory manually

- C++ is a static language that optimizes effiency and execution time

Since I am assuming everyone is familiar with Python I'm excited to guide you through learning C++!

---

## Interpreter vs Compiler :robot:

**Interpreters** is what you guys have been working with when you guys code in Python. Interpreters are used in high-level languages and execute the source code without converting the program into machine code.

**Compilers** are used for low level langauges and transform the source code into machine level code otherwise known as binary. Once a program is compiled the source code is irrelevant and to make changes you will have to recompile.

Compilers are going to make your program run faster since they are compiled into machine code and execute without have an intermediary like an interpreter.

---

## Development Environment :technologist:

I personally will be using Visual Studio and I highly recommend this as an IDE so if you want to follow along with me please have Visual Studio installed and follow the rest of this markdown guide to not have any problems developing in C++.

**Getting Autocompletion and Linter** - In Visual Studio please navigate to the etxensions and search up C/C++ and download the extension by Microsoft. This will allow you to have autocompletion and linting for your .cpp files.

**Installing Compiler** - Now in order to have a compiler installed in your computer we can go to this [link](https://sourceforge.net/projects/mingw/files/Installer/mingw-get-setup.exe/download) to download GNU and run the executable file. Once you walk through all the steps please take note of where your files are getting installed since we will need the path of the folder!

> Editing your system's environment variable is easy just search in your windows "Environment Variables" and select the best matched option. Once done youll be prompted with a window from your System Properties. Just click on the "Environment Variables..." button. Then you want to focus your attention on the second table you see thats under "System Variables". This is where you will add to your "Path" so find the row in the second table that has the variable name as "Path" and select it then press the "Edit..." button. Then you will add file path of the folder with all of the binary files inside. For me this was "C:\MinGW\bin" and once I added it that and pressed "Ok" GNU Compiler Collection was added successfully to my path and you can run the "g++ --version" command in a new terminal to see if it's working.

---

## First Program of C++! :cowboy_hat_face:

I will actually be walking you through your first helloworld program in C++ in TA class so I hope you guys will be ready to ask any questions and I'm excited to seeing you all!
