#include <bits/stdc++.h>
using namespace std;

int main()
{
int addr1,staddr1,i,j;
char name[20],name1[20],line[50],addr[10],staddr[10];
cout<<"Enter program name:";
cin>>name;
ifstream fs("input.txt");
fs>>line;

for(i=2,j=0;i<8,j<6;i++,j++)
name1[j]=line[i];

name1[j]='\0';
cout<<"program name from object file:"<<name1<<"\n";
if(strcmp(name,name1)==0)
{
do
{
fs>>line;
if(line[0]=='T')
{
for(i=2,j=0;i<8,j<6;i++,j++)
staddr[j]=line[i];
staddr[j]='\0';
staddr1=atoi(staddr);
i=12;
while(line[i] != '$')
{
if(line[i] != '^')
{
cout<<"00"<<staddr1<<"\t"<<line[i]<<line[i+1]<<"\n";
staddr1++;
i=i+2;
}
else
i++;
}
}
else if(line[0]=='E')
fs.close();
}while(!fs.eof());
}
}
