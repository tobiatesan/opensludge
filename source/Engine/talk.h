#include "sprites.h"

struct speechLine {
	char * textLine;
	speechLine * next;
	int xoffset;
};

struct speechStruct {
	onScreenPerson * currentTalker;
	speechLine * allSpeech;
	int lastFile, lookWhosTalking;
	spritePalette talkCol;
    int speechX, speechY, speechW, speechH;
};

struct ponderingStruct {
	speechStruct *speech;
	ponderingStruct *next;
};

int wrapSpeech (char * theText, int objT, int sampleFile, bool);
void wrapPondering (char * theText, int objT);
void viewSpeech ();
void killAllSpeech ();
void killAllPonderings ();
int isThereAnySpeechGoingOn ();
void initSpeech ();
void saveSpeech (speechStruct * sS, FILE * fp);
bool loadSpeech (speechStruct * sS, FILE * fp);
void savePonderings (FILE * fp);
bool loadPonderings (FILE * fp);

