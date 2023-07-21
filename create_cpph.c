#include<stdio.h>
void main(int argc, char **argv){
if(argc!=1){
printf("usage must be:\n");
printf("\033[31madd_cpph\n\033[0m");
return;
}
char s[] = "#cstdio> \n#cstring>\n#cmath> \n#unistd.h>\n#stdlib.h>\n\n#iostream> \n#vector> \n#tuple> \n#algorithm> \n#set> \n#thread> \n#mutex> \n#chrono>\n\nusing namespace std; \n\n$unsigned int u32; \n$unsigned char u8;";
char hash[] = "#include<"; //#
char dol[] = "typedef ";  //$ 
//char star[] = "#define ";
int i,j;
FILE *fptr = fopen("cpph.h", "w");

for(i=0; s[i]; i++){
if(s[i]=='#'){
for(j=0; hash[j]; j++)
fprintf(fptr, "%c", hash[j]);
}
else if(s[i]=='$'){
for(j=0; dol[j]; j++)
fprintf(fptr, "%c", dol[j]);
}
else
fprintf(fptr, "%c", s[i]);
}
fclose(fptr);
}
