bool strongPasswordCheckerII(char* password) {
    int size=strlen(password);
    bool upper=false,lower=false,digit=false,special=false;
    if(size<8) return false;
    for(int i=0;i<size;i++){
        if(password[i]>='a' && password[i]<='z') lower=true;
        else if(password[i]>='A' && password[i]<='Z') upper=true;
        else if(isdigit(password[i])) digit=true;
        else special=true; 
    }
    for(int i=0;i<size-1;i++) if(password[i]==password[i+1]) return false;
    if(lower && upper && digit && special) return true;
    return false;
}
