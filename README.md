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
| func.c        | contains some admitted formats    |
| 1func.c        | contains some admited formats     |
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

### Conversion Specifiers

__The conversion specifiers that__ `_printf` __accepts are:__

* __s:__ The `char *` argument given, will be printed (except the '\0' byte).
* __c:__ The `char ` argument given, will be printed.
* __i__ & __d__: The `int` argument given, will be printed as integer. 

Note that you can type `%%`, and you will obtain `%` as output.


### Return Value

Upon succeful excecution, `_printf` will return the number of bytes printed (excluded the '\0' byte). Upon a error output the return value will be `-1`.

__Examples:__

1:
```
#include "main.h"

void main(void)
{
	_printf("A %sis composed by %d byte", "character ", 1);
}
```

Output:

```
$ ./a.out
A character is composed by 1 byte.$
```

## Authors

* Alejandro Martinez [Git Hub](https://github.com/alemao51092)
* Emanuel Trias [Git Hub](https://github.com/KrasniKot)
