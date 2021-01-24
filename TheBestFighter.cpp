#include <iostream>
#include <cstdlib>
using namespace std;

int opcja;

struct Player
{
    string gender;
    string name;
    string type;
    int life;
    string feature;
    string weapon;

    Player(string gender, string name, string type, int life, string weapon)
    {
        this->gender = gender;
        this->name = name;
        this->type = type;
        this->life = life;
        this->feature = getHeroFeature();
        this->weapon = weapon;
    }

    static string CreateGender()

    {
        cout << "Wybierz płeć " << endl;
        cout << "1 Kobieta" << endl;
        cout << "2 Mężczyzna" << endl;
        cin >> opcja;
        cout << endl;

        switch (opcja)
        {
        case 1:
            cout << "Twoja postać to kobieta." << endl;
            return "kobieta";

        case 2:
            cout << "Twoja postać to mężczyzna" << endl;
            return "mężczyzna";
        }
        return "";
    }

    static string CreateName()
    {
        string playername = "";
        cout << "Wprowadź imię " << endl;
        cin >> playername;
        cout << endl;
        cout << "Imię twojej postaci to:" << playername << endl;

        return playername;
    }

    static int InitLife()
    {
        int playerLife = 0;
        cout << "Wprowadź ilość życia " << endl;
        cin >> playerLife;
        cout << endl;
        cout << "Wprowadzona ilość życia to:" << playerLife << endl;

        return playerLife;
    }

    static string CreateType()
    {
        cout << "Wybierz typ postaci. " << endl;
        cout << "1 wojownik" << endl;
        cout << "2 obcy" << endl;
        cout << "3 magik" << endl;
        cin >> opcja;
        cout << endl;

        switch (opcja)
        {
        case 1:
            cout << "Twoja postać to wojownik." << endl;
            return "wojownik";
        case 2:
            cout << "Twoja postać to obcy." << endl;
            return "obcy";
        case 3:
            cout << "Twoja postać to magik." << endl;
        }

        return "magik";
    }

    string getHeroFeature()
    {
        string feature[10] = {"mądrość", "szybkość", "siła", "wytrzymałość", "spryt", "przebiegłość", "zręczność", "niewidzialność", "przewidywanie przyszłości", "czytanie w myślach"};
        string heroType = this->type;

        if (gender == "kobieta" && type == "wojownik")
        {
            srand(time(NULL));
            cout << "Losuje liczbę od 0 do "
                 << "\n"
                 << (sizeof(feature) / sizeof(feature[0])) << "\n";
            int abilityNumber = rand() % sizeof(feature) / sizeof(feature[0]);
            cout << "Wylosowano"
                 << "\n"
                 << abilityNumber << "\n";
            return feature[abilityNumber];
        }

        else if (gender == "kobieta" && type == "obcy")
        {
            srand(time(NULL));
            cout << "Losuje liczbę od 0 do "
                 << "\n"
                 << (sizeof(feature) / sizeof(feature[0])) << "\n";
            int abilityNumber = rand() % sizeof(feature) / sizeof(feature[0]);
            cout << "Wylosowano"
                 << "\n"
                 << abilityNumber << "\n";
            return feature[abilityNumber];
        }

        else if (gender == "kobieta" && type == "magik")
        {
            srand(time(NULL));
            cout << "Losuje liczbę od 0 do "
                 << "\n"
                 << (sizeof(feature) / sizeof(feature[0])) << "\n";
            int abilityNumber = rand() % sizeof(feature) / sizeof(feature[0]);
            cout << "Wylosowano"
                 << "\n"
                 << abilityNumber << "\n";
            return feature[abilityNumber];
        }

        else if (gender == "mężczyzna" && type == "wojownik")
        {
            srand(time(NULL));
            cout << "Losuje liczbę od 0 do "
                 << "\n"
                 << (sizeof(feature) / sizeof(feature[0])) << "\n";
            int abilityNumber = rand() % sizeof(feature) / sizeof(feature[0]);
            cout << "Wylosowano"
                 << "\n"
                 << abilityNumber << "\n";
            return feature[abilityNumber];
        }

        else if (gender == "mężczyzna" && type == "obcy")
        {
            srand(time(NULL));
            cout << "Losuje liczbę od 0 do "
                 << "\n"
                 << (sizeof(feature) / sizeof(feature[0])) << "\n";
            int abilityNumber = rand() % sizeof(feature) / sizeof(feature[0]);
            cout << "Wylosowano"
                 << "\n"
                 << abilityNumber << "\n";
            return feature[abilityNumber];
        }
        else if (gender == "mężczyzna" && type == "magik")
        {
            srand(time(NULL));
            cout << "Losuje liczbę od 0 do "
                 << "\n"
                 << (sizeof(feature) / sizeof(feature[0])) << "\n";
            int abilityNumber = rand() % sizeof(feature) / sizeof(feature[0]);
            cout << "Wylosowano"
                 << "\n"
                 << abilityNumber << "\n";
            return feature[abilityNumber];
        }
        else
        {
            cout << "brak umiejętności" << endl;
        }
        return "brak umiejętności";
    }

    static string MagicItem(string gender, string type)

    {
        string weapon[4] = {"miecz", "karabin", "maczuga", "noż"};

        if (gender == "kobieta" && type == "wojownik")
        {
            srand(time(NULL));
            cout << "Losuje liczbę od 0 do "
                 << "\n"
                 << (sizeof(weapon) / sizeof(weapon[0])) << "\n";
            int abilityNumber = rand() % sizeof(weapon) / sizeof(weapon[0]);
            cout << "Wylosowano"
                 << "\n"
                 << abilityNumber << "\n";
            return weapon[abilityNumber];
        }

        else if (gender == "kobieta" && type == "obcy")
        {
            srand(time(NULL));
            cout << "Losuje liczbę od 0 do "
                 << "\n"
                 << (sizeof(weapon) / sizeof(weapon[0])) << "\n";
            int abilityNumber = rand() % sizeof(weapon) / sizeof(weapon[0]);
            cout << "Wylosowano"
                 << "\n"
                 << abilityNumber << "\n";
            return weapon[abilityNumber];
        }

        else if (gender == "kobieta" && type == "magik")
        {
            srand(time(NULL));
            cout << "Losuje liczbę od 0 do "
                 << "\n"
                 << (sizeof(weapon) / sizeof(weapon[0])) << "\n";
            int abilityNumber = rand() % sizeof(weapon) / sizeof(weapon[0]);
            cout << "Wylosowano"
                 << "\n"
                 << abilityNumber << "\n";
            return weapon[abilityNumber];
        }

        else if (gender == "mężczyzna" && type == "wojownik")
        {
            srand(time(NULL));
            cout << "Losuje liczbę od 0 do "
                 << "\n"
                 << (sizeof(weapon) / sizeof(weapon[0])) << "\n";
            int abilityNumber = rand() % sizeof(weapon) / sizeof(weapon[0]);
            cout << "Wylosowano"
                 << "\n"
                 << abilityNumber << "\n";
            return weapon[abilityNumber];
        }

        else if (gender == "mężczyzna" && type == "obcy")
        {
            srand(time(NULL));
            cout << "Losuje liczbę od 0 do "
                 << "\n"
                 << (sizeof(weapon) / sizeof(weapon[0])) << "\n";
            int abilityNumber = rand() % sizeof(weapon) / sizeof(weapon[0]);
            cout << "Wylosowano"
                 << "\n"
                 << abilityNumber << "\n";
            return weapon[abilityNumber];
        }
        else if (gender == "mężczyzna" && type == "magik")
        {
            srand(time(NULL));
            cout << "Losuje liczbę od 0 do "
                 << "\n"
                 << (sizeof(weapon) / sizeof(weapon[0])) << "\n";
            int abilityNumber = rand() % sizeof(weapon) / sizeof(weapon[0]);
            cout << "Wylosowano"
                 << "\n"
                 << abilityNumber << "\n";
            return weapon[abilityNumber];
        }
        else
        {
            cout << "brak broni" << endl;
        }
        return "brak broni";
    }

    void showPlayer()
    {
        cout << "Płeć : " << gender << endl;
        cout << "Imię : " << name << endl;
        cout << "Typ : " << type << endl;
        cout << "Życie : " << life << endl;
        cout << "Zdolność : " << feature << endl;
        cout << "Broń : " << weapon << endl;
    }
};

void TheBestFighter(Player *player1, Player *player2)
{
    bool ans = 0;
    int runda;

    while (player1->life > 0 && player2->life > 0)
    {
        cout << "\nCo zamierzasz zrobić?\n0. Walcz!\n1. Broń się. (0/1)\n";
        cin >> ans;
        if (ans == 0)
        {
            cout << "\n Gracz numer dwa atakuje\n";
            int chance = rand() % 100;
            if (chance < 50)
            {
                player1->life = player1->life - 10;
                cout << "Zostałeś uderzony!\n";
                cout << "Player 1 Life: " << player1->life << endl;
            }
            else
            {
                cout << "Uniknąłeś uderzenia!\n";
                cout << "Player 1 Life: " << player1->life << endl;
            }

            player2->life = player2->life - 10;
            cout << "Zaatakowałeś wojownika numer 2.\n";
            cout << "Player2 Life: " << player2->life << endl;
        }
        else
        {
            cout << "\nGracz numer 2 atakuje\n";
            cout << "Obroniłeś się!\n";
            cout << "Life: " << player1->life << endl;
        }
    }
}

void ShowResults(Player *player1, Player *player2)
{

    if (player1->life = 0)
    {
        cout << "Tę rundę wygrał gracz numer 2" <<  endl;
    }
    else
        (player2->life = 0);
    {
        cout << "Tę rundę wygrał gracz numer 1" <<  endl;
    }

    cout << "Koniec gry" << endl;
}

void gra(Player *player1, Player *player2)
{
    system("cls");
    cout << "---------------------" << endl;
    cout << "1 Wyjście z gry" << endl;
    cout << "2 Graj" << endl;
    cin >> opcja;

    switch (opcja)
    {
    case 1:
        cout << "Zakańczam grę" << endl;
        break;
    case 2:

        cout << "Dwoch graczy spotkało się, aby stoczyć walkę o tytuł najsilnijeszego. Jesteś graczem numer 1. Masz 100 punktow życia , tak jak twoj przeciwnik. W każdym kroku możesz wybrać atak lub obronę. Możliwe 3 rundy. Runda kończy się gdy jeden z graczy będzie miał 0 punktow." << endl;

        TheBestFighter(player1, player2);
        ShowResults(player1, player2);
        break;
    }
}

void menu()
{
    system("cls");
    cout << "---------------------" << endl;
    cout << "1 Gra" << endl;
    cout << "2 Wyjście" << endl;
    cin >> opcja;
    cout << endl;

    switch (opcja)
    {
    case 1:
        cout << "---------------------" << endl;
        cout << "Witaj w grze TheBestFighter. Jeśli widzimy się pierwszy raz, utworz profil swojej postaci." << endl;
        cout << "1 Utworz gracza" << endl;
        cout << "2.wyjdź" << endl;

        cin >> opcja;
        cout << endl;
        switch (opcja)
        {
        case 1:
        {
            string gender = Player::CreateGender();
            string name = Player::CreateName();
            string type = Player::CreateType();
            int life = Player::InitLife();
            string weapon = Player::MagicItem(gender, type);

            Player *player1 = new Player(gender, name, type, life, weapon);
            player1->showPlayer();

            string gender2 = Player::CreateGender();
            string name2 = Player::CreateName();
            string type2 = Player::CreateType();
            int life2 = Player::InitLife();
            string weapon2 = Player::MagicItem(gender2, type2);

            Player *player2 = new Player(gender2, name2, type2, life2, weapon2);
            player2->showPlayer();

            gra(player1, player2);

            break;
        }
        }
        break;
    case 2:
        cout << "Zakańczam grę" << endl;
        break;
    }
}

int main()
{
    menu();

    return 0;
}
