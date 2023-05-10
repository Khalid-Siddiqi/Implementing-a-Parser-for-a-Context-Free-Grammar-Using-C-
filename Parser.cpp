#include<iostream>
using namespace std;
int Tra(char,int,char*,int);
// E -> E + T | T
// T -> T * F | F
// F -> (E) | a
int main(){
int n,m=0,indicator,count=0;
cout<<"Enter length of string"<<endl;
cin>>n;
char st[100],st2[100],st3[100],div[10][2];
for(int i=0;i<n;i++){
    cin>>st[i];
}
bool flag=true;
char choice=st[m];
int i=0,j=0;
while(flag){
if(st[i]=='('&&'+'&&'*'){
	if(st[i]=='('){
		indicator=Tra(')',i,st,n);
		if(indicator==-1){cout<<"Error Bracket not closed.";
		}
		else{
			div[j][0]=i;
			div[j][1]=indicator;
			j++;
		}
	}
	if(st[i]=='*'){
		
		indicator=Tra(')',i,st,n);
	}
	if(st[i]=='+'){
		
	}}}
    return (0);
}
int Tra(char symbol,int index,char *arr,int tot_size){
	while(symbol!=*(arr+index) && (tot_size>index)){
		index++;
		if(tot_size==index){return(-1);}
	}
	return(index); }
int F(){

 }

