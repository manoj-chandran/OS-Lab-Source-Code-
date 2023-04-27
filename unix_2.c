#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>

int main(){
    DIR *dirp;
    struct dirent *dp;
    if((dirp=opendir("/home/mano/Documents/Os_lab"))==NULL){
        printf("Can't open the file .");
        exit(0);
    }
    for(dp=readdir(dirp); dp !=NULL; dp=readdir(dirp)){
        if(dp){
            printf("%s \n", dp->d_name);
        }
    }
    closedir(dirp);
    return 0;
}