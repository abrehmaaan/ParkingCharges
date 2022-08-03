#include <iostream>
using namespace std;
class ParkingCharges{
	double baseCharges;
	double perHourCharges;
	double hoursParked;
public:
	ParkingCharges(double hoursParked){
		baseCharges = 20;
		perHourCharges = 5;
		this->hoursParked = hoursParked;
	}
	double getHoursParked(){
		return hoursParked;
	}
	void setHoursParked(double hoursParked){
		this->hoursParked = hoursParked;
	}
	double calculateCharges(){
		double charges;
		if(hoursParked<=3){
			return baseCharges;
		}
		else{
			double hrs = hoursParked - 3;
			charges = baseCharges + (hrs*perHourCharges);
		}
		if(charges>50){
			return 50;
		}
		else{
			return charges;
		}
	}
};
int main() {
    ParkingCharges car1(1.5), car2(4.0), car3(24.0);
    double car1Charges = car1.calculateCharges();
    double car2Charges = car2.calculateCharges();
    double car3Charges = car3.calculateCharges();
    double car1Hrs = car1.getHoursParked();
    double car2Hrs = car2.getHoursParked();
    double car3Hrs = car3.getHoursParked();
    double totalCharges = car1Charges+car2Charges+car3Charges;
    double totalHrs = car1Hrs+car2Hrs+car3Hrs;
    cout<<"Car\tHours\tCharge"<<endl;
    cout<<"1\t"<<car1Hrs<<"\t"<<car1Charges<<endl;
    cout<<"2\t"<<car2Hrs<<"\t"<<car2Charges<<endl;
    cout<<"3\t"<<car3Hrs<<"\t"<<car3Charges<<endl;
    cout<<"Total\t"<<totalHrs<<"\t"<<totalCharges<<endl;
    return 0;
}
