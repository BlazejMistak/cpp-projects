#include <iostream> 
#include <string>
using namespace std;


// STRUKTURY MORE:

struct More {
    string name;
    int koszt;
    string pomoc;
};

More piesSt = {
    "pies",
    300,
    "Jeżeli chcesz wejść w posiadanie tego zwierzęcia to najlepiej odwiedź schronisko dla psów i zaadoptuj twojego nowego czworonoga." 
    };

More kotSt = {
    "kot",
    160,
    "Chcąc wejść w posiadanie swojego nowego futrzanego przyjaciela możesz poszukać w schroniskach lub przyjąć go od osoby znajomej np. sąsiada."
};

More slonSt = {
    "słoń",
    5700,
    "Obecnie słoń afrykański jest zagrożony wyginięciem. Wiele organizacji zajmuje się ochroną tych zwierząt, a Ty możesz wesprzeć je finansowo, aby pomóc w ratowaniu tych zwierząt"
};

More zyrafaSt = {
    "żyrafa",
    2500,
    "Żyrafa jest najwyższym zwierzęciem lądowym na świecie. Możesz zobaczyć je w wielu ogrodach zoologicznych na świecie. Możliwa jest również adopcja żyrafy w niektórych schroniskach, ale trzeba mieć na to odpowiednie warunki." };

int main() {
    cout << "Witaj w programie C++ z ciekawostkami o zwierzętach!" << endl;


    // KLASA I JEJ OBIEKTY:
    class zwierze {
        public:
            string name;
            string description;
            string fact;
        
        zwierze(string name, string description, string fact) : name(name), description(description), fact(fact) {}

        void wypisz() {
            cout << "Nazwa: " << name << endl;
            cout << "Opis: " << description << endl;
            cout << "Ciekawostka: " << fact << endl;
        }
    };
        zwierze pies("pies", "Pies to najlepszy przyjaciel człowieka.", "Pies jest jednym z najbardziej popularnych zwierząt domowych na świecie.");
        zwierze kot("kot", "Kot to zwierzę domowe, które jest bardzo niezależne.", "Koty są bardzo czyste i lubią się wylegiwać na słońcu.");
        zwierze slon("słoń", "Słoń to największe zwierzę lądowe na świecie.", "Słoń afrykański jest zagrożony wyginięciem.");
        zwierze zyrafa("żyrafa", "Żyrafa to najwyższe zwierzę lądowe na świecie.", "Żyrafa ma bardzo długi język (a talerzyk ma dużą szyję), którym może sięgać do liści na drzewach.");

    // USER INPUT:
    string animal;
    cout << "Wprowadź zwierzę z pośród: pies, kot, słoń, żyrafa, o którym chcesz się dowiedzieć ciekawostek: ";
    cin >> animal;

    if (animal == "pies" || animal == "kot" || animal == "slon" || animal == "zyrafa")
    {
        cout << "Zwierzę zostało wybrane poprawnie." << endl;
        cout << "Wybrano: " << animal << endl;

            if (animal == "pies") {
                pies.wypisz();
            } else if (animal == "kot") {
                kot.wypisz();
            } else if (animal == "slon") {
                slon.wypisz();
            } else if (animal == "zyrafa") {
                zyrafa.wypisz();
            }
    }
    else
    {
        cout << "Wprowadź poprawną nazwę zwierzęcia z podanych powyżej (bez polskich znaków)." << endl;
        return main();
    }
    
    // MORE INFO:
    cout << "Czy chcesz dowiedzieć się więcej o utrzymaniu, adopcji lub wsparciu (tak/nie): ";
    string more;
    while (true) {
    cin >> more;
    if (more == "tak") {
         if (animal == "pies") {
                cout << "Koszt utrzymania psa miesięcznie: " << piesSt.koszt << " zł" << endl;
                cout << "Pomoc: " << piesSt.pomoc << endl;
            } else if (animal == "kot") {
                cout << "Koszt utrzymania kota miesięcznie: " << kotSt.koszt << " zł" << endl;
                cout << "Pomoc: " << kotSt.pomoc << endl;
            } else if (animal == "slon") {
                cout << "Koszt utrzymania słonia miesięcznie: " << slonSt.koszt << " zł" << endl;
                cout << "Pomoc: " << slonSt.pomoc << endl;
            } else if (animal == "zyrafa") {
                cout << "Koszt utrzymania żyrafy miesięcznie: " << zyrafaSt.koszt << " zł" << endl;
                cout << "Pomoc: " << zyrafaSt.pomoc << endl;
            }
        break;


    }
    else if (more == "nie") {
        cout << "Dziękuję za skorzystanie z programu!" << endl;
    }
    else {
        cout << "Wprowadź poprawną odpowiedź (tak/nie)." << endl;
    }
    }

}