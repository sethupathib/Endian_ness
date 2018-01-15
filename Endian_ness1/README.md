//===============================================================================================//

This piece of code will show if the machine your working on ,is Little Endian or Big Endian.

Little Endian --> If the LSB of the data sits on the lowest address of the data structure, then the machine is said to have a "LITTLE ENDIAN" architecture.

Big Endian --> If the LSB of the data sits on the last address of the data structure, then the machine is said to have a "BIG ENDIAN" architecture.

Description --> The source code presented in the respository has a int data type of name 'a' [a is assigned to 1] and another
pointer of char data type. Here, 'a' is type casted to the pointer 'cptr' So, if cptr is 1, it means that the LSB is assigned to the lowest address. [Reason, the pointer points to the base address].

//===============================================================================================//
