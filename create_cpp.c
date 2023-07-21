#include<stdio.h>
void main(int argc, char **argv){
if(argc!=2){
printf("usage must be:\n");
printf("\033[31mnew_cpp filename.cpp\n\033[0m");
return;
}

FILE *fptr = fopen(argv[1], "w");
char s[] = "#include $cpph.h$ \n\nint main(){ \n\n}";
int i;

for(i=0; s[i]; i++){
if(s[i] == '$')
fprintf(fptr, "%c", '"');
else
fprintf(fptr, "%c", s[i]);
}

fclose(fptr);
}
