#include<iostream>
#include "Header1.h";
using namespace std;


void func1() {

top:int des;
    cout << "---------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\tPlese Enter your Destination(Uni_Code) :   " << endl;
    cout << "---------------------------------------------------------------------------------------------------------------" << endl;
    cin >> des;
    cout << endl;
    cout << endl;


    if (des == 1) {
        HashTable ht1;

        ht1.insert("\t\t\t\t\tBus 1", "10:00 A.M");
        ht1.insert("\t\t\t\t\tBus 2", "12:30 P.M");
        ht1.insert("\t\t\t\t\tBus 3", "01:00 P.M");
        ht1.insert("\t\t\t\t\tBus 4", "02:00 P.M");
        ht1.insert("\t\t\t\t\tBus 5", "03:00 P.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;
        string Jaffna[] = { "\t\tColombo","Gampaha","Kegalle","Kurunegala","Anuradhapura","Wauniyawa","Kilinochchi","Jaffna" };

        int size1 = sizeof(Jaffna) / sizeof(Jaffna[0]);

        ProjectLinkedList bms1;
        bms1.addNode(ht1, Jaffna, size1, 1500, 1);
        bms1.searchAndPrint(1, Jaffna, ht1, size1, 1500);
        cout << endl;
        cout << endl;

        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\ Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;


        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 2) {

        HashTable ht2;
        ht2.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht2.insert("\t\t\t\t\tBus 2", "8:30 A.M");
        ht2.insert("\t\t\t\t\tBus 3", "9:00 A.M");
        ht2.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht2.insert("\t\t\t\t\tBus 5", "10:00 A.M");
        ht2.insert("\t\t\t\t\tBus 6", "10:30 A.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;

        string Kilinochchi[] = { "\t\tColombo","Gampaha","Kegalle","Kurunegala","Anuradhapura","Wauniyawa","Kilinochchi" };
        int size2 = sizeof(Kilinochchi) / sizeof(Kilinochchi[0]);


        ProjectLinkedList bms2;
        bms2.addNode(ht2, Kilinochchi, size2, 2000, 2);
        bms2.searchAndPrint(2, Kilinochchi, ht2, size2, 2000);
        cout << endl;

        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\tPress Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 3) {
        HashTable ht3;
        ht3.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht3.insert("\t\t\t\t\tBus 2", "8:30 A.M");
        ht3.insert("\t\t\t\t\tBus 3", "9:00 A.M");
        ht3.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht3.insert("\t\t\t\t\tBus 5", "10:00 A.M");
        ht3.insert("\t\t\t\t\tBus 6", "10:30 A.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;

        string Mannaram[] = { "\t\tColombo","Gampaha","Kegalle","Kurunegala","Anuradhapura","Mannanram" };
        int size3 = sizeof(Mannaram) / sizeof(Mannaram[0]);


        ProjectLinkedList bms3;
        bms3.addNode(ht3, Mannaram, size3, 1800, 3);

        bms3.searchAndPrint(3, Mannaram, ht3, size3, 1800);
        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\tPress Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 4) {
        HashTable ht4;
        ht4.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht4.insert("\t\t\t\t\tBus 2", "8:30 A.M");
        ht4.insert("\t\t\t\t\tBus 3", "9:00 A.M");
        ht4.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht4.insert("\t\t\t\t\tBus 5", "01:00 P.M");
        ht4.insert("\t\t\t\t\tBus 6", "03:30 P.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;


        string Vavnia[] = { "\t\tColombo","Gampaha","Kegalle","Kurunegala","Anuradhapura","Wauniyawa" };
        int size4 = sizeof(Vavnia) / sizeof(Vavnia[0]);


        ProjectLinkedList bms4;
        bms4.addNode(ht4, Vavnia, size4, 2000, 4);

        bms4.searchAndPrint(4, Vavnia, ht4, size4, 2000);
        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 5) {
        HashTable ht5;
        ht5.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht5.insert("\t\t\t\t\tBus 2", "8:30 A.M");
        ht5.insert("\t\t\t\t\tBus 3", "9:00 P.M");
        ht5.insert("\t\t\t\t\tBus 4", "9:30 P.M");
        ht5.insert("\t\t\t\t\tBus 5", "10:00 P.M");
        ht5.insert("\t\t\t\t\tBus 6", "11:30 P.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;


        string Mulathiv[] = { "\t\tKottawa","Negambo","Kurunegala","Mathale","Habarana","Anuradhapura","Wauniya","Mulathiu" };
        int size5 = sizeof(Mulathiv) / sizeof(Mulathiv[0]);


        ProjectLinkedList bms5;
        bms5.addNode(ht5, Mulathiv, size5, 1700, 5);

        bms5.searchAndPrint(5, Mulathiv, ht5, size5, 1700);
        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "============================================================================================================" << endl;
            cout << "\t\t\tThank You...!" << endl;
            cout << "============================================================================================================" << endl;
        }
    }
    else if (des == 6) {
        HashTable ht6;
        ht6.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht6.insert("\t\t\t\t\tBus 2", "10:30 A.M");
        ht6.insert("\t\t\t\t\tBus 3", "01:00 P.M");
        ht6.insert("\t\t\t\t\tBus 4", "02.:30 P.M");
        ht6.insert("\t\t\t\t\tBus 5", "03:00 P.M");
        ht6.insert("\t\t\t\t\tBus 6", "04:30 P.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;


        string Puttalam[] = { "\t\tKottawa","Negambo","Puttalama" };
        int size6 = sizeof(Puttalam) / sizeof(Puttalam[0]);


        ProjectLinkedList bms6;
        bms6.addNode(ht6, Puttalam, size6, 2300, 6);

        bms6.searchAndPrint(6, Puttalam, ht6, size6, 2300);
        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;


        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 7) {
        HashTable ht7;
        ht7.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht7.insert("\t\t\t\t\tBus 2", "8:30 A.M");
        ht7.insert("\t\t\t\t\tBus 3", "9:00 A.M");
        ht7.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht7.insert("\t\t\t\t\tBus 5", "10:40 A.M");
        ht7.insert("\t\t\t\t\tBus 6", "11:30 A.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;


        string Kurunagala[] = { "\t\tKottawa","Kadawatha","Mirigama","Kurunegala" };
        int size7 = sizeof(Kurunagala) / sizeof(Kurunagala[0]);


        ProjectLinkedList bms7;
        bms7.addNode(ht7, Kurunagala, size7, 900, 7);

        bms7.searchAndPrint(7, Kurunagala, ht7, size7, 900);
        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 8) {
        HashTable ht8;
        ht8.insert("\t\t\t\t\tBus 1", "06:00 A.M");
        ht8.insert("\t\t\t\t\tBus 2", "07:30 A.M");
        ht8.insert("\t\t\t\t\tBus 3", "08:00 A.M");
        ht8.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht8.insert("\t\t\t\t\tBus 5", "10:00 A.M");
        ht8.insert("\t\t\t\t\tBus 6", "11:30 A.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;

        string Gampaha[] = { "\t\tKottawa","Wattala","Kadawatha","Gampaha" };
        int size8 = sizeof(Gampaha) / sizeof(Gampaha[0]);


        ProjectLinkedList bms8;
        bms8.addNode(ht8, Gampaha, size8, 400, 8);

        bms8.searchAndPrint(8, Gampaha, ht8, size8, 400);
        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 9) {
        HashTable ht9;
        ht9.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht9.insert("\t\t\t\t\tBus 2", "8:30 A.M");
        ht9.insert("\t\t\t\t\tBus 3", "9:10 A.M");
        ht9.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht9.insert("\t\t\t\t\tBus 5", "10:00 A.M");
        ht9.insert("\t\t\t\t\tBus 6", "10:30 A.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;


        string Kaluthara[] = { "\t\tKottawa","Kaduwela","Homagama","Kaluthara" };
        int size9 = sizeof(Kaluthara) / sizeof(Kaluthara[0]);


        ProjectLinkedList bms9;
        bms9.addNode(ht9, Kaluthara, size9, 200, 9);

        bms9.searchAndPrint(9, Kaluthara, ht9, size9, 200);
        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 10) {
        HashTable ht10;
        ht10.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht10.insert("\t\t\t\t\tBus 2", "8:30 A.M");
        ht10.insert("\t\t\t\t\tBus 3", "9:00 A.M");
        ht10.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht10.insert("\t\t\t\t\tBus 5", "10:00 A.M");
        ht10.insert("\t\t\t\t\tBus 6", "10:30 A.M");


        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;


        string Anuradhapura[] = { "\t\tKottawa","Giriulla","Narammal","Wariyapola","Galgamuwa","Thabuttegama","Anuradhappura" };
        int size10 = sizeof(Anuradhapura) / sizeof(Anuradhapura[0]);


        ProjectLinkedList bms10;
        bms10.addNode(ht10, Anuradhapura, size10, 1300, 10);

        bms10.searchAndPrint(10, Anuradhapura, ht10, size10, 1300);
        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 11) {
        HashTable ht11;
        ht11.insert("\t\t\t\t\tBus 1", "7:00 A.M");
        ht11.insert("\t\t\t\t\tBus 2", "7:30 A.M");
        ht11.insert("\t\t\t\t\tBus 3", "9:00 A.M");
        ht11.insert("\t\t\t\t\tBus 4", "9:30 P.M");
        ht11.insert("\t\t\t\t\tBus 5", "10:00 P.M");
        ht11.insert("\t\t\t\t\tBus 6", "10:30 P.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;

        string Polonnaruwa[] = { "\t\tKottawa","Negambo","Mirigama","Kurunegama","Malsiripura","Galewela","Dabulla","Habarana","Polonnaruawa" };
        int size11 = sizeof(Polonnaruwa) / sizeof(Polonnaruwa[0]);


        ProjectLinkedList bms11;
        bms11.addNode(ht11, Polonnaruwa, size11, 1500, 11);

        bms11.searchAndPrint(11, Polonnaruwa, ht11, size11, 1500);
        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 12) {
        HashTable ht12;
        ht12.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht12.insert("\t\t\t\t\tBus 2", "8:30 A.M");
        ht12.insert("\t\t\t\t\tBus 3", "9:00 A.M");
        ht12.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht12.insert("\t\t\t\t\tBus 5", "10:00 A.M");
        ht12.insert("\t\t\t\t\tBus 6", "10:30 A.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;


        string Matale[] = { "\t\tKottawa","Katunayeka","Mirigama","Kurunegala","Mathale" };
        int size12 = sizeof(Matale) / sizeof(Matale[0]);


        ProjectLinkedList bms12;
        bms12.addNode(ht12, Matale, size12, 900, 12);

        bms12.searchAndPrint(12, Matale, ht12, size12, 900);
        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;


        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 13) {
        HashTable ht13;
        ht13.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht13.insert("\t\t\t\t\tBus 2", "8:40 A.M");
        ht13.insert("\t\t\t\t\tBus 3", "9:00 A.M");
        ht13.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht13.insert("\t\t\t\t\tBus 5", "10:00 A.M");
        ht13.insert("\t\t\t\t\tBus 6", "11:30 A.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;

        string Kandy[] = { "\t\tKottawa","Kadawatha","Gampaha","Nittabuwa","Kegalla","Mawanella","Kandy" };
        int size13 = sizeof(Kandy) / sizeof(Kandy[0]);


        ProjectLinkedList bms13;
        bms13.addNode(ht13, Kandy, size13, 1100, 13);

        bms13.searchAndPrint(13, Kandy, ht13, size13, 1100);
        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 14) {
        HashTable ht14;
        ht14.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht14.insert("\t\t\t\t\tBus 2", "8:30 A.M");
        ht14.insert("\t\t\t\t\tBus 3", "9:00 A.M");
        ht14.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht14.insert("\t\t\t\t\tBus 5", "10:00 A.M");
        ht14.insert("\t\t\t\t\tBus 6", "10:30 A.M");


        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;


        string Nuwaraeliya[] = { "\t\tKottawa","Gampaha","Ruwanwella","Haton","Thalawakale","Nuwara Eliya" };
        int size14 = sizeof(Nuwaraeliya) / sizeof(Nuwaraeliya[0]);


        ProjectLinkedList bms14;
        bms14.addNode(ht14, Nuwaraeliya, size14, 950, 14);

        bms14.searchAndPrint(14, Nuwaraeliya, ht14, size14, 950);
        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 15) {
        HashTable ht15;
        ht15.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht15.insert("\t\t\t\t\tBus 2", "8:30 A.M");
        ht15.insert("\t\t\t\t\tBus 3", "9:00 A.M");
        ht15.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht15.insert("\t\t\t\t\tBus 5", "10:00 A.M");
        ht15.insert("\t\t\t\t\tBus 6", "10:30 A.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;


        string Kegalla[] = { "\t\tKottawa","Wattala","Kadawatha","Gampaha","Warakapola","Galigamuwa","Kegalla" };
        int size15 = sizeof(Kegalla) / sizeof(Kegalla[0]);


        ProjectLinkedList bms15;
        bms15.addNode(ht15, Kegalla, size15, 700, 15);

        bms15.searchAndPrint(15, Kegalla, ht15, size15, 700);
        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 16) {
        HashTable ht16;
        ht16.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht16.insert("\t\t\t\t\tBus 2", "8:30 A.M");
        ht16.insert("\t\t\t\t\tBus 3", "9:00 A.M");
        ht16.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht16.insert("\t\t\t\t\tBus 5", "10:00 A.M");
        ht16.insert("\t\t\t\t\tBus 6", "10:30 A.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;
        string Rathnapura[] = { "\t\tKottawa","Wattala","Kaduwela","Homagama","Polgaswita","Horana","Ingiriya","Idangoda" ,"Rathnapura" };
        int size16 = sizeof(Rathnapura) / sizeof(Rathnapura[0]);


        ProjectLinkedList bms16;
        bms16.addNode(ht16, Rathnapura, size16, 700, 16);

        bms16.searchAndPrint(16, Rathnapura, ht16, size16, 700);
        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 17) {
        HashTable ht17;
        ht17.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht17.insert("\t\t\t\t\tBus 2", "8:30 A.M");
        ht17.insert("\t\t\t\t\tBus 3", "9:00 A.M");
        ht17.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht17.insert("\t\t\t\t\tBus 5", "10:00 A.M");
        ht17.insert("\t\t\t\t\tBus 6", "10:30 A.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;


        string Trinco[] = { "\t\tKottawa","Negambo","Kurunegala","Dabulla","Habarana","Kanthale","Kinya","Trinco" };
        int size17 = sizeof(Trinco) / sizeof(Trinco[0]);


        ProjectLinkedList bms17;
        bms17.addNode(ht17, Trinco, size17, 1700, 17);

        bms17.searchAndPrint(17, Trinco, ht17, size17, 1700);
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 18) {
        HashTable ht18;
        ht18.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht18.insert("\t\t\t\t\tBus 2", "8:30 A.M");
        ht18.insert("\t\t\t\t\tBus 3", "9:00 A.M");
        ht18.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht18.insert("\t\t\t\t\tBus 5", "10:00 A.M");
        ht18.insert("\t\t\t\t\tBus 6", "10:30 A.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;


        string Batticlo[] = { "\t\tKottawa","Negambo","Kurunegala","Galewela","Dabulla","Higurakgoda","Walkada","Oddamwadi","Battico" };
        int size18 = sizeof(Batticlo) / sizeof(Batticlo[0]);


        ProjectLinkedList bms18;
        bms18.addNode(ht18, Batticlo, size18, 1200, 18);

        bms18.searchAndPrint(18, Batticlo, ht18, size18, 1200);
        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 19) {
        HashTable ht19;
        ht19.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht19.insert("\t\t\t\t\tBus 2", "8:30 A.M");
        ht19.insert("\t\t\t\t\tBus 3", "9:00 A.M");
        ht19.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht19.insert("\t\t\t\t\tBus 5", "10:00 A.M");
        ht19.insert("\t\t\t\t\tBus 6", "10:30 A.M");


        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;
        string Ampara[] = { "\t\tKottawa","Makumbura","Mattala","Thanamalwila","Wellawaya","Moneragala","Siyabalanduwa","Ampara" };
        int size19 = sizeof(Ampara) / sizeof(Ampara[0]);


        ProjectLinkedList bms19;
        bms19.addNode(ht19, Ampara, size19, 1300, 19);

        bms19.searchAndPrint(19, Ampara, ht19, size19, 1300);
        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\tPress Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 20) {
        HashTable ht20;
        ht20.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht20.insert("\t\t\t\t\tBus 2", "8:30 A.M");
        ht20.insert("\t\t\t\t\tBus 3", "9:00 A.M");
        ht20.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht20.insert("\t\t\t\t\tBus 5", "10:00 A.M");
        ht20.insert("\t\t\t\t\tBus 6", "10:30 A.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;


        string Badulla[] = { "\t\tKottawa","Kadawatha","Eheliyagoda","Rathnapura","Pelmadulla","Balangoda","Haputale","Bandarawela","Badulla" };
        int size20 = sizeof(Badulla) / sizeof(Badulla[0]);


        ProjectLinkedList bms20;
        bms20.addNode(ht20, Badulla, size20, 950, 20);

        bms20.searchAndPrint(20, Badulla, ht20, size20, 950);


        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 21) {
        HashTable ht21;
        ht21.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht21.insert("\t\t\t\t\tBus 2", "8:30 A.M");
        ht21.insert("\t\t\t\t\tBus 3", "9:00 A.M");
        ht21.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht21.insert("\t\t\t\t\tBus 5", "10:00 A.M");
        ht21.insert("\t\t\t\t\tBus 6", "10:30 A.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;


        string Monaragala[] = { "\t\tKottawa","Makumbura","Mattala","Thanamalwila","Wellawaya","Moneragala" };
        int size21 = sizeof(Monaragala) / sizeof(Monaragala[0]);


        ProjectLinkedList bms21;
        bms21.addNode(ht21, Monaragala, size21, 1300, 21);

        bms21.searchAndPrint(21, Monaragala, ht21, size21, 1300);
        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 22) {
        HashTable ht22;
        ht22.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht22.insert("\t\t\t\t\tBus 2", "8:30 A.M");
        ht22.insert("\t\t\t\t\tBus 3", "9:00 A.M");
        ht22.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht22.insert("\t\t\t\t\tBus 5", "10:00 A.M");
        ht22.insert("\t\t\t\t\tBus 6", "10:30 A.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;
        string Hambanthota[] = { "\t\tKottawa","Kadawatha","Horana","Mathugama","Elpitya","Koggala","Mathara","Dikwella" ,"Agunukolapalassa","Hambanthota" };
        int size22 = sizeof(Hambanthota) / sizeof(Hambanthota[0]);


        ProjectLinkedList bms22;
        bms22.addNode(ht22, Hambanthota, size22, 850, 22);

        bms22.searchAndPrint(22, Hambanthota, ht22, size22, 850);
        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else if (des == 23) {
        HashTable ht23;
        ht23.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht23.insert("\t\t\t\t\tBus 2", "8:30 A.M");
        ht23.insert("\t\t\t\t\tBus 3", "9:00 A.M");
        ht23.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht23.insert("\t\t\t\t\tBus 5", "10:00 A.M");
        ht23.insert("\t\t\t\t\tBus 6", "10:30 A.M");

        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;


        string Matara[] = { "\t\tKottawa","Kadawatha","Horana","Mathugama","Elpitya","Koggala","Mathara" };
        int size23 = sizeof(Matara) / sizeof(Matara[0]);


        ProjectLinkedList bms23;
        bms23.addNode(ht23, Matara, size23, 650, 23);

        bms23.searchAndPrint(23, Matara, ht23, size23, 650);


        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }

    }
    else if (des == 24) {
        HashTable ht24;
        ht24.insert("\t\t\t\t\tBus 1", "8:00 A.M");
        ht24.insert("\t\t\t\t\tBus 2", "8:30 A.M");
        ht24.insert("\t\t\t\t\tBus 3", "9:00 A.M");
        ht24.insert("\t\t\t\t\tBus 4", "9:30 A.M");
        ht24.insert("\t\t\t\t\tBus 5", "10:00 A.M");
        ht24.insert("\t\t\t\t\tBus 6", "10:30 A.M");
        cout << "\t\t\t\tIn This Route You Will Pass These Cities......" << endl;

        string Galee[] = { "\t\tKottawa","Kadawatha","Horana","Mathugala","Elpitiya","Baddegama","Galla" };
        int size24 = sizeof(Galee) / sizeof(Galee[0]);


        ProjectLinkedList bms24;
        bms24.addNode(ht24, Galee, size24, 600, 24);

        bms24.searchAndPrint(24, Galee, ht24, size24, 600);
        cout << endl;
        char x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        cout << "---------------------------------------------------------------------------------------------------------------" << endl;

        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
    else {
        cout << "===============================================================================================================" << endl;
        cout << "\t\t\t\t !!!...Invalied Uni_Code....!!!" << endl;
        cout << "===============================================================================================================" << endl;
        cout << endl;
        char x;
        cout << "\t\t\t Press Any key to close the programme Or Press R to Enter Uni_Code Again :  ";
        cin >> x;
        if (x == 'r' || x == 'R') {
            goto top;
        }
        else {
            cout << "Thank You...!" << endl;
        }
    }
}




void printlist() {

    string MainDistricList[] = { "\t\t\t\tJaffna","\t\t\t\tKillinochchi","\t\t\t\tMannaram","\t\t\t\tvavnia","\t\t\t\tMulathiv","\t\t\t\tPuttala","\t\t\t\tKurunagala"
   ,"\t\t\t\tGampaha","\t\t\t\tKaluthara","\t\t\t\tAnuradhapura","\t\t\t\tPolonnaruwa","\t\t\t\tMatale","\t\t\t\tKandy","\t\t\t\tNuwaraEliya","\t\t\t\tKegalle",
   "\t\t\t\tRathnapura","\t\t\t\tTrinco","\t\t\t\tBatticala","\t\t\t\tAmpara","\t\t\t\tBadulla","\t\t\t\tMonaragala","\t\t\t\tHambanthota","\t\t\t\tMatra","\t\t\t\tGalle" };

    int sizeofmaindistrics = sizeof(MainDistricList) / sizeof(MainDistricList[0]);
    int Unicode = 00;

    cout << "\t\t\t\t---------------\t\t\t--------------" << endl;
    cout << "\t\t\t\t<< Uni_Code >>\t\t\t<< Distric >>" << endl;
    cout << "\t\t\t\t---------------\t\t\t--------------" << endl;
    cout << endl;
    int j = 0;
    while (j < sizeofmaindistrics) {
        for (int i = 0; i < sizeofmaindistrics; i++) {

            Unicode = (Unicode + 1);
            cout << "\t\t\t\t" << Unicode;
            cout << MainDistricList[i] << endl;
            j++;
        }


    }
}

int main() {

    cout << endl;
    cout << "===============================================================================================================" << endl;
    cout << "                   W E L L C O M E   T O   C I T Y   B U S   M A N A G E M E N T  S Y S T E M                     " << endl;
    cout << "===============================================================================================================" << endl;
    cout << endl;
    cout << endl;

    cout << "\t\t\t\tYour Started Location is  =  Colombo" << endl;

    cout << endl;
    cout << endl;
    printlist();
    cout << endl;
    cout << endl;
    func1();

    return 0;
}




