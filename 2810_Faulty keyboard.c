char* finalString(char* s) {
    int len=0;
    int n=strlen(s);
    for(int i=0;i<n;i++){
        if(i+1<n && s[i]=='i' && s[i+1]=='i') i++; //no reversing
        else if(s[i]=='i'){
            int j=0;
            while(j<len/2){
                char temp=s[len-1-j];
                s[len-1-j]=s[j];
                s[j++]=temp;
            }
        }
        else{
            s[len++]=s[i];
        }
    }
    s[len]='\0';
    return s;
}
