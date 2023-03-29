# _printf

 `_printf`: is a replica of c standar library function printf. This function writes under the control of a format to the stdout. 


## Prototype

`int _printf(const char *format, ...);`


### Usage

Once cloned over, the repository must contain the following files:

| File  	| Description   |
| ------------- | ------------- |
| _printf.c     | main file of the function         |
| main.h        | _printf header                    |
| func.c        | contains all the formats admitted.|
| get_func.c 	| calls the concerned function	    |
| pch.c    	| one byte printer      	    |

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

### Format

### Return Value

### Conversion Specifiers

## Authors

* Alejandro Martinez [Git Hub](https://github.com/alemao51092)
* Emanuel Trias [Git Hub](https://github.com/KrasniKot)
