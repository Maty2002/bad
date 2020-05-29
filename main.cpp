#include <iostream>
#include<stdlib.h>
#include <fstream>
#include <vector>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string napis;
	vector<string> tab;
		
	ifstream plik1;
	ofstream plik2;
	
	string parm = argv[1];
	string src;
	
	if(argc){
		src="c:\\"+parm;
	} else{
		src="c:\\palindromy.txt";
	}
	
	src="c:\\palindromy.txt";
	
	plik1.open(src);
	
	if(plik1.good()) {
		 while(!plik1.eof()){
	        getline(plik1, napis);
			tab.push_back(napis);				
	    };	
	 };
	 
	cout<<"Content-Type: application/json;charset=UTF-8;Access-Control-Allow-Origin: *" << (char)13 << (char)10;
	cout<<endl<<"[";
	
	for(int i=0;i<tab.size();i+=2){
		cout<<"{\"imie"<<"\":\""<<tab[i]<<"\",\"subtitle\":\""<<tab[i+1]<<"\"}";
		if(i<tab.size()-2)cout<<",";
	};
	
	cout<<"]";
	
	plik1.close();
	return 0;
}
