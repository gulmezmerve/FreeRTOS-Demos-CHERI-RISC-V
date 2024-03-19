/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE457_Use_of_Uninitialized_Variable__struct_pointer_63b.c
Label Definition File: CWE457_Use_of_Uninitialized_Variable.c.label.xml
Template File: sources-sinks-63b.tmpl.c
*/
/*
 * @description
 * CWE: 457 Use of Uninitialized Variable
 * BadSource: no_init Don't initialize data
 * GoodSource: Initialize data
 * Sinks: use
 *    GoodSink: Initialize then use data
 *    BadSink : Use data
 * Flow Variant: 63 Data flow: pointer to data passed from one function to another in different source files
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITBAD

void CWE457_Use_of_Uninitialized_Variable__struct_pointer_63b_badSink(twoIntsStruct * * dataPtr)
{
    twoIntsStruct * data = *dataPtr;
    /* POTENTIAL FLAW: Use data without initializing it */
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void CWE457_Use_of_Uninitialized_Variable__struct_pointer_63b_goodG2BSink(twoIntsStruct * * dataPtr)
{
    twoIntsStruct * data = *dataPtr;
    /* POTENTIAL FLAW: Use data without initializing it */
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
}

/* goodB2G uses the BadSource with the GoodSink */
void CWE457_Use_of_Uninitialized_Variable__struct_pointer_63b_goodB2GSink(twoIntsStruct * * dataPtr)
{
    twoIntsStruct * data = *dataPtr;
    /* FIX: Ensure data is initialized before use */
    /* initialize both the pointer and the data pointed to */
    data = (twoIntsStruct *)malloc(sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data->intOne = 5;
    data->intTwo = 6;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
}

#endif /* OMITGOOD */
