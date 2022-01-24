#include<iostream>
using namespace std;

// Sono in un ambito di visibilita' globale, ossia ogni blocco di parentesi graffe  mi puo' richiamare 
const int magic_number=10;

int main(){
    /*
        Scrivo commento, i commenti non vengono considerati dal compilatore
    */
    //int -> nmmero intero, con segno
    //char -> carattere
    // unsigned int -> senza segno
    // bool -> tipo booleano
    //float -> Numero con virgola a 32 bit
    //double -> Numero con virgola a 64 bit

    //la dichiarazione di una variabile e' il primo punto del programma in cui questa viene incontrata la prima
    //Il punto in cui viene dichiarata una variabile rappresenta la sua visibilita' , scope.
    // lo scope di una variabile e' il blocco di parentesi graffe in cui una variabile e' usabile
    //L'inizializzazione e' il punto del programma in cui alla variabile viene dato il suo primo valore( valore iniziale)
    int var; 
    //E' possibile inizializzare una variabile alla sua dichiarazione
    bool condition=false;
    cout << "Inserisci il numero magico"<< endl;
    cin >> var;
    condition=(var==magic_number);

    /*if e' un costrutto che ha questa forma

                if(condizione logica){
                    azione1
                    azione2 
                    azione3 
                }
                else{
                    azione1
                    azione2 
                    azione3
                }
    */
    /*
        Qualora io debba eseguire una sola operazione allora 
        if(condizione logica)
            singola operazione
        else 
            singola operazione
    */
    if(condition)
        cout<< " Hai indovinato il numero "<<endl;
    else    
        cout<< " Non hai indovinato il numero" <<endl;
    /*
        Ulteriore modo in cui era possibile realizzarlo 
        if(var==magic_number)
            cout<< " Hai indovinato il numero "<<endl;
        else    
            cout<< " Non hai indovinato il numero" <<endl;
    */
    cout<<" Inserisci 1 per test di visibilita' "<<endl;
    cin>>var;
    if(var==1){
        //a1 ha scope solo in questo if ed e' possibile usarlo solo in questo if in quanto ha solo qui visibilita' 
        char carattere1='a1';
        cout<< " Il carattere per il test di visibilita' e' a1"<<endl;
    }
    else    
        cout<< " Test non supportato "<< endl;
    /*
        Non posso qui usare la variabile carattere1 perche' e' stata dichiarata in un if ed ha visibilita' , esiste , e' richiamabile solo in quell'if
        cout<< "Il carattere che io ho scelto e' "<< carattere1<<endl;
    */

    // OGni variabile e' rappresentata su un determinato numero di bit.
    //int ed unsigned int sono due variabili che vengono rappresentate su un numero di bit dipendenti dall'architettura del pc ossia dal pc dell'utilizzatore
    cout<<" Per stampare la dimensione di una variabile usare sizeof(tipo_variabile) "<<endl;
    cout<< " La dimensione di int "<< sizeof(int)*8<< " la dimensione di unsigned int e' "<< sizeof(unsigned int)*8<<endl; 
    //Per specificare il numero di bit usare uintNBITS_t 
    //NBITS->8,16,32,64
    uint32_t x=10;
    int16_t y=-10;
    // E' possibile usare il sizeof anche direttamente con le variabili : sizeof(nome_variabile)
    cout<< "Deve essere 32 bit "<< sizeof(x)*8 << " Deve essere 16 bit " <<sizeof(y)*8<<endl;
    
    //Numeri con virgola in singola precisione vengono rappresentati mediante il tipo float
    float virgola1=0.05;
    // a doppia precisione mediante i double
    double virgola2=0.000004;
    cout<< " Primo numero con virgola: "<< virgola1<<" Dimensione primo numero "<<sizeof(virgola1)*8<< " Secondo numero con virgola "<< virgola2<<" Dimensione secondo numero "<< sizeof(virgola2)*8<< endl;
    return 0;
}
