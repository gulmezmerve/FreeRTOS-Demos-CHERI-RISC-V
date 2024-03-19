/* NOTE - eventually this file will be automatically updated using a Perl script that understand
 * the naming of test case files, functions, and namespaces.
 */

#include <time.h>   /* for time() */
#include <stdlib.h> /* for srand() */

#include "std_testcase.h"
#include "testcases.h"


int main(int argc, char * argv[]) {

	/* seed randomness */

	srand( (unsigned)time(NULL) );

	printLine("Calling good()...");
	CWE457_Use_of_Uninitialized_Variable__char_pointer_01_good();
    printLine("Finished good()");

    printLine("Calling bad()...");
    CWE457_Use_of_Uninitialized_Variable__char_pointer_01_bad();
    printLine("Finished bad()");

	exit(0);
	return 0;
} 
