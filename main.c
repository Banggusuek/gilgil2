#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<netinet/in.h>

uint32_t file_read(char* filename){

        FILE* pFile = fopen(filename, "rb");
        uint32_t arr;
        fread(&arr, sizeof(uint32_t),1,pFile);

        return ntohl(arr);
}

int main (int argc,char* argv[]){
        uint32_t arr1, arr2;
        arr1 = file_read(argv[1]);
        arr2 = file_read(argv[2]);
        printf("%d(%x) + %d(%x) = %d(%x)\n", arr1,arr1, arr2,arr2, arr1+arr2,arr1+arr2);

        return 0;
}
