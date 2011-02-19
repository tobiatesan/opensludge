#ifndef _SPLITTER_H_
#define _SPLITTER_H_

#include <stdint.h>

struct stringArray {
	char * string;
	unsigned int line;
	struct stringArray * next;
};

extern struct stringArray * nullArray;

enum splitMode {ONCE, REPEAT};

// Make an entire stringArray from a char *
stringArray * splitString (const char *, const char = ';', const splitMode = REPEAT, bool = true);
stringArray * splitAtLast (const char * inString, const char findCharIn);

// Handling a stringArray
void addToStringArray (stringArray * & theArray, const char * theString, int start = 0, int size = -1, bool trimSpa = true);

//void addToStringArray (stringArray * &, const char *, int, int, bool);
bool destroyFirst (stringArray * &);
char * returnElement (stringArray * sA, int i);
int findElement (stringArray * sA, const char * findString);
int findOrAdd (stringArray * & sA, const char * addString, bool = true);
int countElements (stringArray * sA);
#define destroyAll(a) while(destroyFirst(a)){;}

// General char * & trimmage
void trimEdgeSpace (char * & thisString);
bool trimStart (char * & thisString, char trimChar);
bool trimEnd (char * & thisString, char trimChar);

int32_t stringToInt (const char * textNumber, int errorType);

//void displayAllInArray (stringArray *);
//int findElement (stringArray * sA, const char * findString);
//int findOrAdd (stringArray * & sA, const char * addString, bool = true);
//int countElements (stringArray * sA);
//bool trimStart (char * & thisString, char trimChar);
char * elementAt (stringArray * sA, int a);

#endif
