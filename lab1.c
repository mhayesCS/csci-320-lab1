char* readString(char* fileName) {
    char * location;
    location = (char *) malloc(100);
    FILE *fileptr;
    fileptr = fopen(fileName, "r");
    fgets(location, MAX_LINE_LEN, fileptr);
    fclose(fileptr);
    location[strcspn(location, "\n")] = '\0';
    return location;
}

char* mysteryExplode(const char* str){
    int len = strlen(str);
    char *exploded = (char*) malloc((len*(len+1)/2)+1);
    memset(exploded, '\0', (len*(len+1)/2)+1);
    for (int x = 1; x <=len; x++){
        strncat(exploded, str, x);
    }
    return exploded;
}
