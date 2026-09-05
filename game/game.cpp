#include <iostream>
#include <random>

typedef signed char s8; 
typedef unsigned int u8;

using namespace std; 

int main() {  

    unsigned int liczba_wylosowanas; 
    unsigned int liczba_pulapkas; 

    
    random_device liczba_wylosowana;  
    mt19937 gen(liczba_wylosowana());  
    uniform_int_distribution<> dist(1,100); 


    for (int i = 0; i < 1; i++) {    
        liczba_wylosowanas = dist(gen);  
    }

    for (int i = 0; i < 1; i++) {  
        liczba_pulapkas = dist(gen);  
    }

    if(liczba_wylosowanas == liczba_pulapkas) {
        uniform_int_distribution<>dist(1,100);

        for (int i = 0; i < 1; i++) {  
            liczba_pulapkas = dist(gen); 
    }
    }

    int liczba_gracza; 
    int proba; 

    proba = 6; 

    cout << "Napisz liczbe : ";  
    cin >> liczba_gracza; 
    proba = proba - 1; 

    while(liczba_wylosowanas != liczba_gracza) { 

        if(liczba_wylosowanas > liczba_gracza) {
            printf("[+] wylosowana liczba jest wieksza niz twoja\n");  
        } else { 
            printf("[-] wylosowana liczba jest mniejsza niz twoja\n"); 

        }

        if(liczba_gracza == liczba_pulapkas) {
            printf("[:<] przykromi wylosowałes liczbe pulapke\n"); 
        }

        cout << "Napisz liczbe : ";  
        cin >> liczba_gracza; 
        proba = proba - 1; 

        if(proba == 0) { 
            printf("niestety nie udało sie\n"); 
            return 1; 
        }
    }
        
        printf("liczba prawidłowa gratulacje\n");  
        printf("Zaczynamy poziom 2\n");
     
    u8 liczba_wylosowanas2; 
    unsigned int liczba_pulapkas2; 

    uniform_int_distribution<>dist2(1,200);

 for (int i = 0; i < 1; i++) {   
        liczba_wylosowanas2 = dist(gen);  
    }

    uniform_int_distribution<>sdist2(1,200);

    for (int i = 0; i < 1; i++) {  
        liczba_pulapkas2 = sdist2(gen);  
    }

    if(liczba_wylosowanas2 == liczba_pulapkas2) {

        for (int i = 0; i < 1; i++) {  
            liczba_pulapkas2 = sdist2(gen); 
    }
}

    proba = 7;

    cout << "Napisz liczbe : ";
    cin >> liczba_gracza;
    proba = proba - 1;

    while(liczba_wylosowanas2 != liczba_gracza) {

        if(liczba_wylosowanas2 > liczba_gracza) {
            printf("[+] wylosowana liczba jest wieksza niz twoja\n");
        } else { 
            printf("[-] wylosowana liczba jest mniejsza niz twoja\n");

        }

        if(liczba_gracza == liczba_pulapkas2) {
            printf("[:<] przykro mi wylosowałes liczbe pulapke\n");
        }

        cout << "Napisz liczbe : ";
        cin >> liczba_gracza;
        proba = proba - 1;

        if(proba == 0) {
            printf("niestety nie udało sie\n");
            return 1;
        }
    }
        printf("liczba prawidłowa gratulacje\n");
        printf("Zaczynamy poziom 3  \n");

    unsigned int liczba_wylosowanas3;
    unsigned int liczba_pulapkas3;
    unsigned int liczba_pulapkas4;

    uniform_int_distribution<>dist3(1,300);

    for (int i = 0; i < 1; i++) {   
        liczba_wylosowanas3 = dist3(gen);
    }

    uniform_int_distribution<>sdist3(1,300);

    for (int i = 0; i < 1; i++) {
        liczba_pulapkas3 = sdist3(gen);
    }

    uniform_int_distribution<>sdist4(1,300);

    for (int i = 0; i < 1; i++) {
        liczba_pulapkas4 = sdist4(gen);
    }

    proba = 8;

    cout << "Napisz liczbe : ";
    cin >> liczba_gracza;
    proba = proba - 1;

    while(liczba_wylosowanas3 != liczba_gracza) {

        if(liczba_wylosowanas3 > liczba_gracza) {
            printf("[+] wylosowana liczba jest wieksza niz twoja\n");
        } else {
            printf("[-] wylosowana liczba jest mniejsza niz twoja\n");
        }

        liczba_pulapkas3 = dist3(gen);
        liczba_pulapkas4 = dist3(gen);

        if(liczba_gracza == liczba_pulapkas || liczba_gracza == liczba_pulapkas4)
        printf("[:<] przykro mi wylosowałes liczbe pulapke\n");

        cout << "Napisz liczbe : ";
        cin >> liczba_gracza;
        proba = proba -1;

        if(proba == 0) {
            printf("Skonczyly ci sie proby\n");
            return 1;
        }

        printf("Udalo sie!\n"); {
        return 0;
    }
    }
}
