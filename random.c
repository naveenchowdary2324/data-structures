lines (59 sloc)  1.42 KB

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define MAX_ARRAY 100
#define NUMBER_LIMIT 200
#define SEARCHES 100

void fillAryRand (int array[]);
bool seqSearch  (int array[], int last, int target, int &locn, int &tests);

int main (void)
{

	int numsFound =  0;
	int tests =  0;
	int srchComplete =  0;
	int locn;
	int i;
	int array [MAX_ARRAY];


	srand (time (NULL));
	fillAryRand (array);
	for (i = 1; i <= SEARCHES; i++)
	   {
	    if (seqSearch (array,
	        MAX_ARRAY - 1,
	        rand() % NUMBER_LIMIT + 1,
	        locn,
	        tests) 
	       )
	        numsFound++;
	    srchComplete++;
	   }
	   
	cout << "\nThere were " << srchComplete 
	     << " searches completed.\n";
	cout << "There were " << numsFound 
	     << " successful searches.\n";
	cout << (((float)numsFound / srchComplete) * 100);
	cout << "% of the searches were successful.\n";
	cout << "There were an average of " 
	     << ((float)tests / srchComplete);
	cout << " tests per search.\n\n";
	
	system ("Pause");
	return 0;
}

void fillAryRand (int array[ ])
{
	int i;

	for (i = 0;  i < MAX_ARRAY;  i++)
	     array[i] = rand() % NUMBER_LIMIT + 1;
	return; 
}

bool seqSearch (int array[], int last, int target,
                int &locn, int &tests)
{

	int looker  =  0;

	while ((tests++, looker < last)  
	    && (tests++, target != array[looker]))
	     looker++;
	locn  =  looker;
	return ((tests)++, target  ==  array[looker]);
}
