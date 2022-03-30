#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int body, model, insurance;//for menu selection
    const int SUV=1, SEDAN=2, VAN=3, COUPE=4;//Body Type Menu
    double days, icharges, incharges, tcharges;//For price calculation

    string Intro="Welcome to J.M.F. Auto Rentals\n\n";//Welcome Screen
    string Outro="Thank you for renting from J.M.F. Auto Rentals!!\n";//Closing Statement
    string customername;

    //Daily Rental price for vehicle selection
    const double FEXPLORER=80.00,THIGHLANDER=88.00,HCRV=65.00,NROUGE=67.00;//SUV's
    const double B5S=135.00,HACCORD=65.00,TMODEL3=112.00,DCHARGER=75.00;//Sedans
    const double FTRANSIT=105,GSAVANA=82.00,NNV=92.00,RPROMASTER=65.00;//Vans
    const double CCAMARO=65.00,BM4=178.00,DCHALLENGER=75.00,FMUSTANG=70.00;//Coupes

    //Tax
    const double TAX=0.09;

    //INSURANCE PACKAGE RATES
    const double Basic=5.00,Plus=10.00,Premium=15.00;
    
    //Insurance Menu
    const int B=1,P=2,PR=3,N=4;
    
    //Invoice # generator
    srand((unsigned) time(0));
      int randomNumber;
    {
        randomNumber = (rand() % 100) + 1;
    }


    //Welcome Screen and Vehicle Body Type
    
    cout<<Intro;
    cout<<"Please enter your first name: ";
    cin>>customername;
    cout<<"\n";
    cout<<customername<<" Please Begin Your Reservation by Selecting Vehicle Body Type\n\n";
    cout<<left<<setw(8)<<"1.SUV"<<left<<setw(8)<<"2.SEDAN\n";
    cout<<left<<setw(8)<<"3.VAN"<<left<<setw(8)<<"4.COUPE\n\n";
    cout<<"Enter Body Type:";
    cin>>body;

    //Input Validation for Body type
    while (body>4 || body<1)
    {
        cout<<"Invalid Selection, Please choose from Available Options\n";
        cout<<"Enter Body Type:";
        cin>>body;
    }
    
    //Model Selection

    switch (body)
    {
            //SUV Selections
        case SUV:
        {
        const int Ford_Explorer=1, Toyota_Highlander=2, Honda_CRV=3, Nissan_Rouge=4;
        cout<<"Please select from our available SUV's\n";
        cout<<left<<setw(26)<<"1.Ford Explorer ($80/day)"<<left<<setw(26)<<"2.Toyota Highlander ($88/day)\n";
        cout<<left<<setw(26)<<"3.Honda CR-V ($65/day)"<<left<<setw(26)<<"4.Nissan Rouge ($67/day)\n\n";
        cout<<"Enter Model:";
        cin>>model;

        while (model>4 || model<1)
        {
            cout<<"Invalid Selection, Please choose from Available Options\n";
            cout<<"Enter Model:";
            cin>>model;
        }

        switch(model)
        {
            case Ford_Explorer:
            {
                cout<<"Please select Insurance Coverage\n";
                cout<<left<<setw(23)<<"1.Basic ($5.00/day)"<<left<<setw(23)<<"2.Basic Plus ($10.00/day)\n";
                cout<<left<<setw(23)<<"3.Premium ($15.00/day)"<<left<<setw(4)<<"4.None\n\n";
                cout<<left<<"Insurance Selection:";
                cin>>insurance;

                while (insurance>4 || insurance<1)
                {
                    cout<<"Invalid Selection, Please choose from Available Options\n\n";
                    cout<<"Enter Insurance Selection:";
                    cin>>insurance;
                }

                if (insurance==4)
                    cout<<"BE ADVISED: WITH NO INSURANCE YOU ARE FINANCIALLY LIABLE FOR ALL DAMAGES TO VEHICLE\n\n";
                else
                    cout<<"Having Insurance Coverage can potentially save you money on costly damages.\n\n";

            switch(insurance)
            {
                case B:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*FEXPLORER;
                incharges=days*Basic;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"FEXPLORER"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case P:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*FEXPLORER;
                incharges=days*Plus;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"FEXPLORER"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic Plus"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case PR:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*FEXPLORER;
                incharges=days*Premium;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"FEXPLORER"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Premium"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case N:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*FEXPLORER;
                tcharges=(icharges*TAX)+icharges;
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"FEXPLORER"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"None"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<icharges*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

            }//Insurance Brace
                break;
        }//Ford Explorer Brace

            case Toyota_Highlander:
            {
                cout<<"Please select Insurance Coverage\n";
                cout<<left<<setw(23)<<"1.Basic ($5.00/day)"<<left<<setw(23)<<"2.Basic Plus ($10.00/day)\n";
                cout<<left<<setw(23)<<"3.Premium ($15.00/day)"<<left<<setw(4)<<"4.None\n\n";
                cout<<"Insurance Selection:";
                cin>>insurance;

                while (insurance>4 || insurance<1)
                {
                    cout<<"Invalid Selection, Please choose from Available Options\n";
                    cout<<"Enter Insurance Selection:";
                    cin>>insurance;
                }

                if (insurance==4)
                    cout<<"BE ADVISED: WITH NO INSURANCE YOU ARE FINANCIALLY LIABLE FOR ALL DAMAGES TO VEHICLE\n\n";
                else
                    cout<<"Having Insurance Coverage can potentially save you money on costly damages.\n\n";

            switch(insurance)
            {
                case B:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*THIGHLANDER;
                incharges=days*Basic;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"THIGHLANDER"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case P:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*THIGHLANDER;
                incharges=days*Plus;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"THIGHLANDER"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic Plus"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case PR:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*THIGHLANDER;
                incharges=days*Premium;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"THIGHLANDER"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Premium"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case N:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*THIGHLANDER;
                tcharges=(icharges*TAX)+icharges;
                                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"THIGHLANDER"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"None"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<icharges*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";;
                cout<<Outro;
                break;
            }//Insurace Brace
                break;
        }//Toyota Higlander Brace

            case Honda_CRV:
            {
                cout<<"Please select Insurance Coverage\n";
                cout<<left<<setw(23)<<"1.Basic ($5.00/day)"<<left<<setw(23)<<"2.Basic Plus ($10.00/day)\n";
                cout<<left<<setw(23)<<"3.Premium ($15.00/day)"<<left<<setw(4)<<"4.None\n\n";
                cout<<"Insurance Selection:";
                cin>>insurance;

                while (insurance>4 || insurance<1)
                {
                    cout<<"Invalid Selection, Please choose from Available Options\n";
                    cout<<"Enter Insurance Selection:";
                    cin>>insurance;
                }

                if (insurance==4)
                    cout<<"BE ADVISED: WITH NO INSURANCE YOU ARE FINANCIALLY LIABLE FOR ALL DAMAGES TO VEHICLE\n\n";
                else
                    cout<<"Having Insurance Coverage can potentially save you money on costly damages.\n\n";

            switch(insurance)
            {
                case B:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*HCRV;
                incharges=days*Basic;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"HCRV"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case P:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*HCRV;
                incharges=days*Plus;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"HCRV"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic Plus"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case PR:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*HCRV;
                incharges=days*Premium;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"HCRV"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Premium"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case N:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*HCRV;
                tcharges=(icharges*TAX)+icharges;
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"HCRV"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"None"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<icharges*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;
            }//Insurace Brace
                break;
        }//Honda CR-V Brace

            case Nissan_Rouge:
            {
                cout<<"Please select Insurance Coverage\n";
                cout<<left<<setw(23)<<"1.Basic ($5.00/day)"<<left<<setw(23)<<"2.Basic Plus ($10.00/day)\n";
                cout<<left<<setw(23)<<"3.Premium ($15.00/day)"<<left<<setw(4)<<"4.None\n\n";
                cout<<"Insurance Selection:";
                cin>>insurance;

                while (insurance>4 || insurance<1)
                {
                    cout<<"Invalid Selection, Please choose from Available Options\n";
                    cout<<"Enter Insurance Selection:";
                    cin>>insurance;
                }

                if (insurance==4)
                    cout<<"BE ADVISED: WITH NO INSURANCE YOU ARE FINANCIALLY LIABLE FOR ALL DAMAGES TO VEHICLE\n\n";
                else
                    cout<<"Having Insurance Coverage can potentially save you money on costly damages.\n\n";

            switch(insurance)
            {
                case B:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*NROUGE;
                incharges=days*Basic;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"NROUGE"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case P:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*NROUGE;
                incharges=days*Plus;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"NROUGE"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic Plus"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case PR:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*NROUGE;
                incharges=days*Premium;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"NROUGE"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Premium"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case N:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*NROUGE;
                tcharges=(icharges*TAX)+icharges;
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"NROUGE"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"None"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<icharges*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;
            }//Insurace Brace
                break;
        }//Nissan Rouge Brace

        }

            break;
    }//SUV Brace

            //Sedan Selections
        case SEDAN:
        {
        const int BMW_5_Series=1, Honda_Accord=2, Tesla_Model_3=3, Dodge_Charger=4;
        cout<<"Please select from our available Sedans\n";
        cout<<left<<setw(26)<<"1.BMW 5 Series ($135/day)"<<left<<setw(24)<<"2.Honda Accord ($65/day)\n";
        cout<<left<<setw(24)<<"3.Tesla Model 3 ($112/day)"<<left<<setw(24)<<"4.Dodge Charger ($75/day)\n\n";
        cout<<"Enter Model:";
        cin>>model;

        while (model>4 || model<1)
        {
            cout<<"Invalid Selection, Please choose from Available Options\n";
            cout<<"Enter Model:";
            cin>>body;
        }

        switch(model)
        {
            case BMW_5_Series:
            {
                cout<<"Please select Insurance Coverage\n";
                cout<<left<<setw(23)<<"1.Basic ($5.00/day)"<<left<<setw(23)<<"2.Basic Plus ($10.00/day)\n";
                cout<<left<<setw(23)<<"3.Premium ($15.00/day)"<<left<<setw(4)<<"4.None\n\n";
                cin>>insurance;

                while (insurance>4 || insurance<1)
                {
                    cout<<"Invalid Selection, Please choose from Available Options\n";
                    cout<<"Enter Insurance Selection:";
                    cin>>insurance;
                }

                if (insurance==4)
                    cout<<"BE ADVISED: WITH NO INSURANCE YOU ARE FINANCIALLY LIABLE FOR ALL DAMAGES TO VEHICLE\n\n";
                else
                    cout<<"Having Insurance Coverage can potentially save you money on costly damages.\n\n";

            switch(insurance)
            {
                case B:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*B5S;
                incharges=days*Basic;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"B5S"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case P:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*B5S;
                incharges=days*Plus;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"B5S"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic Plus"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case PR:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*B5S;
                incharges=days*Premium;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"B5S"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Premium"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case N:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*B5S;
                tcharges=(icharges*TAX)+icharges;
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"B5S"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"None"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<icharges*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;
            }//Insurance Brace
                break;
        }//BMW 5 Series Brace

            case Honda_Accord:
            {
                cout<<"Please select Insurance Coverage\n";
                cout<<left<<setw(23)<<"1.Basic ($5.00/day)"<<left<<setw(23)<<"2.Basic Plus ($10.00/day)\n";
                cout<<left<<setw(23)<<"3.Premium ($15.00/day)"<<left<<setw(4)<<"4.None\n\n";
                cout<<"Insurance Selection:";
                cin>>insurance;

                while (insurance>4 || insurance<1)
                {
                    cout<<"Invalid Selection, Please choose from Available Options\n";
                    cout<<"Enter Insurance Selection:";
                    cin>>insurance;
                }

                if (insurance==4)
                    cout<<"BE ADVISED: WITH NO INSURANCE YOU ARE FINANCIALLY LIABLE FOR ALL DAMAGES TO VEHICLE\n\n";
                else
                    cout<<"Having Insurance Coverage can potentially save you money on costly damages.\n\n";

            switch(insurance)
            {
                case B:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*HACCORD;
                incharges=days*Basic;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"HACCORD"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case P:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*HACCORD;
                incharges=days*Plus;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"HACCORD"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic Plus"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case PR:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*HACCORD;
                incharges=days*Premium;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"HACCORD"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Premium"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case N:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*HACCORD;
                tcharges=(icharges*TAX)+icharges;
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"HACCORD"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"None"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<icharges*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;
            }//Insurace Brace
                break;
        }//Honda Accord Brace

            case Tesla_Model_3:
            {
                cout<<"Please select Insurance Coverage\n";
                cout<<left<<setw(23)<<"1.Basic ($5.00/day)"<<left<<setw(23)<<"2.Basic Plus ($10.00/day)\n";
                cout<<left<<setw(23)<<"3.Premium ($15.00/day)"<<left<<setw(4)<<"4.None\n\n";
                cout<<"Insurance Selection:";
                cin>>insurance;

                while (insurance>4 || insurance<1)
                {
                    cout<<"Invalid Selection, Please choose from Available Options\n";
                    cout<<"Enter Insurance Selection:";
                    cin>>insurance;
                }

                if (insurance==4)
                    cout<<"BE ADVISED: WITH NO INSURANCE YOU ARE FINANCIALLY LIABLE FOR ALL DAMAGES TO VEHICLE\n\n";
                else
                    cout<<"Having Insurance Coverage can potentially save you money on costly damages.\n\n";

            switch(insurance)
            {
                case B:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*TMODEL3;
                incharges=days*Basic;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"TMODEL3"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case P:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*TMODEL3;
                incharges=days*Plus;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"TMODEL3"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic Plus"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case PR:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*TMODEL3;
                incharges=days*Premium;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"TMODEL3"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Premium"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case N:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*TMODEL3;
                tcharges=(icharges*TAX)+icharges;
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"TMODEL3"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"None"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<icharges*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;
            }//Insurace Brace
                break;
        }//Tesla Model 3 Brace

            case Dodge_Charger:
            {
                cout<<"Please select Insurance Coverage\n";
                cout<<left<<setw(23)<<"1.Basic ($5.00/day)"<<left<<setw(23)<<"2.Basic Plus ($10.00/day)\n";
                cout<<left<<setw(23)<<"3.Premium ($15.00/day)"<<left<<setw(4)<<"4.None\n\n";
                cout<<"Insurance Selection:";
                cin>>insurance;

                while (insurance>4 || insurance<1)
                {
                    cout<<"Invalid Selection, Please choose from Available Options\n";
                    cout<<"Enter Insurance Selection:";
                    cin>>insurance;
                }

                if (insurance==4)
                    cout<<"BE ADVISED: WITH NO INSURANCE YOU ARE FINANCIALLY LIABLE FOR ALL DAMAGES TO VEHICLE\n\n";
                else
                    cout<<"Having Insurance Coverage can potentially save you money on costly damages.\n\n";

            switch(insurance)
            {
                case B:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*DCHARGER;
                incharges=days*Basic;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"DCHARGER"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case P:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*DCHARGER;
                incharges=days*Plus;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"DCHARGER"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic Plus"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case PR:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*DCHARGER;
                incharges=days*Premium;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"DCHARGER"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Premium"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case N:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*DCHARGER;
                tcharges=(icharges*TAX)+icharges;
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"DCHARGER"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"None"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<icharges*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;
            }//Insurace Brace
                break;
        }//Dodge Charger Brace

        }

            break;
    }//Sedan Brace

            //Van Selections
        case VAN:
        {
        const int FORD_TRANSIT=1, GMC_SAVANA=2, NISSAN_NV=3, RAM_PROMASTER=4;
        cout<<"Please select from our available Sedans\n";
        cout<<left<<setw(24)<<"1.Ford Transit ($105/day)"<<left<<setw(22)<<"2.GMC Savana ($82/day)\n";
        cout<<left<<setw(25)<<"3.Nissan NV ($92/day)"<<left<<setw(24)<<"4.Ram ProMaster ($65/day)\n\n";
        cout<<"Enter Model:";
        cin>>model;

        while (model>4 || model<1)
        {
            cout<<"Invalid Selection, Please choose from Available Options\n";
            cout<<"Enter Model:";
            cin>>body;
        }

        switch(model)
        {
            case FORD_TRANSIT:
            {
                cout<<"Please select Insurance Coverage\n";
                cout<<left<<setw(23)<<"1.Basic ($5.00/day)"<<left<<setw(23)<<"2.Basic Plus ($10.00/day)\n";
                cout<<left<<setw(23)<<"3.Premium ($15.00/day)"<<left<<setw(4)<<"4.None\n\n";
                cout<<"Insurance Selection:";
                cin>>insurance;

                while (insurance>4 || insurance<1)
                {
                    cout<<"Invalid Selection, Please choose from Available Options\n";
                    cout<<"Enter Insurance Selection:";
                    cin>>insurance;
                }

                if (insurance==4)
                    cout<<"BE ADVISED: WITH NO INSURANCE YOU ARE FINANCIALLY LIABLE FOR ALL DAMAGES TO VEHICLE\n\n";
                else
                    cout<<"Having Insurance Coverage can potentially save you money on costly damages.\n\n";

            switch(insurance)
            {
                case B:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*FTRANSIT;
                incharges=days*Basic;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"FTRANSIT"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case P:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*FTRANSIT;
                incharges=days*Plus;
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"FTRANSIT"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic Plus"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case PR:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*FTRANSIT;
                incharges=days*Premium;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"FTRANSIT"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Premium"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case N:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*FTRANSIT;
                tcharges=(icharges*TAX)+icharges;
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"FTRANSIT"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"None"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<icharges*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;
            }//Insurance Brace
                break;
        }//Ford Transit Brace

            case GMC_SAVANA:
            {
                cout<<"Please select Insurance Coverage\n";
                cout<<left<<setw(23)<<"1.Basic ($5.00/day)"<<left<<setw(23)<<"2.Basic Plus ($10.00/day)\n";
                cout<<left<<setw(23)<<"3.Premium ($15.00/day)"<<left<<setw(4)<<"4.None\n\n";
                cout<<"Insurance Selection:";
                cin>>insurance;

                while (insurance>4 || insurance<1)
                {
                    cout<<"Invalid Selection, Please choose from Available Options\n";
                    cout<<"Enter Insurance Selection:";
                    cin>>insurance;
                }

                if (insurance==4)
                    cout<<"BE ADVISED: WITH NO INSURANCE YOU ARE FINANCIALLY LIABLE FOR ALL DAMAGES TO VEHICLE\n\n";
                else
                    cout<<"Having Insurance Coverage can potentially save you money on costly damages.\n\n";

            switch(insurance)
            {
                case B:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*GSAVANA;
                incharges=days*Basic;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"GSAVANA"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case P:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*GSAVANA;
                incharges=days*Plus;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"GSAVANA"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic Plus"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case PR:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*GSAVANA;
                incharges=days*Premium;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"GSAVANA"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Premium"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case N:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*GSAVANA;
                tcharges=(icharges*TAX)+icharges;
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"GSAVANA"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"None"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<icharges*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;
            }//Insurace Brace
                break;
        }//GMC Savana Brace

            case NISSAN_NV:
            {
                cout<<"Please select Insurance Coverage\n";
                cout<<left<<setw(23)<<"1.Basic ($5.00/day)"<<left<<setw(23)<<"2.Basic Plus ($10.00/day)\n";
                cout<<left<<setw(23)<<"3.Premium ($15.00/day)"<<left<<setw(4)<<"4.None\n\n";
                cout<<"Insurance Selection:";
                cin>>insurance;

                while (insurance>4 || insurance<1)
                {
                    cout<<"Invalid Selection, Please choose from Available Options\n";
                    cout<<"Enter Insurance Selection:";
                    cin>>insurance;
                }

                if (insurance==4)
                    cout<<"BE ADVISED: WITH NO INSURANCE YOU ARE FINANCIALLY LIABLE FOR ALL DAMAGES TO VEHICLE\n\n";
                else
                    cout<<"Having Insurance Coverage can potentially save you money on costly damages.\n\n";

            switch(insurance)
            {
                case B:
                cout<<"How many days will you be renting Vehicle?: ";
                cin>>days;
                icharges=days*NNV;
                incharges=days*Basic;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"NNV"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<"Thank you for renting from J.M.F. Auto Rentals!!\n";
                break;

                case P:
                cout<<"How many days will you be renting the vehicle?: ";
                cin>>days;
                icharges=days*NNV;
                incharges=days*Plus;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"NNV"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic Plus"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<"Thank you for renting from J.M.F. Auto Rentals!!\n";
                break;

                case PR:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*NNV;
                incharges=days*Premium;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"NNV"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Premium"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case N:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*NNV;
                tcharges=(icharges*TAX)+icharges;
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"NNV"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"None"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<icharges*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";

                cout<<Outro;
                break;
            }//Insurace Brace
                break;
        }//Nissan NV Brace

            case RAM_PROMASTER:
            {
                cout<<"Please select Insurance Coverage\n";
                cout<<left<<setw(23)<<"1.Basic ($5.00/day)"<<left<<setw(23)<<"2.Basic Plus ($10.00/day)\n";
                cout<<left<<setw(23)<<"3.Premium ($15.00/day)"<<left<<setw(4)<<"4.None\n\n";
                cout<<"Insurance Selection:";
                cin>>insurance;

                while (insurance>4 || insurance<1)
                {
                    cout<<"Invalid Selection, Please choose from Available Options\n";
                    cout<<"Enter Insurance Selection:";
                    cin>>insurance;
                }

                if (insurance==4)
                    cout<<"BE ADVISED: WITH NO INSURANCE YOU ARE FINANCIALLY LIABLE FOR ALL DAMAGES TO VEHICLE\n\n";
                else
                    cout<<"Having Insurance Coverage can potentially save you money on costly damages.\n\n";

            switch(insurance)
            {
                case B:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*RPROMASTER;
                incharges=days*Basic;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"RPROMASTER"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case P:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*RPROMASTER;
                incharges=days*Plus;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"RPROMASTER"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic Plus"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case PR:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*RPROMASTER;
                incharges=days*Premium;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"RPROMASTER"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Premium"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<"Thank you for renting from J.M.F. Auto Rentals!!\n";
                break;

                case N:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*RPROMASTER;
                tcharges=(icharges*TAX)+icharges;
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"RPROMASTER"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"None"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<icharges*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";

                cout<<Outro;
                break;
            }//Insurace Brace
                break;
        }//Ram ProMaster Brace

        }

            break;
    }//Van Brace

            //Coupe Selections
        case COUPE:
        {
        const int CHEVY_CAMARO=1, BMW_M4=2, DODGE_CHALLENGER=3, FORD_MUSTANG=4;
        cout<<"Please select from our available Sedans\n";
        cout<<left<<setw(25)<<"1.Chevy Camaro ($65/day)"<<left<<setw(18)<<"2.BMW M4 ($178/day)\n";
        cout<<left<<setw(22)<<"3.Dodge Charger ($75/day)"<<left<<setw(16)<<"4.Ford Mustang ($70/day)\n\n";
        cout<<"Enter Model:";
        cin>>model;

        while (model>4 || model<1)
        {
            cout<<"Invalid Selection, Please choose from Available Options\n";
            cout<<"Enter Model:";
            cin>>body;
        }

        switch(model)
        {
            case CHEVY_CAMARO:
            {
                cout<<"Please select Insurance Coverage\n";
                cout<<left<<setw(23)<<"1.Basic ($5.00/day)"<<left<<setw(23)<<"2.Basic Plus ($10.00/day)\n";
                cout<<left<<setw(23)<<"3.Premium ($15.00/day)"<<left<<setw(4)<<"4.None\n\n";
                cout<<"Insurance Selection:";
                cin>>insurance;

                while (insurance>4 || insurance<1)
                {
                    cout<<"Invalid Selection, Please choose from Available Options\n";
                    cout<<"Enter Insurance Selection:";
                    cin>>insurance;
                }

                if (insurance==4)
                    cout<<"BE ADVISED: WITH NO INSURANCE YOU ARE FINANCIALLY LIABLE FOR ALL DAMAGES TO VEHICLE\n\n";
                else
                    cout<<"Having Insurance Coverage can potentially save you money on costly damages.\n\n";

            switch(insurance)
            {
                case B:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*CCAMARO;
                incharges=days*Basic;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"CCAMARO"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case P:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*CCAMARO;
                incharges=days*Plus;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"CCAMARO"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic Plus"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case PR:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*CCAMARO;
                incharges=days*Premium;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"CCAMARO"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Premium"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case N:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*CCAMARO;
                tcharges=(icharges*TAX)+icharges;
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"CCAMARO"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"None"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<icharges*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";

                cout<<Outro;
                break;
            }//Insurance Brace
                break;
        }//Chevy Camaro Brace

            case BMW_M4:
            {
                cout<<"Please select Insurance Coverage\n";
                cout<<left<<setw(23)<<"1.Basic ($5.00/day)"<<left<<setw(23)<<"2.Basic Plus ($10.00/day)\n";
                cout<<left<<setw(23)<<"3.Premium ($15.00/day)"<<left<<setw(4)<<"4.None\n\n";
                cout<<"Insurance Selection:";
                cin>>insurance;

                while (insurance>4 || insurance<1)
                {
                    cout<<"Invalid Selection, Please choose from Available Options\n";
                    cout<<"Enter Insurance Selection:";
                    cin>>insurance;
                }

                if (insurance==4)
                    cout<<"BE ADVISED: WITH NO INSURANCE YOU ARE FINANCIALLY LIABLE FOR ALL DAMAGES TO VEHICLE\n\n";
                else
                    cout<<"Having Insurance Coverage can potentially save you money on costly damages.\n\n";

            switch(insurance)
            {
                case B:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*BM4;
                incharges=days*Basic;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"BM4"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case P:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*BM4;
                incharges=days*Plus;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"BM4"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic Plus"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case PR:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*BM4;
                incharges=days*Premium;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"BM4"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Premium"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case N:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*BM4;
                tcharges=(icharges*TAX)+icharges;
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"BM4"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"None"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<icharges*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";

                cout<<Outro;
                break;
            }//Insurace Brace
                break;
        }//BMW M4 Brace

            case DODGE_CHALLENGER:
            {
                cout<<"Please select Insurance Coverage\n";
                cout<<left<<setw(23)<<"1.Basic ($5.00/day)"<<left<<setw(23)<<"2.Basic Plus ($10.00/day)\n";
                cout<<left<<setw(23)<<"3.Premium ($15.00/day)"<<left<<setw(4)<<"4.None\n\n";
                cout<<"Insurance Selection:";
                cin>>insurance;

                while (insurance>4 || insurance<1)
                {
                    cout<<"Invalid Selection, Please choose from Available Options\n";
                    cout<<"Enter Insurance Selection:";
                    cin>>insurance;
                }

                if (insurance==4)
                    cout<<"BE ADVISED: WITH NO INSURANCE YOU ARE FINANCIALLY LIABLE FOR ALL DAMAGES TO VEHICLE\n\n";
                else
                    cout<<"Having Insurance Coverage can potentially save you money on costly damages.\n\n";

            switch(insurance)
            {
                case B:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*DCHALLENGER;
                incharges=days*Basic;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"DCHALLENGER"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case P:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*DCHALLENGER;
                incharges=days*Plus;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"DCHALLENGER"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic Plus"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case PR:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*DCHALLENGER;
                incharges=days*Premium;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"DCHALLENGER"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Premium"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case N:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*DCHALLENGER;
                tcharges=(icharges*TAX)+icharges;
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"DCHALLENGER"<<"|"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"None"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<icharges*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";

                cout<<Outro;
                break;
            }//Insurace Brace
                break;
        }//Dodge Challenger Brace

            case FORD_MUSTANG:
            {
                cout<<"Please select Insurance Coverage\n";
                cout<<left<<setw(23)<<"1.Basic ($5.00/day)"<<left<<setw(23)<<"2.Basic Plus ($10.00/day)\n";
                cout<<left<<setw(23)<<"3.Premium ($15.00/day)"<<left<<setw(4)<<"4.None\n\n";
                cout<<"Insurance Selection:";
                cin>>insurance;

                while (insurance>4 || insurance<1)
                {
                    cout<<"Invalid Selection, Please choose from Available Options\n";
                    cout<<"Enter Insurance Selection:";
                    cin>>insurance;
                }

                if (insurance==4)
                    cout<<"BE ADVISED: WITH NO INSURANCE YOU ARE FINANCIALLY LIABLE FOR ALL DAMAGES TO VEHICLE\n\n";
                else
                    cout<<"Having Insurance Coverage can potentially save you money on costly damages.\n\n";

            switch(insurance)
            {
                case B:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*FMUSTANG;
                incharges=days*Basic;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"FMUSTANG"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case P:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*FMUSTANG;
                incharges=days*Plus;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"FMUSTANG"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Basic Plus"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case PR:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*FMUSTANG;
                incharges=days*Premium;
                tcharges=((icharges+incharges)+TAX)+(icharges+incharges);
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"FMUSTANG"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"Premium"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<incharges<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<(icharges+incharges)*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";
                cout<<Outro;
                break;

                case N:
                cout<<"How many days will you be renting Vehicle?:";
                cin>>days;
                icharges=days*FMUSTANG;
                tcharges=(icharges*TAX)+icharges;
                cout << "\n                       Car Rental - Customer Invoice                  "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   | Invoice No. :"<<"------------------|"<<setw(10)<<randomNumber<<" |"<<endl;
                cout << "   | Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
                cout << "   | Car Model :"<<"--------------------|"<<setw(10)<<"FMUSTANG"<<" |"<<endl;
                cout << "   | Car No. :"<<"----------------------|"<<setw(10)<<"123"<<" |"<<endl;
                cout << "   | Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
                cout << "   | Your Insurance Chosen :"<<"--------|"<<setw(10)<<"None"<<" |"<<endl;
                cout << "   | Insurance price :"<<"--------------|"<<setw(10)<<"0"<<" |"<<endl;
                cout << "   | Tax :"<<"--------------------------|"<<setw(10)<<icharges*TAX<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<"\n";
                cout << "   | Total Rental Amount is :"<<"-------|"<<setw(10)<<tcharges<<" |"<<endl;
                cout << "    ________________________________________________________"<<endl;
                cout <<" "<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout << "   You are advised to pay up the amount before due date."<<endl;
                cout << "   Otherwise you will pay a penalty!"<<endl;
                cout << "   ///////////////////////////////////////////////////////////"<<endl;
                cout <<"\n";

                cout<<Outro;
                break;
            }//Insurace Brace
                break;
        }//Ford Mustang Brace

        }
            break;
    }//Coupe Brace

    }//Body Brace


    return 0;

}//Closing Brace
