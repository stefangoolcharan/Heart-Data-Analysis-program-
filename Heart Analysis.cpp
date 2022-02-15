#include <iostream>
#include <conio.h>
#include <fstream>
#include <cmath>
#include <stdlib.h>
using namespace std;


void graph (int hrate [], int numele, int menu() ) {

    int i;
    int check0=0, c0=0, check1=0, c1=0, check2=0, c2=0, check3=0, c3=0, check4=0, c4=0, check5=0, c5=0, check6=0, c6=0;
    int arr[6];

    for(i=0; i<=numele; i++){

        if(hrate[i] >= 49 && hrate[i] <= 55){
        c0++;
            if(c0&2){
                check0++;
            }
        }

        if(hrate[i] >= 56 && hrate[i] <= 61){
        c1++;
            if(c1%2){
                check1++;
            }
        }

        if(hrate[i] >= 62 && hrate[i] <= 65){
        c2++;
            if(c2%2){
                check2++;
            }
        }
        if(hrate[i] >= 66 && hrate[i] <= 69){
        c3++;
            if(c3%2){
                check3++;
            }
        }

        if(hrate[i] >= 70 && hrate[i] <= 73){
        c4++;
            if(c4%2){
                check4++;
            }
        }

        if(hrate[i] >= 74 && hrate[i] <= 81){
        c5++;
            if(c5%2){
                check5++;
            }
     }

        if(hrate[i] >= 82){

        c6++;
            if(c6%2){

                check6++;
            }
        }

    }


    cout<<"==================================="<<endl;
    cout<<" |   HISTOGRAM BASED ON RANGES   |"<<endl;
    cout<<"==================================="<<endl;

arr[0]=check0, arr[1]=check1, arr[2]=check2, arr[3]=check3, arr[4]=check4, arr[5]=check5, arr[6]=check6;
cout<<endl;
cout<<"        Athlete |  ";
    for(i=0; i<=check0; i++){
        cout<<"*";
    }
    cout<<endl;
cout<<"      Excellent |  ";
    for(i=0; i<=check1; i++){
        cout<<"*";
    }
    cout<<endl;
cout<<"          Great |  ";
    for(i=0; i<=check2; i++){
        cout<<"*";
    }
    cout<<endl;
cout<<"           Good |  ";
    for(i=0; i<=check3; i++){
        cout<<"*";
    }
    cout<<endl;
cout<<"        Average |  ";
    for(i=0; i<=check4; i++){
        cout<<"*";
    }
    cout<<endl;
cout<<"  Below Average |  ";
    for(i=0; i<=check5; i++){
        cout<<"*";
    }
    cout<<endl;
cout<<"           Poor |  ";
    for(i=0; i<=check6; i++){
        cout<<"*";
    }
    cout<<endl;

}

int stats (int hrate[], int numele, int menu()) {


    int i,j,k,l;
    int high =0, low=0, sum=0;
    float avg;



        if (menu() == 1){

                for(i=0; i < numele; i++){

                        if( hrate[i] > high){
                            high = hrate[i];
                        }
                        if( hrate[i] < low ){
                            low = hrate[i];
                        }

                    sum = sum + hrate[i];
                }

                avg = sum / numele;
                    cout<<"=========================================="<<endl;
                    cout<<" | HIGHEST, LOWEST & AVERAGE HEART RATE | "<<endl;
                    cout<<"=========================================="<<endl;
                    cout<<endl;
                    cout<<"     Highest heart rate = "<<high<<" bpm"<<endl;
                    cout<<"     Lowest heart rate = "<<low<<" bpm"<<endl;
                    cout<<"     Average heart rate = "<<avg<<" bpm"<<endl;
            system("pause");
            system("cls");
        }

        if(menu() == 4){

                cout<<"=============================="<<endl;
                cout<<" | BELOW AVERAGE HEART RATE | "<<endl;
                cout<<"=============================="<<endl;
                for(i=0; i<=numele; i++){
                    if(hrate[i] >= 74 && hrate[i] <= 81){
                        cout<<endl;
                        cout<<"     Patient - "<<i<<endl;
                        cout<<"     Heartrate of - "<<hrate[i]<<" bpm"<<endl;
                    }
                }
                cout<<endl;
                cout<<"==============================="<<endl;
                cout<<" |      POOR HEART RATE      |"<<endl;
                cout<<" |  ATTENTION REQUIRED ASAP  |"<<endl;
                cout<<"==============================="<<endl;
                for(i=0; i<=numele; i++) {
                    if(hrate[i] >= 82) {
                        cout<<endl;
                        cout<<"     Patient - "<<i<<endl;
                        cout<<"     Heartrate of - "<<hrate[i]<<" bpm"<<endl;

                    }

                }


        }

}

int RangeSearch (int hrate[], int numele, int menu() ){

 int range1, range2;
 int i;
 int occur=0;
 int choice;




        if(menu() == 5 ) {

            cout<<" Select one "<<endl;
            cout<<endl;
            cout<<"     1. Athlete"<<endl;
            cout<<"     2. Excellent"<<endl;
            cout<<"     3. Great    "<<endl;
            cout<<"     4. Good     "<<endl;
            cout<<"     5. Average  "<<endl;
            cout<<"     6. Below Average"<<endl;
            cout<<"     7. Poor"<<endl;
            cout<<"     8. Custom"<<endl;
            cout<<endl;
            cout<<" Enter a number";
            cin >>choice;

            system("cls");

            if(choice == 1) {

                    cout<<"=============================="<<endl;
                    cout<<" |    ATHLETE HEART RATE    | "<<endl;
                    cout<<"=============================="<<endl;
                    cout<<endl;
                    for (i=0; i<=numele; i++) {

                        if(hrate[i] >= 49 && hrate[i] <= 55){
                            cout<<"     Patient - "<<i<<" at "<<hrate[i]<<" bpm"<<endl;
                            occur++;
                        }


                    }
                cout<<endl;
                cout<<"Total of "<<occur<<"occurance(s)"<<endl;
            }

            if(choice == 2){
                    cout<<"=============================="<<endl;
                    cout<<" |   EXCELLENT HEART RATE    | "<<endl;
                    cout<<"=============================="<<endl;
                    cout<<endl;
                    for (i=0; i<=numele; i++) {

                        if(hrate[i] >= 56 && hrate[i] <=61){
                            cout<<"     Patient - "<<i<<" at "<<hrate[i]<<" bpm"<<endl;
                            occur++;
                        }

                    }
                cout<<endl;
                cout<<"Total of "<<occur<<"occurance(s)"<<endl;
            }

            if(choice == 3){
                    cout<<"=============================="<<endl;
                    cout<<" |     GREAT HEART RATE     | "<<endl;
                    cout<<"=============================="<<endl;
                    cout<<endl;
                    for (i=0; i<=numele; i++) {

                        if(hrate[i] >= 62 && hrate[i] <=65){
                            cout<<"     Patient - "<<i<<" at "<<hrate[i]<<" bpm"<<endl;
                            occur++;
                        }

                    }
                cout<<endl;
                cout<<"Total of "<<occur<<"occurance(s)"<<endl;
            }

            if(choice == 4){
                    cout<<"=============================="<<endl;
                    cout<<" |      GOOD HEART RATE      | "<<endl;
                    cout<<"=============================="<<endl;
                    cout<<endl;
                    for (i=0; i<=numele; i++) {

                        if(hrate[i] >= 66 && hrate[i] <=69){
                            cout<<"     Patient - "<<i<<" at "<<hrate[i]<<" bpm"<<endl;
                            occur++;
                        }

                    }
                cout<<endl;
                cout<<"Total of "<<occur<<"occurance(s)"<<endl;
            }


            if(choice == 5){
                    cout<<"=============================="<<endl;
                    cout<<" |     AVERAGE HEART RATE    | "<<endl;
                    cout<<"=============================="<<endl;
                    cout<<endl;
                    for (i=0; i<=numele; i++) {

                        if(hrate[i] >= 70 && hrate[i] <=73){
                            cout<<"     Patient - "<<i<<" at "<<hrate[i]<<" bpm"<<endl;
                            occur++;
                        }

                    }
                cout<<endl;
                cout<<"Total of "<<occur<<"occurance(s)"<<endl;
            }

            if(choice == 6){
                    cout<<"=============================="<<endl;
                    cout<<" | BELOW AVERAGE HEART RATE | "<<endl;
                    cout<<"=============================="<<endl;
                    cout<<endl;
                    for (i=0; i<=numele; i++) {

                        if(hrate[i] >= 74 && hrate[i] <=81){
                            cout<<"     Patient - "<<i<<" at "<<hrate[i]<<" bpm"<<endl;
                            occur++;
                        }

                    }
                cout<<endl;
                cout<<"Total of "<<occur<<"occurance(s)"<<endl;
            }

            if(choice == 7){
                    cout<<"=============================="<<endl;
                    cout<<" |      POOR HEART RATE     | "<<endl;
                    cout<<"=============================="<<endl;
                    cout<<endl;
                    for (i=0; i<=numele; i++) {

                        if(hrate[i] >= 82){
                            cout<<"     Patient - "<<i<<" at "<<hrate[i]<<" bpm"<<endl;
                            occur++;
                        }

                    }
                cout<<endl;
                cout<<"Total of "<<occur<<"occurance(s)"<<endl;
            }


            if(choice == 8) {
                cout << "       Enter a range to search "<<endl;
                cin >> range1 >> range2;

                    cout<<"=============================="<<endl;
                    cout<<" |  CUSTOM RANGE HEART RATE  | "<<endl;
                    cout<<"=============================="<<endl;
                    cout<<endl;
                    for (i=0; i<=numele; i++){

                        if (hrate[i] >= range1 && hrate[i] <= range2){
                            cout<<"     Patient - "<<i<<" at "<<hrate[i]<<" bpm"<<endl;
                            occur++;
                   }

            }
                cout<<endl;
                cout<<"Total of "<<occur<<" occurances"<<endl;
            }
        }
        occur=0;

 }

int menu (){

	int choice;
        cout << "        =================================================================" << endl;
		cout << "        |                  HEART RATE ANALYSIS PROGRAM                  |" << endl;
		cout << "        |===============================================================|" << endl;
		cout << "        |                                                               |" << endl;
		cout << "        |                          M E N U                              |" << endl;
		cout << "        |                                                               |" << endl;
		cout << "        |       1.  Highest, Lowest and Average heart rate.             |" << endl;
		cout << "        |       2.  Display all readings.                               |" << endl;
		cout << "        |       3.  When was a heart rate less or more than N?          |" << endl;
		cout << "        |       4.  Statistics of which patient requires attention.     |" << endl;
		cout << "        |       5.  Check number of occurances between a range.         |" << endl;
		cout << "        |       6.  Search for a particular heart rate reading.         |" << endl;
		cout << "        |       7.  Add or Update a reading.                            |" << endl;
		cout << "        |       8.  Generate a graph based on the heart rates recorded. |" << endl;
		cout << "        |       9.  Save data to a file.                                |" << endl;
		cout << "        |      10.  Quit                                                |" << endl;
		cout << "        |===============================================================|" << endl;
		cout << "        |===============================================================|" << endl;
		cout<<endl;
		cout << "       Please choose an option or 10 to quit: ";
		cin  >> choice;

		  system("cls");

	return choice;
}

int main(){

 ifstream infile;
 ofstream outfile;


        int hrate[300];
        int j, i, h, choice, numele=0, heart, reading,update;

        int high=0, low =0, sum=0, changes=0, occur=0;
        float avg=0;




        infile.open("readings.txt");
        if(!infile.is_open()){
            cout<<"Input file cannot be opened"<<endl;
            return 0;
        }

        outfile.open("output.txt");
        if(!outfile.is_open()){
            cout<<"Output file cannot be opened"<<endl;

        }

 for(j=0; j<300; j++){

            hrate[j]=0;
        }

        i=0;

    infile >> heart;


while(heart!= -1 ) {
        hrate[i]=heart;
        i=i+1;
        infile >> heart;

        }

        numele = i-1;

    cout<<"             ---------------------        DISCLAMIER         -------------------"<<endl;
    cout<<endl;
    cout<<"             When entering the option numbers, the program tends to refresh  "<<endl;
    cout<<"             multiple times and you are required to input the desired number again."<<endl;
    cout<<"             This may happen a couple times (4-5 times max)or may not happen at all."<<endl;
    cout<<"             (This may or may not happen with you.). However, once the program "<<endl;
    cout<<"             reads the option, it does function entirely and  executes its"<<endl;
    cout<<"             intended tasks. "<<endl;
    cout<<"                                 - Thank You"<<endl;
    cout<<"             ----------------------------------------------------------------------"<<endl;
    system("pause");
    system("cls");

while (menu()!= 10) {

//Option 1
        if(menu() == 1){

            stats(hrate,numele,menu);
            system("pause");
            system("cls");
        }

//Option 2
        if(menu() == 2){

            cout<<"==================================="<<endl;
            cout<<" |          ALL READINGS          |"<<endl;
            cout<<"==================================="<<endl;
            for(i=0; i<=numele; i++){

                cout<<"Patient - "<<i<<". Heart Rate - "<<hrate[i]<<" bpm"<<endl;
                cout<<endl;

            }
            system("pause");
            system("cls");
        }

//Option 3
        if(menu() == 3){

            cout<<endl;
            cout<<"             Select one"<<endl;
            cout<<"                  1. Less than?"<<endl;
            cout<<"                  2. More than?"<<endl;
            cin >> choice;
            cout<<""<<endl;
            cout<<"             Enter a number ";
            cin >> h;

            system("cls");

            if(choice == 1) {

                cout<<"==================================="<<endl;
                cout<<" |    HEART RATE LESS THAN "<<h<<"    |"<<endl;
                cout<<"==================================="<<endl;
                    for (int i=0; i <= numele; i++) {

                        if(hrate[i] < h){
                            occur++;
                            cout<<endl;
                            cout<<"       Patient - "<<i<<" at "<<hrate[i]<<" bpm"<<endl;

                        }

                   }
                cout<<endl;
                cout<<endl;
                cout<<"             Total of "<<occur<<" occurance(s)"<<endl;
                occur=0;
            }

            if(choice == 2) {

                cout<<"==================================="<<endl;
                cout<<" |    HEART RATE MORE THAN "<<h<<"    |"<<endl;
                cout<<"==================================="<<endl;
                    for (int i=0; i <= numele; i++) {

                        if(hrate[i] > h){
                            occur++;
                            cout<<endl;
                            cout<<"       Patient - "<<i<<" at "<<hrate[i]<<" bpm"<<endl;
                        }
                    }
                cout<<endl;
                cout<<endl;
                cout<<"           Total of "<<occur<<" occurance(s)"<<endl;
                occur=0;

           }

        system("pause");
        system("cls");
        }

//Option 4
        if(menu() == 4){

            stats(hrate, numele, menu);
            system("pause");
            system("cls");

        }

//Option 5
        if(menu() == 5){

            RangeSearch(hrate,numele,menu);
            system("pause");
            system("cls");
        }

//Option 6
        if(menu() == 6){

            cout<<endl;
            cout<<" Enter a particular reading ";
            cin >> reading;
            cout<<endl;

            system("cls");
            cout<<"==================================="<<endl;
            cout<<" |       READINGS OF "<<reading<<"  bmp     |"<<endl;
            cout<<"==================================="<<endl;
            cout<<endl;
                for(i=0; i<=numele; i++){

                    if(hrate[i]==reading){

                    occur++;

                    cout<<" Patient - "<<i<<" at "<<hrate[i]<<" bpm"<<endl;

                    }
                }

            cout<<endl;
            cout<<" Total of "<<occur<<" occurance/s"<<endl;
            occur=0;
            system("pause");
            system("cls");

        }

//Option 7
        if(menu() == 7){

            cout<<" Select one"<<endl;
            cout<<"     1.Add a reading"<<endl;
            cout<<"     2.Update a reading"<<endl;
            cin >> choice;

            system("cls");

            if(choice==1) {
                cout<<"==================================="<<endl;
                cout<<" |       ENTER A NEW READING     |"<<endl;
                cout<<"==================================="<<endl;
                cout<<endl;
                cout<<" Enter a new reading"<<endl;
                cin >> reading;

                hrate[numele+1] = reading;

                numele++;


            }

            if(choice == 2) {


                cout<<" Do you wish to update a specific patient's reading or all readings of a certain number?"<<endl;
                cout<<"     1. Specific reading"<<endl;
                cout<<"     2. All readings of a number"<<endl;
                cin >> choice;


                if(choice == 1){
                    cout<<"==================================="<<endl;
                    cout<<" |    UPDATE A SPECIFIC READING  |"<<endl;
                    cout<<"==================================="<<endl;
                    cout<<endl;
                    cout<<"Enter a patient number ";
                    cin >> reading;
                    cout<<"Enter the updated reading ";
                    cin >> update;

                        for(i=0; i<=numele; i++){

                            if(i=reading){
                                hrate[i]=update;
                            }

                        }

                }
                    cout<<endl;
                    cout<<"Patient "<<reading<<" was updated to "<<update<<endl;



                if(choice==2){
                    cout<<"==================================="<<endl;
                    cout<<" |    UPDATE A CURRENT READING   |"<<endl;
                    cout<<"==================================="<<endl;
                    cout<<endl;
                    cout<<" Enter a reading ";
                    cin >> reading;
                    cout<<endl;
                    cout<<" Enter the updated reading ";
                    cin >> update;

                        for (i=0; i<=numele; i++){

                            if(hrate[i]==reading) {

                            hrate[i] = update;
                            changes++;
                            }
                        }
                }
            cout<<endl;
            cout<<" "<<changes<<" change/s were made"<<endl;
            changes=0;


    system("pause");
    system("cls");
}
        }
//Option 8
        if(menu() == 8){

            cout<< "   Select one"<<endl;
            cout<< "      1. Histogram based on ranges"<<endl;
            cin >> choice;

            system("cls");

            if (choice == 1)
                graph(hrate, numele, menu);


            system("pause");
            system("cls");
        }

//Option 9
        if(menu() == 9){



            for(i=0; i<=numele; i++){
                outfile << hrate[i] << endl;
            }
            cout<<"======================"<<endl;
            cout<<"Data has been saved..."<<endl;
            cout<<"======================"<<endl;

            system("pause");
            system("cls");

        }


menu();

}
infile.close();
outfile.close();
return 0;
}
