#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <dos.h>
using namespace std;

struct Nodo{
	int valor;
	Nodo *siguiente;
};

void Push(Nodo *&,int);
void Pop(Nodo *&);

void Add(Nodo *&,int, int);
void Remove(Nodo *&);

Nodo *fin1=NULL;
Nodo *fin2=NULL;
Nodo *fin3=NULL;
Nodo *fin4=NULL;

int main(){
    srand(time(NULL));
	Nodo *inicio1=NULL;
	Nodo *inicio2=NULL;
	Nodo *inicio3=NULL;
	Nodo *inicio4=NULL;

	Nodo *pila1=NULL;
	Nodo *pila2=NULL;
	Nodo *pila3=NULL;
	Nodo *pila4=NULL;

	int valor,contar=0, numero_caja, numero_cajab, c1=0, c2=0, c3=0, c4=0, cc1=1, cc2=1, cc3=1, cc4=1, n1, n2, n3, n4;
	int ab=0, bb=0, cb=0, db=0, sum1=0, sum2=0, sum3=0, sum4=0,b1=0, b2=0, b3=0, b4=0, bb1=0, bb2=0, bb3=0, bb4=0;
	int m1=0, m2=0, m3=0, m4=0, eq1=0, eq2=0, eq3=0, eq4=0;
	char s;
	gotoxy(1,9);   cout<<"께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께�";
	gotoxy(2,10);  cout<<"Caja 1";
	gotoxy(22,10); cout<<"Caja 2";
	gotoxy(42,10); cout<<"Caja 3";
	gotoxy(62,10); cout<<"Caja 4";
    gotoxy(1,11); cout<<"께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께께�";
    for(int ii=0; ii<17; ii++){
        gotoxy(17,9+ii); cout<<"께";
        gotoxy(37,9+ii); cout<<"께";
        gotoxy(57,9+ii); cout<<"께";
    }
    gotoxy(1,1);cout<<"Pila 1:";
    gotoxy(1,3);cout<<"Pila 2:";
    gotoxy(1,5);cout<<"Pila 3:";
    gotoxy(1,7);cout<<"Pila 4:";
	for(int i=0; i<200; i++){
        Sleep(1000);
        numero_caja=rand()%4+1;
        valor=rand()%90+1;
        //gotoxy(65, 4+i);cout<<numero_caja<<"---"<<valor<<endl;                  //AQUI PRUEBA
        switch(numero_caja){
            case 1: Add(inicio1,valor, numero_caja); c1=c1+1; break;
            case 2: Add(inicio2,valor, numero_caja); c2=c2+1; break;
            case 3: Add(inicio3,valor, numero_caja); c3=c3+1; break;
            case 4: Add(inicio4,valor, numero_caja); c4=c4+1; break;
        }
        if(i>0 && i%2==0){
            numero_cajab=rand()%4+1;
            //gotoxy(75, 4+i);cout<<numero_cajab;                              //AQUI PRUEBA
                switch(numero_cajab){
                    case 1:{
                        if (inicio1!=NULL){
                            if(ab>=65){
                                ab=0;
                                m1=1;
                            }
                            //gotoxy(9+ab,2+m1);cout<<ab;
                            if(cc1==14){
                                bb1=bb1+3;
                                cc1=0;
                            }
                            gotoxy(3+bb1,12+cc1); cout<<"  ";
                            if(11+cc1>11){
                                gotoxy(3+bb1,11+cc1); cout<<"  ";
                            }
                            ab=ab+3;
                            n1= inicio1->valor;
                            sum1=sum1+n1;
                            Push(pila1,n1);
                            Remove(inicio1); cc1=cc1+1;
                        }
                        break;
                    }
                    case 2:{
                        if(inicio2!=NULL){
                            if(bb>=65){
                                bb=0;
                                m2=1;
                            }
                            if(cc2==14){
                                bb2=bb2+3;
                                cc2=0;
                            }
                            gotoxy(20+bb2,12+cc2); cout<<"  ";
                            if(11+cc2>11){
                                gotoxy(20+bb2,11+cc2); cout<<"  ";
                            }
                            bb=bb+3;
                            n2= inicio2->valor;
                            sum2=sum2+n2;
                            Push(pila2,n2);
                            Remove(inicio2); cc2=cc2+1;
                        }
                        break;
                    }
                    case 3:{
                        if(inicio3!=NULL){
                            if(cb>=65){
                                cb=0;
                                m3=1;
                            }
                            if(cc3==14){
                                bb3=bb3+3;
                                cc3=0;
                            }
                            gotoxy(40+bb3,12+cc3); cout<<"  ";
                            if(11+cc3>11){
                                gotoxy(40+bb3,11+cc3); cout<<"  ";
                            }
                            cb=cb+3;
                            n3=inicio3->valor;
                            sum3=sum3+n3;
                            Push(pila3,n3);
                            Remove(inicio3); cc3=cc3+1;
                        }
                        break;
                    }
                    case 4:{
                        if(inicio4!=NULL){
                            if(db>=65){
                                db=0;
                                m4=1;
                            }
                            if(cc4==14){
                                bb4=bb4+3;
                                cc4=0;
                            }
                            gotoxy(60+bb4,12+cc4); cout<<"  ";
                            if(11+cc4>11){
                                gotoxy(60+bb4,11+cc4); cout<<"  ";
                            }
                            db=db+3;
                            n4=inicio4->valor;
                            sum4=sum4+n4;
                            Push(pila4,n4);
                            Remove(inicio4); cc4=cc4+1;
                        }
                        break;
                    }
                }
            }

        if(fin1!=NULL || fin2!=NULL || fin3!=NULL || fin4!=NULL ){
            switch(numero_caja){
                case 1:{
                    if(c1==14){
                        b1=b1+3;
                        c1=0;
                        for(int j=0; j<14;j++){
                            gotoxy(3+b1-1,12+j); printf ("%c", 186);
                        }
                    }
                    gotoxy(3+b1,12+c1); cout<<fin1->valor;

                    break;
                }
                case 2:{
                    if(c2==14){
                        b2=b2+3;
                        c2=0;
                        for(int j=0; j<14;j++){
                            gotoxy(20+b2-1,12+j); printf ("%c", 186);
                        }
                    }
                    gotoxy(20+b2,12+c2); cout<<fin2->valor;
                    break;
                }
                case 3:{
                    if(c3==14){
                        b3=b3+3;
                        c3=0;
                        for(int j=0; j<14;j++){
                            gotoxy(40+b3-1,12+j); printf ("%c", 186);
                        }
                    }
                    gotoxy(40+b3,12+c3); cout<<fin3->valor;
                    break;
                }
                case 4:{
                    if(c4==14){
                        b4=b4+3;
                        c4=0;
                        for(int j=0; j<14;j++){
                            gotoxy(60+b4-1,12+j); printf ("%c", 186);
                        }
                    }
                    gotoxy(60+b4,12+c4); cout<<fin4->valor;
                    break;
                }
            }
        }
        if (pila1!=NULL){gotoxy(9+ab,1+m1);cout<<pila1->valor;}
        if (pila2!=NULL){gotoxy(9+bb,3+m2);cout<<pila2->valor;}
        if (pila3!=NULL){gotoxy(9+cb,5+m3);cout<<pila3->valor;}
        if (pila4!=NULL){gotoxy(9+db,7+m4);cout<<pila4->valor;}

        gotoxy(9,10); cout<<"("<<sum1<<")";
        gotoxy(29,10); cout<<"("<<sum2<<")";
        gotoxy(49,10); cout<<"("<<sum3<<")";
        gotoxy(69,10); cout<<"("<<sum4<<")";

	}
	gotoxy(3+bb1,12+cc1); cout<<"  ";
    gotoxy(20+bb2,12+cc2); cout<<"  ";
    gotoxy(20+bb2,12+cc2); cout<<"  ";
    gotoxy(20+bb2,12+cc2); cout<<"  ";

	/*gotoxy(0,20); cout<<"";
    cout<<"---------------------------------------------"<<endl;
	cout<<"--------------- inicio: "<<inicio1->valor<<endl;
	cout<<"--------------- fin: "<<fin1->valor<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"--------------- inicio: "<<inicio2->valor<<endl;
	cout<<"--------------- fin: "<<fin2->valor<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"--------------- inicio: "<<inicio3->valor<<endl;
	cout<<"--------------- fin: "<<fin3->valor<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"--------------- inicio: "<<inicio4->valor<<endl;
	cout<<"--------------- fin: "<<fin4->valor<<endl;
    */
	getch();
	return 0;

}

void Add(Nodo *&inicio,int v, int c){
	Nodo *add = new Nodo();
	add->valor = v;
	add->siguiente = NULL;
	if (inicio== NULL){
		inicio = add;
	}else{
	    switch(c){
            case 1: fin1->siguiente=add; break;
            case 2: fin2->siguiente=add; break;
            case 3: fin3->siguiente=add; break;
            case 4: fin4->siguiente=add; break;
        }
		//fin->siguiente=add;
	}
        switch(c){
            case 1: fin1=add; break;
            case 2: fin2=add; break;
            case 3: fin3=add; break;
            case 4: fin4=add; break;
        }
}
void Remove(Nodo *&inicio){
	int v;
	Nodo *fin=NULL;
	v = inicio->valor;
	Nodo *cola = inicio;

	if(inicio == fin){
		inicio = NULL;
		fin = NULL;
	}
	else{
		inicio = inicio->siguiente;
	}
	delete cola;
}
void Push(Nodo *&pila,int v){
	Nodo *push = new Nodo();
	push->valor = v;
	push->siguiente = pila;
	pila = push;
}

void Pop(Nodo *&pila){
	int v=NULL;
	Nodo *pop = pila;
	v = pop->valor;
	pila = pop->siguiente;
		/*if(pila == NULL){
		}*/
	delete pop;
}
