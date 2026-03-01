
#include <iostream>
using namespace std;

class TollBooth
{
	int totalVechicals;
	double totalRevenue;

public:
	TollBooth()
	{
		totalVechicals = 0;
		totalRevenue = 0.0;
	}

		int getTotalVehicles() const
		{
			return totalVechicals;
		}

		double getTotalRevenue() const
		{
			return totalRevenue;
		}

		void rest()
		{
			totalRevenue = 0.0;
			totalVechicals = 0;

			cout<<"Succefully set values "<<endl;
		}

		void vehiclePayingToll(int vehicleType,double tollAmount)
		{
			totalVechicals++;
			totalRevenue +=tollAmount;
			cout<<"Succefully set values "<<endl;
		}




};

int main() {

	TollBooth toll;
	int choise;
	double STANDERD_CAR = 180.00;
	double STANDERD_TRUCKS = 300.00;
	double STANDERD_BUS =350.00;



	do{

			cout<<"-------Menu-------"<<endl;
			cout<<"1.Add standerd car and collect toll"<<endl;
			cout<<"2.Add a truck and collect toll"<<endl;
			cout<<"3.Add a bus and collect toll"<<endl;
			cout<<"4.Display total vehical passed"<<endl;
			cout<<"5.Display total revenue collected"<<endl;
			cout<<"6.Reset booth statistics"<<endl;
			cout<<"7.Exit"<<endl;


			cout<<"\nEnter Your choise here"<<endl;
			cin>>choise;


		switch(choise)
		{

		case 1:
			toll.vehiclePayingToll(1,STANDERD_CAR);
				break;

		case 2:
			toll.vehiclePayingToll(2,STANDERD_TRUCKS);
				break;

		case 3:
			toll.vehiclePayingToll(3,STANDERD_BUS);
				break;

		case 4:
			cout<<"Total Vehicles is :"<<toll.getTotalVehicles()<<endl;
				break;

		case 5:
			cout<<"Total Revenue is :"<<toll.getTotalRevenue()<<endl;
				break;

		case 6:
				toll.rest();
				break;

		case 7:
			cout<<"Exit program..."<<endl;
				break;
		}
	}while (choise != 7);

	return 0;
}
