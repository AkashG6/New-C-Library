**INTRODUCTION:-**

C is the alpha of all programming languages. Though it's popularity has declined with the introduction of more user friendly languages like Python and JavaScript, C is still widely used in the fields of compiler and OS creation.

The prime aim of this project is to make coding in C a pleasure with introduction of more libraries which are not currently present in C unlike Python or Java.

As a modest beginning, we have built 3 libraries with 90 extremely user friendly functions covering most aspects of arrays, matrices, vectors and binary operations.

**We hope the open source community will contribute many more C libraries with useful, user friendly and robust functions to compensate for the unexisting in-built ones,unlike that of Java and Python.**

The project also consists of a webpage (https://akashg6.github.io/New-C-Library/index.html) hosted on GitHub detailing the various functions available in these new libraries.
You can also refer test.c file for seeing the actual implementation of every function available.

NOTE: These libraries do not make use of some standard libraries like conio.h that are not available on linux systems. This was done on purpose so that users are free to choose any system they want and not be restricted to windows to use these libraries.


<br>**INSTRUCTIONS TO USE THE LIBRARY:-**

The header file of libraries under this project can be imported into a C program as follows:-

By adding #include "library_name.h" in the pre-proccessor section along with other standard libraries.

For example:-<br> #include <stdio.h><br>
              #include "bin.h"<br>
              #include "vector.h"<br>
              #include "array.h"<br><br>
**NOTE:- The above method only works if the header file is present in the root directory of your program (i.e in the same path as your C progarm)** 

If the header file is located in any subfolder of your root directory then import as follows:-<br><br>
#include "path/bin.h"<br>
**Where 'path' is the actual path under which the header file is located.**

Alternatively, if you are using an IDE, paste the necessary header files in the 'include' folder of the respective IDE and import the header file as any standard library in the pre-proccessor section of your progarm.

For example:-<br>
#include <stdio.h><br>
#include <bin.h><br>
#include <vector.h><br>
#include <array.h><br>
