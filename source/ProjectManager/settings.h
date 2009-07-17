struct chrRenderingSettingsStruct
{
	bool defEnabled;
	int defSoftnessX, defSoftnessY;
	
	bool maxEnabled, maxReadIni;
	int maxSoftnessX, maxSoftnessY;
};

extern struct chrRenderingSettingsStruct chrRenderingSettings;


struct settingsStruct
{
	char *quitMessage;
	char *customIcon;
	char *runtimeDataFolder;
	
	char *finalFile;
	char *windowName;
	
	int winMouseImage;
	bool ditherImages;
	bool runFullScreen;
	bool startupShowLogo;
	bool startupShowLoading;
	bool startupInvisible;
	bool forceSilent;
	
	int	screenHeight;
	int screenWidth;
		
	int frameSpeed;
};

extern struct settingsStruct settings;

struct programSettingsStruct
{
	bool compilerKillImages;
	bool compilerWriteStrings;
	bool compilerVerbose;
	bool searchSensitive;
};

extern struct programSettingsStruct programSettings;



extern bool silent;
extern char * sourceDirectory;

bool readSettings (FILE * fp);
void writeSettings (FILE * fp);
void noSettings ();
void chrRenderingSettingsFillDefaults(bool enable);

bool getSourceDirFromName (char * filename);
bool gotoSourceDirectory ();
bool gotoTempDirectory ();
void killTempDir();
bool gotoOutputDirectory ();
FILE * openFinalFile (char *, char *);
void writeFinalData (FILE * mainFile);

void fixPath (char *filename, bool makeGood);

