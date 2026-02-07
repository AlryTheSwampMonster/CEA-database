// Project1.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
#include <string>
// #include <personel.cpp>

using namespace std;

string divider = "==========================================================================================================================================";

/*
enum class AuthorizationCEA
{
    NONE,
    EPSILON,
    DELTA,
    GAMMA,
    BETA,
    ALPHA
};

enum class ClassificationCEA
{
    NONE,
    VERDE,
    GIALLO,
    ARANCIONE,
    ROSSO,
    GRIGIO,
    NERO,
    VIOLA
};

class AnomalyCEA
{

public:

    std::string name;
    std::string authorization;
    int number;
    std::string classification;
    int hostility;
    std::string buttons;
    std::string facility;
    std::string supervisor;

};
*/

class userInfo
{
public:

    int userID;
    string userName;
    string password;
    string department;
    string position;
    int authLevel;
    int roleLevel;
    string facility;
    string worksOn;
    int warnsReceived;
    string workedAt;
    string workedOn;

};

void login()
{
    string credentials = "";
    int attempts = 0;

    if (attempts > 0)
    {
        cout << divider << endl << endl <<
            "Accessing credentials required." << endl <<
            "Please insert your username and password:" << endl << endl;

        cin >> credentials;

        if (1)
        {

        }
        else
        {
            attempts = attempts - 1;



            login();
        }
    }
    else
    {
        cout << divider << endl << endl <<
            "Access denied." << endl << endl << "Your location has been notified to your local Department of Internal Security, and Data Preservation Department." << endl <<
            "If they do not respond, the location is marked as an High clearance facility or an emergency is taking place, the nearest Armed Mobiled Unit will also be notified." << endl <<
            "Please do not move or leave the roo, you are in or you may be marked as hostile and may result in: A warning, decresed payment, demotion, termination, or execution." << endl << endl <<
            "We thank you for your cooperation." << endl << endl << divider << endl << endl;
    }
}


int main()
{
    login();







    /*

    Old code for CEA, DO NOT TOUCH

    AnomalyCEA cea024;

    cea024.name = "Oscura proliferazione";
    cea024.authorization = "Gamma";
    cea024.number = 24;
    cea024.classification = "Giallo";
    cea024.hostility = 0;
    cea024.buttons = "X?X";
    cea024.facility = "Campo Halley";
    cea024.supervisor = "Dr. Doris";

    std::cout << cea024.name << std::endl;
    std::cout << cea024.authorization << std::endl;
    std::cout << cea024.number << std::endl;
    std::cout << cea024.classification << std::endl;
    std::cout << cea024.hostility << std::endl;
    std::cout << cea024.buttons << std::endl;
    std::cout << cea024.facility << std::endl;
    std::cout << cea024.supervisor << std::endl;
    */
}

// Per eseguire il programma: CTRL+F5 oppure Debug > Avvia senza eseguire debug
// Per eseguire il debug del programma: F5 oppure Debug > Avvia debug

// Suggerimenti per iniziare: 
//   1. Usare la finestra Esplora soluzioni per aggiungere/gestire i file
//   2. Usare la finestra Team Explorer per connettersi al controllo del codice sorgente
//   3. Usare la finestra di output per visualizzare l'output di compilazione e altri messaggi
//   4. Usare la finestra Elenco errori per visualizzare gli errori
//   5. Passare a Progetto > Aggiungi nuovo elemento per creare nuovi file di codice oppure a Progetto > Aggiungi elemento esistente per aggiungere file di codice esistenti al progetto
//   6. Per aprire di nuovo questo progetto in futuro, passare a File > Apri > Progetto e selezionare il file con estensione sln