/*
  �мg�@�ӵ{���N���ԧB�Ʀr���B�ഫ������覡��ܡAex:
  
  7609802 =�m�ճ��B�U�h�d�èչs�L���� ;
  1009040300 = �B���h�չs�v�U�T�դ���C \ 
*/ 
#include<iostream>
#include<string>
using namespace std ;
int main(){
	string number ;
	cout<<"Please enter a number(Up to 16 digits):" ;
	cin>>number ;
	
	int size = number.size() ;
	
	for(int i=0;i<number.size() ;i++ ){
		if(number[i] == '9'){
			cout<<"�h" ; 
		}
		if(number[i] == '8'){
			cout<<"��" ; 
		}
		if(number[i] == '7'){
			cout<<"�m" ; 
		}
		if(number[i] == '6'){
			cout<<"��" ; 
		}
		if(number[i] == '5'){
			cout<<"��" ; 
		}
		if(number[i] == '4'){
			cout<<"�v" ; 
		}
		if(number[i] == '3'){
			cout<<"��" ; 
		}
		if(number[i] == '2'){
			cout<<"�L" ; 
		}
		if(number[i] == '1'){
			cout<<"��" ; 
		}
		if(number[i] == '0'){
			if(size %4 == 3 ){
				if(number[i+1] != '0' || number[i+2] != '0'){
					cout<<"�s" ;
			    }
			}
			if(size %4 == 2 && number[i-1] != '0'){
				if(number[i+1] != '0'){
					cout<<"�s" ;
				}
			}
	    }
		if(size%4 == 1){
			if(size/4 == 1){
				if(number[i] != '0' || number[i-1] != '0' || number[i-2] != '0' || number[i-3] != '0'){
					cout<<"�U" ;
				}
			}
			if(size/4 == 2)
				if(number[i] != '0' || number[i-1] != '0' || number[i-2] != '0' || number[i-3] != '0'){
					cout<<"��" ;
				}
			if(size/4 == 3)
				if(number[i] != '0' || number[i-1] != '0' || number[i-2] != '0' || number[i-3] != '0'){
					cout<<"��" ;
				}
		}
		if( number[i] != '0' ) {                          
            if( size % 4 == 2 ){ 
				cout << "�B" ;
			} 
            if( size % 4 == 3 ){
				cout << "��" ;
			} 
            if( size % 4 == 0 ){
				cout << "�a" ;
			} 
    	}   		
	--size ;
	}
	cout<<"����C" <<endl ;
	system("PAUSE")  ;
	return 0 ;
} 
