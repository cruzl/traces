/*
 * The MIT License
 *
 * Copyright (c) 2018 Luis CRUZ
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef __TRACES_H__
#define __TRACES_H__



// -----------------------------------------------
//     INCLUDE
// -----------------------------------------------

#include <stdio.h>
#include <stdlib.h>



// -----------------------------------------------
//     MACRO
// -----------------------------------------------

#ifdef DEBUG
#define __TRACE     1
#else
#define __TRACE     0
#endif

#define PRINT_TRACE( ... )                                                     \
    do { if ( __TRACE ) {                                                      \
        fprintf( stderr , "%s:%d:%s()    " , __FILE__ , __LINE__ , __func__ ); \
        fprintf( stderr , __VA_ARGS__ );                                       \
        fprintf( stderr , "\r\n" );                                            \
    } } while ( 0 )

#define TRACE( format )                 PRINT_TRACE( format )
#define TRACE_P( format , ... )         PRINT_TRACE( format , __VA_ARGS__ )
#define WARNING( format )               PRINT_TRACE( "WARNING: " format )
#define WARNING_P( format , ... )       PRINT_TRACE( "WARNING: " format , __VA_ARGS__ )
#define ERROR( format )                 PRINT_TRACE( "ERROR: " format )
#define ERROR_P( format , ... )         PRINT_TRACE( "ERROR: " format , __VA_ARGS__ )



#endif /* __TRACES_H__ */
