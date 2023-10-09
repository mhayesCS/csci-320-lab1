#define MAX_LINE_LEN 100

typedef enum{false, true} bool;
typedef enum{SUCCESS=0, FAILURE=1} status;


/*
 * readString - reads a line from a file given by
 * fileName and returns it as a c-string.  The line
 * return is removed from the string.
 * 
 * fileName is c-string representing the file to read.
 * 
 */
char* readString(char* fileName){
    char * location;
    location = (char *) malloc(100);
    FILE *fileptr;
    fileptr = fopen(fileName, "r");
    fgets(location, MAX_LINE_LEN, fileptr);
    fclose(fileptr);
    location[strcspn(location, "\n")] = '\0';
    return location;
    
}

char* mysteryExplode(const char* str) {
    int len = strlen(str);
    char *exploded = (char*) malloc((len*(len+1)/2)+1);



}
