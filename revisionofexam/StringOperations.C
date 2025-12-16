

#include<Stdio.h>
int myStrLen (char s[]){
    int i=0;
    while (s[i]) i++;
    return i;
}
void myStrCat (char a[],char b[]){
    int i=0 , j=0;
    while(a[i]) i++;
    while(b[j]) a[i++]=b[j++];
    a[i]='\0';
}
int myStrComp (char a[] , char b[]){
    int i=0;
    while(a[i] && a[i]==b[i])i++;
    return a[i]-b[i];
}
int main(){
    char a[100],b[100];
    printf("Enter first string:");
    gets(a);
    printf("Enter Second String:");
    gets(b);
    printf("Length of first: %d\n",myStrLen(a));
    printf("Length of second: %d\n",myStrLen(b)); 
    myStrCat(a,b);
    printf("Concatenated : %s\n",a);
    if(myStrComp(a,b)==0)printf("Strings are equal");
    else printf("Theyre not eqaul");

    return 0;
}