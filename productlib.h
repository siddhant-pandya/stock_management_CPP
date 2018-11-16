#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

void newpro();
void findpro();
void dispallp();

struct product{
	string des;
	int procode;
	double rate;
	int qtyav;
	double cgst;
	double sgst;
	double igst;
};

void newpro()
{
	struct product p;
	fstream fio,dio;
	fio.open("product_shop.txt");
	fio.seekg(0, ios::end);
    dio.open("product_fact.txt");
	dio.seekg(0, ios::end);

cout<<"=========================================================================\n\t\t\t\tPRODUCT ENTRY\n=========================================================================\n";

int sel;
re:
	cout<<"\t\t\tSelect Product Database\n\t\t\t1.  Shop\n\t\t\t2.  Factory\n\t\tInput: ";
    cin>>sel;
cout<<"=========================================================================\n";

    if(sel==1)
    {


  		cout<<"\t\t\tEnter Product Code: ";
		cin>>p.procode;
        cout<<"\t\t\tEnter Name of Product: ";
		getline(cin, p.des);
 		getline(cin, p.des);
        cout<<"\t\t\tEnter Rate: ";
		cin>>p.rate;
 		cout<<"\t\t\tQuantity: ";
  		cin>>p.qtyav;
 		cout<<"\n\t\t\tCGST: ";
  		cin>>p.cgst;
 		cout<<"\t\t\tSGST: ";
  		cin>>p.sgst;
 		cout<<"\t\t\tIGST: ";
	  	cin>>p.igst;

        // Write line in file
        fio << p.procode<< endl;
        fio << p.des << endl;
        fio << p.rate << endl;
        fio << p.qtyav << endl;
        fio << p.cgst << endl;
        fio << p.sgst << endl;
        fio << p.igst<< endl;
		fio << endl;
cout<<"_________________________________________________________________________\n";

		cout<<"\t\t\tPRODUCT ADDED"<<endl;
cout<<"_________________________________________________________________________\n";


fio.close();
    }
    else if(sel==2)
    {
        cout<<"\t\t\tEnter Product Code: ";
		cin>>p.procode;
        cout<<"\t\t\tEnter Name of Product: "<<endl;
		getline(cin, p.des);
 		getline(cin, p.des);
		 cout<<"\t\t\tEnter Rate: ";
		cin>>p.rate;
 		cout<<"\t\t\tQuantity: ";
  		cin>>p.qtyav;
 		cout<<"\n\t\t\tCGST: ";
  		cin>>p.cgst;
 		cout<<"\t\t\tSGST: ";
  		cin>>p.sgst;
 		cout<<"\t\t\tIGST: ";
	  	cin>>p.igst;

        // Write line in file
        dio << p.procode<< endl;
        dio << p.des << endl;
        dio << p.rate << endl;
        dio << p.qtyav << endl;
        dio << p.cgst << endl;
        dio << p.sgst << endl;
        dio << p.igst<< endl;
		dio << endl;
cout<<"_________________________________________________________________________\n";
cout<<"\t\t\tPRODUCT ADDED"<<endl;
cout<<"_________________________________________________________________________\n";

dio.close();

    }

else{
cout<<"\t\t\tENTER CORRECT INPUT\n_________________________________________________________________________\n";

    goto re;
}
}

void findpro()
{
	string useless;
	fstream fio,dio;
	struct product p;
	int pc;
	fio.open("product_shop.txt");
	fio.seekg(0,ios::beg);
    dio.open("product_fact.txt");
	dio.seekg(0,ios::beg);
cout<<"=========================================================================\n\t\t\t\tFIND PRODUCT\n=========================================================================\n";

int sel;
re:
	cout<<"\t\t\tSelect Product Database\n\t\t\t1.  Shop\n\t\t\t2.  Factory\n\t\tInput: ";
    cin>>sel;
cout<<"=========================================================================\n";
    if(sel==1)
    {
    cout<<"\t\t\tEnter Product code to Search: ";
	cin>>pc;
cout<<"_________________________________________________________________________\n";

		while(fio)
	{
		fio>>p.procode;
		if(p.procode==pc)
		{
			getline(fio,useless);
			cout<<"\t\t\tProduct Code: "<<pc<<endl;
			getline(fio,useless);
			cout<<"\t\t\tProduct Name: "<<useless<<endl;
			getline(fio,useless);
			cout<<"\t\t\tRate: "<<useless<<endl;
			getline(fio,useless);
			cout<<"\t\t\tQuantity Available: "<<useless<<endl;
			getline(fio,useless);
			cout<<"\t\t\tCGST: "<<useless<<endl;
			getline(fio,useless);
			cout<<"\t\t\tSGST: "<<useless<<endl;
			break;
		}
		else
		{
			for(int x=0;x<=7;x++)
			{
				getline(fio,useless);
			}
		}

	}

fio.close();

    }
    else if(sel==2)
    {
    cout<<"Enter Product code to Search: ";
	cin>>pc;
cout<<"_________________________________________________________________________\n";

		while(dio)
	{
		dio>>p.procode;
		if(p.procode==pc)
		{
			getline(dio,useless);
			cout<<"\t\t\tProduct Code: "<<pc<<endl;
			getline(dio,useless);
			cout<<"\t\t\tProduct Name: "<<useless<<endl;
			getline(dio,useless);
			cout<<"\t\t\tRate: "<<useless<<endl;
			getline(dio,useless);
			cout<<"\t\t\tQuantity Available: "<<useless<<endl;
			getline(dio,useless);
			cout<<"\t\t\tCGST: "<<useless<<endl;
			getline(dio,useless);
			cout<<"\t\t\tSGST: "<<useless<<endl;
			break;
		}
		else
		{
			for(int x=0;x<=7;x++)
			{
				getline(dio,useless);
			}
		}

	}

fio.close();


    }
else
{
    cout<<"\t\t\tENTER CORRECT INPUT"<<endl;
    cout<<"_________________________________________________________________________\n";

    goto re;
}
    cout<<"\t\t\tPRODUCT PRINTED"<<endl;
    cout<<"_________________________________________________________________________\n";

}

void dispallp()
{
string useless;
	fstream fio,dio;
	struct product p;
	int pc;
	fio.open("product_shop.txt");
	fio.seekg(0,ios::beg);
    dio.open("product_fact.txt");
	dio.seekg(0, ios::end);
cout<<"=========================================================================\n\t\t\t\tALL PRODUCTS\n=========================================================================\n";

int sel;
re:
	cout<<"\t\t\tSelect Product Database\n\t\t\t1.  Shop\n\t\t\t2.  Factory\n\t\tInput: ";
    cin>>sel;
cout<<"=========================================================================\n";
    if(sel==1)
    {
		while(fio)
	{

			getline(fio,useless);
			if(useless=="")
                break;
			cout<<"\t\t\tProduct Code: "<<useless<<endl;
			getline(fio,useless);
			cout<<"\t\t\tProduct Name: "<<useless<<endl;
			getline(fio,useless);
			cout<<"\t\t\tRate: "<<useless<<endl;
			getline(fio,useless);
			cout<<"\t\t\tQuantity Available: "<<useless<<endl;
			getline(fio,useless);
			cout<<"\t\t\tCGST: "<<useless<<endl;
			getline(fio,useless);
			cout<<"\t\t\tSGST: "<<useless<<endl;
            getline(fio,useless);
			cout<<"\t\t\tIGST: "<<useless<<endl;
			getline(fio,useless);
			cout<<useless<<endl;
cout<<"_________________________________________________________________________\n";

	}

fio.close();
    }
else if(sel==2)
{
    	while(dio)
	{

			getline(dio,useless);
			if(useless=="")
                break;
			cout<<"\t\t\tProduct Code: "<<useless<<endl;
			getline(dio,useless);
			cout<<"\t\t\tProduct Name: "<<useless<<endl;
			getline(dio,useless);
			cout<<"\t\t\tRate: "<<useless<<endl;
			getline(dio,useless);
			cout<<"\t\t\tQuantity Available: "<<useless<<endl;
			getline(dio,useless);
			cout<<"\t\t\tCGST: "<<useless<<endl;
			getline(dio,useless);
			cout<<"\t\t\tSGST: "<<useless<<endl;
            getline(dio,useless);
			cout<<"\t\t\tIGST: "<<useless<<endl;
			getline(dio,useless);
			cout<<useless<<endl;
	cout<<"_________________________________________________________________________\n";

	}

dio.close();

}
else{
        cout<<"\t\t\tENTER CORRECT INPUT"<<endl;
        cout<<"_________________________________________________________________________\n";


    goto re;
}
cout<<"\t\t\tAll PRODUCTS PRINTED"<<endl;
cout<<"=========================================================================\n";

}

