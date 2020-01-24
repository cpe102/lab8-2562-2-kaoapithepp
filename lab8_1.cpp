#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	//calculating section
	float initLoan,interestRate,interestShow,payAmount,total,prevBal,newBal=1;
	int EndYear=0;
	cout << "Enter initial loan: ";
	cin >> prevBal;
	cout << "Enter interest rate per year (%): ";
	cin >> interestRate;
	cout << "Enter amount you can pay per year: ";
	cin >> payAmount;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

		//Showing variable
		/*float interestShow = prevBalance*(interestRate/100);
		float total = interestShow + prevBalance;
		float newBalance = total - payAmount;*/

	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while (newBal != 0){
		EndYear++;
		cout << fixed << setprecision(2);
		cout << setw(13) << left << EndYear;
		cout << setw(13) << left << prevBal;

		interestShow = prevBal*(interestRate/100);
		cout << setw(13) << left << interestShow;

		total = prevBal + interestShow;
		cout << setw(13) << left << total;

		if (payAmount <= total){
			cout << setw(13) << left << payAmount;
		} else {
			payAmount = total;
			cout << setw(13) << left << payAmount;
		}

		newBal = total - payAmount;
		cout << setw(13) << left << newBal;

		prevBal = newBal;

		
		cout << "\n";
	}	
	
	return 0;
}
