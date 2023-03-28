# _printf

 `_printf`: is a replica of c standar library function printf
 `_printf`: format and print data to `stdout`.


## Prototype

`int _printf(const char *format, ...);`


### Usage

Once cloned over, the repository must contain the following files:

| File  	| Description   |
| ------------- | ------------- |
| _printf.c     | main file of the function         |
| main.h        | _printf header                    |
| func.c        | contains all the formats admitted.|
| pch.c  	| 1 byte printer  	            |

Example:

```
#include "main.h"

void main(void)
{
	_printf("String");
}
```

Once compiled...

Output:

```
$ ./a.out
String$
```
