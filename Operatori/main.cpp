#include<iostream>
#include<string> //Libreria per trattare le stringhe, diversa da cstring !
using namespace std;
//Per compilare o meno un determinato pezzo di codice usare le direttive del preprocessore
// Se metto a 0 significa che non voglio compilarlo, 1 lo voglio compilare
#define TEST_TIPI 0 
#define TEST_OPERATORI_ARITMETICI 0
#define TEST_OPERATORI_LOGICI 0
#define TEST_OPERATORI_BITWISE 1
#define TEST_OPERATORI_ASSEGNAZIONE 0
int main(){
    //  Un operatore ci permette di fare manipolazioni sui dati forniti al programma
    //  Gli operatori in C++ ,ed in quasi tutti i linguaggi, assumono un significato specifico in base al tipo degli operandi.
#if TEST_TIPI
    cout <<"************** TEST TIPI *******************"<<endl;
    int a=10;
    int b=-5;
    int c= a + b;
    cout<< c<<endl;
    string a;
    string b;
    cout<< " Inserisci due stringhe "<<endl;
    cin>> a;
    cin>> b;
    cout<<" La prima stringa inserita e' "<<a<<"\n La seconda stringa inserita e' "<< b<< "\n La somma "<< a+b<<endl; // In questo caso la somma realizza una concatenazione invece di una somma algebrica.
#endif 
    //Operatori aritmetici: 
    //  Operatore di Somma +
    //  Operatore di Sottrazione -
    //  Operatore di Prodotto *
    //  Operatore di Divisione.
    //  Operatore modulo % :    a mod b ritorna il resto della divisione a/b = a- floor(a/b)*b
    //                          Ad esempio 10 mod 3 = 10-floor(10/3)*3=10-9=1 
    //                          NB se b>a allora fornisce a 10 mod 12= 10- floor(10/12)*12=10-0=10
#if TEST_OPERATORI_ARITMETICI
    int a=0,b=0; // Quando si dichiarano + variabili assieme ricordarsi di inizializzarle singolarmente: a=0,b=0 NON a,b=0 -> Inizializzo solo b
    cout <<"************** TEST OPERATORI ARITMETICI *******************"<<endl;
    cout << " Inserire due numeri"<<endl;
    cin >>a;
    cin >>b;
    cout << " la somma e' "<<a+b<<endl;
    cout << " la sottrazione e' "<<a-b<<endl;
    cout << " Il prodotto e'  "<<a*b<<endl;
    cout << " la divisione e' "<<a/b<<endl;
    cout << " Il modulo e'  "<<a%b<<endl; 
#endif
    // Operatori Logici
    // Servono a valutare principalmente una funzione booleana.
    // and &&
    // or ||
    // Operatore  ! NOT
#if TEST_OPERATORI_LOGICI
    cout <<"************** TEST OPERATORI LOGICI *******************"<<endl;
    bool condition1=false;
    bool condition2=true;
    //Ho due condizioni logiche che derivano da una particolare elaborazione precedente
    //Voglio effettuare una operazione se almeno una delle due e' vera.
    if(condition1 || condition2)
        cout << " Posso eseguire operazione,almeno una vera"<< endl;
    else
        cout<< " Non posso eseguire operazione, entrambi falsi"<<endl;
    //Se invece voglio eseguire un'operazione se le condizioni logiche sono ENTRAMBE vere usare and
    if(condition1 && condition2)
            cout << " Posso eseguire operazione,entrambe vere"<< endl;
    else
        cout<< " Non posso eseguire operazione, almeno una delle due e' falsa"<<endl;
    //Operatore Not si usa per verificare che una condizione logica sia falsa, ossia voglio eseguire una operazione solo se la condizione e' falsa.
    if(!condition1)
        cout<< "Condition 1 falsa"<< endl;
#endif
    //  Operatori Assegnazione
    //      Assegnano ad una variabile un valore
    //      Assegnazione incondizionata a=b
    //      Operatore ternario/assegnazione condizionata y=condizione? v1 : v2 -> Se e' vera condizione allora assegna ad una variabile v1, altrimenti v2, opertore di assegnazione condizionale in realta'
#if TEST_OPERATORI_ASSEGNAZIONE
    int a=10,b,c,d;
    bool condition=true;
    b=a;//B sara' a
    //Immaginiamo adesso io voglia assegnare alla variabile c il valore di q se e' vera la condizione 1
    //Altrimenti assume un valore negativo.
    c= condition ?a:-1; // a
    d= !condition ?a:-1; // -1
    cout<< " Il valore di b "<< b<< endl;
    cout<< " Il valore di c "<< c<<endl;
    cout<< " Il valore di d "<< d<<endl;

#endif
    //Operatori Binari:
    // Sono semplici operatori aritmetici che ci permettono di fare operazioni a livello di bit
    // Bitwise and= a & b 1101 0011=0001
    // Bitwise or=  a | b 1101 0011=1111
    // Shift a sinistra << M bits 0001 << 2 = 0100
    // Shift a destra >> M bits   1000 >> 2 = 0010
    // Operatore not bitwise ~0001= 1110
    // Operatore XOR bitwise 1001^0001=1000
#if TEST_OPERATORI_BITWISE
    uint8_t a=0b0001;//0000 0001
    // Faccio casting in quanto il c++ fa operazioni con variabili non inferiori alla dimensione del tipo int.
    // con il casting mi riporto ad uint8_t
    printf("%X \n", (uint8_t)(~a));//11111110 ,0xFE,
    printf("%X \n", (uint8_t)(a<<2));//0100,0X04
    printf("%X \n ", (uint8_t)((uint8_t)(a<<2)>>2));//0001 ,0X01
    printf("%X \n", (uint8_t)a|0b0010);//0b11 , 0x03
    printf("%X \n", (uint8_t)a&0b0000);//0
    printf("%X \n",(uint8_t) (a^0b1111));// 0b1110, 0x0E 

#endif
    return 0;
}
