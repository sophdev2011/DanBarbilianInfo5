#include <iostream>
#include <string>

using namespace std;
int main()
{
    int N, n, nss, ns, ssp, marime_serie;
    string msg;
    cin >> N >> n ;
    // #1 Daca restul impartirii lui N la 8 este 0?
    if (N%8 == 0) {
        nss = 8; // numarul de sportivi din serie = 8
        ns = (int)N/8; // numarul de serii este catul impartirii lui N la 8
        msg = "NU"; // Nu voi avea serii suplimentare
        if (n%8 == 0) { // # 1-1 Daca restul impartirii numarului sportivului n la 8 este 0
            ssp = (int)n/8; // Seria in care va alerga sportivul va fi catul imaprtirii numarului n al sportivului la 8
        // # 1-1
        } else { // # 1-2 altfel - adica restul impartirii numarului sportivului n la 8 nu este 0
            ssp = (int)n/8 + 1;  // Seria in care va alerga sportivul va fi catul imaprtirii numarului n al sportivului la 8 la care adaugam 1
        // # 1-2
        }
    // #1


    } else {
        // #2 Daca restul impartirii lui N la 7 este 0?
        if (N%7 == 0) {
            nss = 7; // numarul de sportivi din serie = 7
            ns = (int)N/7; // numarul de serii este catul impartirii lui N la 7
            msg = "NU";  // Nu voi avea serii suplimentare
            if (n%7 == 0) {// # 2-1 Daca restul impartirii numarului sportivului n la 7 este 0
                ssp = (int)n/7; // Seria in care va alerga sportivul va fi catul imaprtirii numarului n al sportivului la 7
            // # 2-1
            } else { // # 2-2 altfel - adica restul impartirii numarului sportivului n la 7 nu este 0
                ssp = (int)n/7 + 1; // Seria in care va alerga sportivul va fi catul imaprtirii numarului n al sportivului la 7 la care adaugam 1
                // # 1-2
            }
        // # 2

        // # 3 - Daca N nu se imparte exact nici la 8 si nici la 7 atunci: 
        } else {
            if (N%8 <= N%7) { // Pentru a departaja un numar minim de sportivi in tururile preliminare vom calcula minimul dintre rusturile imp. la N la 7 si respectiv la 8
            // # 3-1 - Daca N este mai mare sau egal decat 8
                if (N>=8) { 
                    nss = 8; // numarul de sportivi din serie = 8
                    ns = (int)N/8; // numarul de serii este catul impartirii lui N la 8
                    msg = "DA"; // Vom avea o serie suplimentara
                    if (n%8 == 0) { // # 3-1-1 Daca catul impartirii numarului sportivului la 8 este 0  
                        ssp = (int)n/8; // Sportivul va alerga in seria = catul impartirii numarului sau la 8
                    } else { // # 3-1-2 Daca catul impartirii numarului sportivului la 8 este diferit de 0 
                        ssp = (int)n/8 + 1; // Sportivul va alerga in seria = catul impartirii numarului sau la 8 la care adaugam 1
                    }
                // #3-1 
                } else { // # 3-2 Altfel - daca N < 8
                    nss = N % 8; // numarul de sportivi din serie = restul impartirii la N la 8
                    ns =  1; // numarul de serii este catul impartirii lui N la 8
                    msg = "NU"; // nu voi avea serii suplimentare
                    ssp = 1; // Sportivul va alerga in seria 1 = singura serie
                }
            } else {
                // # 3-1 - Daca N este mai mare sau egal decat 7
                if (N>=7) { 
                    nss = 7; // numarul de sportivi din serie = 7
                    ns = (int)N/7; // numarul de serii este catul impartirii lui N la 7
                    msg = "DA"; // Vom avea o serie suplimentara
                    if (n%7 == 0) { // # 3-1-1 Daca catul impartirii numarului sportivului la 7 este 0  
                        ssp = (int)n/7; // Sportivul va alerga in seria = catul impartirii numarului sau la 7
                    } else { // # 3-1-2 Daca catul impartirii numarului sportivului la 8 este diferit de 0 
                        ssp = (int)n/7 + 1; // Sportivul va alerga in seria = catul impartirii numarului sau la 7 la care adaugam 1
                    }
                // #3-1 
                } else { // # 3-2 Altfel - daca N < 8
                    nss = N % 7; // numarul de sportivi din serie = restul impartirii la N la 7
                    ns =  1; // numarul de serii este catul impartirii lui N la 7
                    msg = "NU"; // nu voi avea serii suplimentare
                    ssp = 1; // Sportivul va alerga in seria 1 = singura serie
                }

            }
        }
    }

    cout << nss << " " << ns << " " << msg << " " << ssp ;
    return 0;
}