int count(char *s,char x){
    int c=0;
    while(*s!='\0'){
        if(*s==x) c++;
        s++;
    }
    return c;
}
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int* ind=(int*) malloc(wordsSize*sizeof(int));
    int size=0;
    for(int i=0;i<wordsSize;i++){
        if(count(words[i], x)>0) ind[size++]=i;
    }
    *returnSize=size;
    if(size==0){
        free(ind);
        return NULL;
    }
    return ind;
}
