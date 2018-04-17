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
