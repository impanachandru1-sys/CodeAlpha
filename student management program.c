#include <stdio.h>
#include <string.h>
struct S{int r;char n[20];int a;}s;FILE *f,*t;

void add(){f=fopen("s.dat","ab");printf("Roll Name Age: ");scanf("%d%s%d",&s.r,s.n,&s.a);fwrite(&s,sizeof s,1,f);fclose(f);}
void disp(){f=fopen("s.dat","rb");while(fread(&s,sizeof s,1,f))printf("%d %s %d\n",s.r,s.n,s.a);fclose(f);}
void src(){int r,fnd=0;printf("Roll: ");scanf("%d",&r);f=fopen("s.dat","rb");while(fread(&s,sizeof s,1,f))if(s.r==r)printf("%d %s %d\n",s.r,s.n,s.a),fnd=1; if(!fnd)puts("Not found");fclose(f);}
void upd(){int r;printf("Roll upd: ");scanf("%d",&r);f=fopen("s.dat","rb");t=fopen("t.dat","wb");while(fread(&s,sizeof s,1,f)){if(s.r==r)scanf("%s%d",s.n,&s.a);fwrite(&s,sizeof s,1,t);}fclose(f);fclose(t);remove("s.dat");rename("t.dat","s.dat");}
void del(){int r;printf("Roll del: ");scanf("%d",&r);f=fopen("s.dat","rb");t=fopen("t.dat","wb");while(fread(&s,sizeof s,1,f))if(s.r!=r)fwrite(&s,sizeof s,1,t);fclose(f);fclose(t);remove("s.dat");rename("t.dat","s.dat");}

int main(){int c;while(1){printf("1Add 2Disp 3Src 4Upd 5Del 0Exit: ");scanf("%d",&c);
if(c==1)add();else if(c==2)disp();else if(c==3)src();else if(c==4)upd();else if(c==5)del();else return 0;}}