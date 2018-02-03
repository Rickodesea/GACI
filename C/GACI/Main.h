#ifndef Main_H
#define Main_H

void errorHandler(FREE_IMAGE_FORMAT fif, const char *msg);
char *newFilename(const char* folder, const char* name, const char* extension);
void copyMem(char *destination, const int index, const int length, const char* source);
void writeImage(const FREE_IMAGE_FORMAT fif, const FIBITMAP* pfib, const char* folder, const char* name, int width, int height);

#endif // Main_H
