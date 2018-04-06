# TRACES
Traces library in C language for embedded software.


## Description

This library aims to...


## Format

Trace:
```
<file_name>:<line_number>:<function_name>()    <Message>
```

Warning:
```
<file_name>:<line_number>:<function_name>()    WARNING: <Message>
```

Error:
```
<file_name>:<line_number>:<function_name>()    ERROR: <Message>
```

## Macro list

* TRACE
* TRACE_P
* WARNING
* WARNING_P
* ERROR
* ERROR_P


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

    // Print a warning trace
    WARNING( "This is a warning trace" );

    // Print a warning trace with parameters
    WARNING_P( "This is a warning trace with %d parameter" , 1 );

    // Print an error trace
    ERROR( "This is an error trace" );

    // Print an error trace with parameters
    ERROR_P( "This is an error trace with %d parameter" , 1 );
}
```

Result:
```
demo.c:9:main()    This is a trace
demo.c:12:main()    This is a trace with 1 parameter
demo.c:15:main()    WARNING: This is a warning trace
demo.c:18:main()    WARNING: This is a warning trace with 1 parameter
demo.c:21:main()    ERROR: This is an error trace
demo.c:24:main()    ERROR: This is an error trace with 1 parameter
```


## To do

Get rid of `TRACE_P`, `WARNING_P`, and `ERROR_P`. Handle any number of parameters with `TRACE`, `WARNING`, and `ERROR`.


## License

**TRACES** is licensed under the **MIT license**. See [LICENSE](LICENSE) for further information.
