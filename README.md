# TRACES
Traces library in C language for embedded software.


## Description

This library aims to...


## Format

Trace:
```
<file_name>:<line_number>:<function_name>    <Message>
```

Error:
```
<file_name>:<line_number>:<function_name>    ERROR: <Message>
```


## Usage

Example:
```c
#define DEBUG

#import "traces.h"

void
main ( void )
{
    // Print a trace
    TRACE( "This is a trace" );

    // Print a trace with parameters
    TRACE_P( "This is a trace with %d parameter" , 1 );

    // Print an error trace
    ERROR( "This is an error trace" );

    // Print an error with parameters
    ERROR_P( "This is an error trace with %d parameter" , 1 );
}
```

Result:
```
demo.c:9:main()    This is a trace
demo.c:12:main()    This is a trace with 1 parameter
demo.c:15:main()    ERROR: This is an error trace
demo.c:18:main()    ERROR: This is an error trace with 1 parameter
```


## To do

Get rid of `TRACE_P` and `ERROR_P`. Handle any number of parameters with `TRACE` and `ERROR`.


## License

TRACES library is licensed under the MIT license. See [LICENSE](LICENSE) for further information.
