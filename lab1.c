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
