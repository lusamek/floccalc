// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "floccalc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <limits.h>

int fexist( const char *a_option ) {
  char dir1[PATH_MAX]; 
  	char *dir2;
  	DIR *dip;
  	strncpy( dir1 , "",  PATH_MAX  );
  	strncpy( dir1 , a_option,  PATH_MAX  );
  
  	struct stat st_buf; 
  	int status; 
  	int fileordir = 0 ; 
  
  	status = stat ( dir1 , &st_buf);
  	if (status != 0) {
  		fileordir = 0;
  	}
  	FILE *fp2check = fopen( dir1  ,"r");
  	if( fp2check ) {
  		fileordir = 1; 
  		fclose(fp2check);
  	} 
  
  	if (S_ISDIR (st_buf.st_mode)) {
  		fileordir = 2; 
  	}
  	return fileordir;
  	/////////////////////////////
}
#include <time.h>

Fl_Double_Window *win3=(Fl_Double_Window *)0;

static void cb_Quit(Fl_Button*, void*) {
  win3->hide();
}

static void cb_Binary(Fl_Button*, void*) {
  system(  "    screen -d -m  floccalc-binary  " );
}

#include <FL/Fl_Image.H>
static const unsigned char idata_ooo_gulls[] =
{255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,0,0,141,59,5,7,141,191,18,19,145,216,16,17,146,213,
15,17,148,213,15,17,149,213,15,17,151,213,14,17,153,213,14,17,154,213,14,17,
156,213,13,18,157,213,13,17,159,213,12,18,161,213,12,18,162,213,12,18,164,213,
11,20,166,213,11,21,167,213,11,22,168,213,10,22,169,213,10,23,171,213,10,24,
173,213,9,25,175,213,9,25,176,213,8,26,178,213,7,27,179,213,7,27,183,218,0,20,
166,162,0,4,32,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,12,144,206,160,163,217,255,
207,208,236,255,201,206,235,255,196,206,236,255,191,203,236,255,186,201,236,255,
181,198,237,255,176,196,237,255,171,195,237,255,166,193,238,255,162,190,238,255,
156,188,238,255,151,186,238,255,146,183,239,255,141,181,239,255,136,179,239,255,
131,177,240,255,126,173,240,255,122,172,240,255,115,168,240,255,107,165,241,255,
99,160,241,255,90,157,242,255,81,153,242,255,82,158,243,255,33,81,222,255,0,6,
90,154,0,0,0,14,0,0,0,0,0,0,0,0,0,0,0,0,28,29,151,237,230,231,245,255,255,255,
255,255,251,255,255,255,249,255,255,255,246,255,255,255,243,254,255,255,241,252,
255,255,239,252,255,255,237,250,255,255,234,249,255,255,233,248,255,255,230,246,
255,255,227,246,255,255,225,244,255,255,223,243,255,255,220,242,255,255,218,241,
255,255,216,240,255,255,214,238,255,255,211,237,255,255,207,236,255,255,203,234,
255,255,200,231,255,255,201,232,255,255,139,209,255,255,47,113,236,255,0,7,111,
205,0,0,0,46,0,0,0,0,0,0,0,0,0,0,0,0,27,28,152,233,221,221,242,255,243,250,255,
255,227,238,255,255,229,239,255,255,230,239,255,255,230,239,255,255,230,240,255,
255,231,240,255,255,231,240,255,255,231,240,255,255,232,240,255,255,232,241,255,
255,233,241,255,255,233,241,255,255,233,241,255,255,234,241,255,255,235,242,255,
255,235,242,255,255,235,242,255,255,235,242,255,255,236,243,255,255,237,243,255,
255,238,243,255,255,247,247,255,255,153,209,255,255,42,107,236,255,0,8,107,208,
0,0,0,55,0,0,0,0,0,0,0,0,0,0,0,0,27,28,153,233,221,222,241,255,236,247,255,
255,216,232,255,255,219,232,255,255,218,232,255,255,218,232,255,255,218,232,255,
255,218,232,255,255,219,233,255,255,219,233,255,255,218,233,255,255,218,233,255,
255,218,233,255,255,218,232,255,255,221,235,255,255,227,242,255,255,226,241,255,
255,225,241,255,255,225,240,255,255,220,235,255,255,218,232,255,255,218,232,255,
255,218,232,255,255,225,235,255,255,145,206,255,255,43,108,236,255,0,8,107,208,
0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,27,28,154,233,221,222,242,255,230,241,255,
255,206,224,255,255,212,229,255,255,216,235,255,255,217,236,255,255,216,234,255,
255,212,229,255,255,209,226,255,255,209,226,255,255,209,226,255,255,209,226,255,
255,209,226,255,255,217,235,255,255,210,227,252,255,170,183,201,255,157,166,184,
255,160,170,186,255,178,191,209,255,212,229,254,255,214,233,255,255,209,226,255,
255,209,226,255,255,216,229,255,255,141,204,255,255,43,108,237,255,0,9,109,208,
0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,27,29,156,233,221,222,242,255,225,239,255,
255,206,232,255,255,192,213,241,255,157,172,195,255,148,160,179,255,157,172,192,
255,185,205,233,255,206,229,255,255,201,223,255,255,199,220,255,255,199,220,255,
255,209,233,255,255,167,185,208,255,104,110,118,255,113,113,114,255,138,136,134,
255,123,120,117,255,79,77,74,255,94,97,104,255,170,187,211,255,203,225,255,255,
199,220,255,255,205,223,255,255,138,201,255,255,44,110,238,255,0,9,109,208,0,0,
0,54,0,0,0,0,0,0,0,0,0,0,0,0,27,29,158,233,223,224,244,255,221,239,255,255,
121,138,162,255,68,70,75,255,101,99,97,255,133,131,129,255,127,127,125,255,105,
106,108,255,135,147,166,255,193,219,252,255,191,217,255,255,197,224,255,255,149,
168,195,255,39,39,40,255,63,61,57,255,77,74,71,255,80,82,84,255,103,111,123,255,
121,134,155,255,120,134,157,255,139,157,185,255,191,217,255,255,190,214,255,255,
195,216,255,255,135,199,255,255,44,110,239,255,0,10,110,208,0,0,0,54,0,0,0,0,0,
0,0,0,0,0,0,0,28,29,159,233,226,228,249,255,137,144,150,255,9,9,11,255,41,43,
47,255,69,73,81,255,70,73,77,255,81,81,83,255,72,69,65,255,42,37,31,255,105,
117,134,255,187,218,255,255,174,203,236,255,34,39,46,255,10,6,0,255,51,54,59,
255,119,136,162,255,162,187,223,255,182,212,254,255,187,219,255,255,189,219,255,
255,185,216,255,255,179,208,255,255,179,209,255,255,190,214,255,255,133,199,255,
255,45,111,239,255,0,11,111,208,0,0,0,54,0,0,0,0,1,1,1,0,1,1,1,0,27,29,161,233,
221,223,244,255,132,163,214,255,133,165,215,255,168,198,242,255,158,191,242,255,
150,182,230,255,138,166,205,255,118,138,166,255,74,82,94,255,43,38,30,255,127,
147,176,255,99,120,150,255,0,0,0,255,73,84,101,255,157,187,228,255,180,216,255,
255,174,208,255,255,171,204,255,255,169,202,255,255,169,202,255,255,169,202,255,
255,171,203,255,255,179,208,255,255,142,181,255,255,95,174,255,255,50,116,248,
255,0,9,117,206,0,0,0,48,4,4,4,0,23,23,23,0,22,22,22,0,27,30,162,233,224,225,
243,255,112,163,255,255,58,126,255,255,138,181,255,255,167,202,255,255,168,203,
255,255,169,205,255,255,168,207,255,255,161,197,249,255,119,140,171,255,74,78,
85,255,28,32,37,255,67,81,104,255,168,205,252,255,165,202,255,255,159,195,255,
255,160,196,255,255,160,196,255,255,161,197,255,255,163,198,255,255,167,201,255,
255,160,197,255,255,111,164,255,255,32,106,255,255,62,142,238,255,51,102,193,
255,16,24,95,225,30,30,25,108,29,29,29,22,24,24,24,0,21,21,21,0,27,30,163,233,
224,225,243,255,117,164,255,255,23,99,254,255,48,116,254,255,86,143,255,255,124,
171,255,255,145,187,255,255,152,192,255,255,156,197,255,255,163,205,255,255,120,
144,180,255,62,71,87,255,150,189,244,255,156,197,255,255,151,191,255,255,153,
192,255,255,154,193,255,255,154,193,255,255,152,191,255,255,139,182,255,255,109,
163,255,255,66,133,255,255,31,87,198,255,65,91,143,255,130,138,150,255,171,170,
168,255,184,184,179,255,173,173,172,252,114,114,115,235,66,66,66,168,24,24,24,
63,27,30,165,233,224,225,243,255,117,165,255,255,33,106,254,255,49,117,254,255,
47,115,254,255,53,119,254,255,72,133,254,255,93,149,254,255,106,159,254,255,
117,167,255,255,126,173,255,255,123,169,240,255,133,180,255,255,130,176,255,255,
127,174,255,255,122,170,255,255,113,164,255,255,101,154,254,255,84,142,254,255,
65,131,255,255,45,112,240,255,45,76,136,255,106,105,106,255,169,164,153,255,
192,189,186,255,179,177,171,255,148,146,139,255,102,102,102,255,55,55,55,249,27,
27,27,231,15,15,15,162,27,30,167,233,224,226,243,255,128,172,255,255,48,116,
254,255,65,128,254,255,68,130,254,255,70,131,254,255,69,130,254,255,70,131,254,
255,73,134,254,255,78,136,255,255,81,139,255,255,86,144,255,255,84,141,254,255,
85,141,254,255,82,140,254,255,77,136,254,255,74,133,254,255,70,130,254,255,72,
135,255,255,65,123,234,255,49,63,94,255,99,93,82,255,130,129,126,255,109,109,
109,255,77,74,68,255,39,46,74,255,5,12,52,236,0,0,0,179,0,0,0,132,0,0,0,91,0,0,
0,60,27,30,169,233,221,223,244,255,224,238,255,255,199,219,255,255,205,223,
255,255,206,224,255,255,208,226,255,255,215,231,255,255,221,235,255,255,215,232,
255,255,213,229,255,255,214,231,255,255,220,235,255,255,218,232,255,255,213,228,
255,255,211,227,255,255,211,227,255,255,210,227,255,255,212,228,255,255,213,229,
250,255,75,83,96,255,60,58,51,255,80,79,79,255,52,51,51,255,50,47,47,255,74,111,
138,255,37,99,224,255,0,14,123,212,0,0,0,82,0,0,0,21,0,0,0,6,0,0,0,2,27,30,170,
233,221,224,244,255,248,254,255,255,236,245,255,255,238,246,255,255,249,255,255,
255,250,255,255,255,216,220,223,255,159,161,160,255,146,145,143,255,146,145,142,
255,152,152,150,255,165,166,163,255,215,218,218,255,255,255,255,255,250,255,255,
255,245,251,255,255,245,251,255,255,255,255,255,255,142,143,142,255,25,22,18,
255,41,41,41,255,22,22,22,255,81,84,88,255,207,212,218,255,155,219,255,255,45,
118,252,255,0,14,119,208,0,0,0,53,0,0,0,0,0,0,0,0,0,0,0,0,27,31,171,233,221,224,
244,255,244,252,255,255,231,241,255,255,245,255,255,255,211,218,222,255,110,113,
118,255,94,94,95,255,124,124,123,255,152,151,151,255,165,165,165,255,159,159,
159,255,137,136,135,255,109,110,110,255,142,145,147,255,236,241,242,255,247,253,
255,255,249,254,255,255,207,212,215,255,19,20,21,255,12,11,11,255,18,17,17,255,
136,140,145,255,239,247,253,255,248,254,255,255,150,208,255,255,42,113,246,255,
0,15,120,208,0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,27,31,173,233,221,224,244,255,
241,250,255,255,240,255,255,255,180,189,192,255,50,50,52,255,43,41,40,255,71,70,
68,255,74,72,71,255,68,67,65,255,67,66,63,255,70,68,66,255,76,75,74,255,74,73,
73,255,52,52,51,255,112,112,114,255,236,243,246,255,255,255,255,255,121,126,
129,255,0,0,0,255,14,13,13,255,156,163,170,255,247,255,255,255,230,242,255,255,
232,240,255,255,146,207,255,255,43,113,246,255,0,16,121,208,0,0,0,54,0,0,0,0,0,
0,0,0,0,0,0,0,27,31,175,233,221,225,244,255,213,240,255,255,127,155,183,255,8,
9,10,255,7,5,2,255,32,33,35,255,49,55,60,255,76,85,93,255,90,102,110,255,95,
105,114,255,86,94,100,255,64,67,71,255,49,49,49,255,28,26,25,255,14,12,10,255,
112,122,131,255,205,233,248,255,35,40,45,255,2,3,3,255,124,144,161,255,203,238,
255,255,185,220,255,255,179,215,255,255,178,213,255,255,128,197,255,255,46,115,
248,255,0,17,122,208,0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,27,33,176,233,226,230,250,
255,193,216,233,255,37,47,60,255,76,90,103,255,134,156,179,255,168,194,212,255,
191,220,236,255,206,236,255,255,211,241,255,255,211,239,255,255,204,232,252,255,
191,216,230,255,170,192,209,255,131,143,155,255,55,57,59,255,44,42,42,255,124,
140,153,255,0,0,0,255,98,112,123,255,209,243,255,255,189,222,255,255,184,219,
255,255,180,216,255,255,178,214,255,255,128,197,255,255,46,116,248,255,0,17,123,
208,0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,27,33,177,233,223,226,246,255,204,227,247,
255,165,197,231,255,199,234,255,255,205,238,255,255,208,238,255,255,208,236,255,
255,205,233,255,255,206,232,255,255,206,232,255,255,209,234,255,255,212,238,255,
255,215,241,255,255,217,243,255,255,194,217,233,255,120,129,137,255,30,29,29,
255,43,49,55,255,205,234,246,255,204,235,255,255,194,225,255,255,189,223,255,
255,184,219,255,255,184,216,255,255,129,197,255,255,46,116,249,255,0,17,124,208,
0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,27,35,179,233,221,225,245,255,213,237,255,
255,187,223,255,255,193,225,255,255,198,229,255,255,202,230,255,255,204,230,255,
255,205,231,255,255,206,231,255,255,207,231,255,255,208,232,255,255,209,231,255,
255,209,232,255,255,208,231,255,255,214,239,255,255,217,244,255,255,101,111,119,
255,135,153,163,255,216,245,255,255,201,230,255,255,198,229,255,255,192,225,255,
255,187,221,255,255,186,218,255,255,130,199,255,255,45,117,250,255,0,19,125,208,
0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,27,36,180,233,221,225,245,255,213,236,255,
255,185,220,255,255,196,226,255,255,201,230,255,255,203,230,255,255,205,231,255,
255,206,231,255,255,207,232,255,255,209,232,255,255,210,232,255,255,210,232,255,
255,211,232,255,255,210,232,255,255,209,231,255,255,211,235,255,255,210,234,254,
255,208,233,254,255,204,231,255,255,203,230,255,255,201,229,255,255,195,226,255,
255,189,222,255,255,188,220,255,255,131,199,255,255,45,117,251,255,0,19,126,208,
0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,27,37,183,233,221,225,246,255,214,238,255,
255,188,222,255,255,198,229,255,255,202,230,255,255,203,230,255,255,205,231,255,
255,208,231,255,255,210,232,255,255,211,232,255,255,212,233,255,255,213,233,255,
255,213,233,255,255,213,233,255,255,212,233,255,255,211,232,255,255,210,234,255,
255,209,233,255,255,206,231,255,255,204,231,255,255,202,230,255,255,198,229,255,
255,192,225,255,255,190,222,255,255,132,200,255,255,45,117,251,255,0,20,127,208,
0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,28,37,184,234,222,226,246,255,214,238,255,
255,187,221,255,255,198,228,255,255,200,228,255,255,202,229,255,255,204,230,255,
255,207,231,255,255,209,231,255,255,211,231,255,255,213,232,255,255,215,232,255,
255,215,233,255,255,215,233,255,255,214,233,255,255,213,232,255,255,212,232,255,
255,210,232,255,255,208,231,255,255,207,232,255,255,205,231,255,255,202,230,255,
255,197,227,255,255,196,224,255,255,133,199,255,255,44,118,253,255,0,20,128,208,
0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,27,38,187,236,228,232,248,255,249,255,255,
255,237,250,255,255,238,252,255,255,235,252,255,255,232,251,255,255,229,248,255,
255,226,247,255,255,222,246,255,255,220,244,255,255,217,242,255,255,214,240,255,
255,209,238,255,255,205,236,255,255,201,234,255,255,197,232,255,255,193,230,255,
255,187,227,255,255,183,225,255,255,177,224,255,255,170,219,255,255,162,215,255,
255,155,212,255,255,146,206,255,255,120,200,255,255,49,123,255,255,0,21,132,209,
0,0,0,54,0,0,0,0,0,0,0,0,0,0,0,0,5,23,173,187,110,125,226,255,161,170,239,255,
155,166,238,255,151,165,239,255,147,165,240,255,143,164,241,255,139,161,242,255,
135,160,242,255,132,159,243,255,128,157,244,255,123,156,244,255,119,154,245,255,
115,153,246,255,111,151,246,255,107,150,248,255,104,148,248,255,101,147,249,255,
96,145,250,255,92,144,251,255,88,142,251,255,81,139,252,255,75,136,252,255,69,
134,254,255,61,131,254,255,61,134,255,255,21,79,243,255,0,13,80,188,0,0,0,47,0,
0,0,0,0,0,0,0,0,0,0,0,0,8,60,52,0,3,102,177,0,3,103,207,0,4,103,208,0,5,104,
208,0,5,105,208,0,5,105,208,0,6,107,208,0,7,108,208,0,8,109,208,0,9,110,208,0,9,
111,208,0,10,112,208,0,11,113,208,0,11,113,208,0,12,115,208,0,13,116,208,0,14,
117,208,0,15,117,208,0,15,119,208,0,15,120,208,0,16,121,208,0,18,122,208,0,18,
123,208,0,19,124,208,0,20,130,209,0,16,92,193,0,2,5,115,0,0,0,22,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,23,0,0,0,52,0,0,0,55,0,0,0,55,0,0,0,55,0,0,0,55,0,0,0,
55,0,0,0,55,0,0,0,55,0,0,0,55,0,0,0,55,0,0,0,55,0,0,0,55,0,0,0,55,0,0,0,55,0,0,
0,55,0,0,0,55,0,0,0,55,0,0,0,55,0,0,0,55,0,0,0,55,0,0,0,55,0,0,0,55,0,0,0,55,
0,0,0,56,0,0,0,52,0,0,0,27,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,
255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,
255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,
255,0,255,255,255,0,255,255,255,0};
static Fl_Image *image_ooo_gulls() {
  static Fl_Image *image = new Fl_RGB_Image(idata_ooo_gulls, 32, 32, 4, 0);
  return image;
}

Fl_Double_Window* make_window() {
  { win3 = new Fl_Double_Window(795, 275, "FLOCCALC");
    win3->box(FL_THIN_UP_BOX);
    { Fl_Box* o = new Fl_Box(5, 5, 785, 25, "My Project");
      o->box(FL_THIN_UP_BOX);
      o->labelfont(1);
    } // Fl_Box* o
    { Fl_Button* o = new Fl_Button(10, 240, 775, 25, "&Quit");
      o->labelfont(1);
      o->callback((Fl_Callback*)cb_Quit);
    } // Fl_Button* o
    { Fl_Group* o = new Fl_Group(10, 60, 775, 165, "Templates");
      o->box(FL_BORDER_BOX);
      { Fl_Button* o = new Fl_Button(20, 85, 200, 115, "&Binary Calculation");
        o->image( image_ooo_gulls() );
        o->labelfont(1);
        o->callback((Fl_Callback*)cb_Binary);
      } // Fl_Button* o
      o->end();
    } // Fl_Group* o
    win3->end();
    win3->resizable(win3);
  } // Fl_Double_Window* win3
  win3->show();
  return win3;
}

int main() {
  make_window();
  Fl::run();
  return 0;
  
  
  
  // this will be done  only once ... 
  //Fl::add_timeout(1.0, Update_CB, (void*)box);
  
  //Update_CB((void*)box2);              // force update immediately
  
  
  
    //  Fl_Box *box2 = new Fl_Box(10, 10, 30 , 30 );
      //box2->labelsize(28);
      //box2->levels(8);
      
     // Fl::add_timeout(1.0, Update_CB, (void*)box2);
      
  //    win1->show();
     
     
     
     
        
     // Fl::repeat_timeout(1.0, Update_CB, (void*)box2);
     
  //    return(Fl::run());
}
