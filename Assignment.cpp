#include <iostream>
#include <iomanip>
#include <windows.h>

double CalcDisc (double, double&);
void display();
void loadingscreen ();
double Sum(double);

using namespace std;

int main(){

	string name[100], id_1[100]; 
	string carcode = " ", car_name = " ", max_name = " ", min_name = " ", response = " ";
	string car_5 [5] = {"Perodua Myvi 1.3L G MT | (Manual) | ", "Proton Saga Standard AT | (Manual) | ", "Proton X50 1.5T Standard | (Manual) | ", "Perodua Axia G AT | (Automatic) | ", "Nissan Almera 1.0L VLP | (CVT) | "};
	string car_7 [5] = {"2021 Perodua Alza | (Manual) | ", "2021 Proton Exora | (Automatic) | ", "2021 Toyoto Avanza | (Automatic) | ", "2021 Honda BR-V | (Automatic) | ", "2021 Mitsubishi Xpander| (Automatic) | "};
	int id = 0, student = 0, car = 0, hour = 0, service = 0, serv = 0, count_1 = 0, count_2 = 0;
	int count_3 = 0, count_4 = 0, max = -1, min = 1000, counter = 1, counter_customer = 0, customer = 0;
	double fee = 0.0, sum = 0.0, totFee = 0.0, serv_fee = 0.0, discFee = 0.0, disc = 0.0;

    loadingscreen();
	
	display();
	
	do{
		cout << "\nEnter your name : " ;
		getline (cin, name[customer]);
		
		cout << "Enter your id (xxxxxx-xx-xxxx): ";
		cin >> id_1[customer];
		
		cout << "What type of car would you like to rent [5 seat or 7 seat] : ";
		cin >> car;
	
		if (car == 5){
			
			cout << "------------------------------------------------------------------------------------------------------"<<endl;
			cout << "\nType Of Car (Seats) [Every rent got 10% student discount]" <<endl;
			cout << "\n5 seats [inc. driver seat] : ";
			cout << "[Car Code]Car Model | (Car Type) |" << endl;
			cout << "\n\t\t\t     [F1]" << car_5 [0] << endl;
			cout << "\n\t\t             6h = RM40| 12h = RM65| 24h = RM120| 42h = RM220 [add. 1 hour = +10]" <<endl;
			cout << "\n\t\t\t     [F2]" << car_5 [1] << endl;
			cout << "\n\t\t             6h = RM50| 12h = RM80| 24h = RM150| 42h = RM280 [add. 1 hour = +10]" <<endl;
			cout << "\n\t\t\t     [F3]" << car_5 [2] << endl;
			cout << "\n\t\t             6h = RM50| 12h = RM80| 24h = RM150| 42h = RM280 [add. 1 hour = +10]" <<endl;
			cout << "\n\t\t\t     [F4]" << car_5 [3] << endl;
			cout << "\n\t\t             6h =RM50| 12h =RM80| 24h =RM150| 42h =RM220 [add. 1 hour = +10]" <<endl;
			cout << "\n\t\t\t     [F5]" << car_5 [4] << endl;
			cout << "\n\t\t             6h = RM50| 12h = RM80| 24h = RM150| 42h = RM280 [add. 1 hour = +10]" <<endl;
			cout << "\n------------------------------------------------------------------------------------------------------" << endl;
			
			cout <<  "Enter your preferred car by their car code [e.g = F3] : " ;
			cin >> carcode;
		
			if (carcode == "F1"){
				
				car_name = "Perodua Myvi 1.3L G MT";
				cout << "How many hour would you like to rent this car (h) : ";
				cin >> hour;
			
				if (hour <= 6){
				
					fee = 40;
					
				}else if (hour <= 12){
				
					fee = 65;
			
				}else if (hour <= 24){
				
					fee = 120;
					
				}else if (hour <= 42){
					
					fee = 220;
				
				}else{
					
					fee = 220 + ((hour - 42) * 10);
					
				}
			}
		
			else if (carcode == "F2"){
				
				car_name = "Proton Saga Standard AT";
				cout << "How many hour would you like to rent this car (h) : ";
				cin >> hour;
				
				if (hour <= 6){
				
					fee = 50;
				
				}else if (hour <= 12){
				
					fee = 80;
			
				}else if (hour <= 24){
				
					fee = 150 ;
					
				}else if (hour <= 42){
				
					fee = 280;
				
				}else{
					
					fee = 280 + ((hour - 42) * 10);
					
				}
	  	 	}
			else if (carcode == "F3"){
				
				car_name = "Proton X50 1.5T Standard";
				cout << "How many hour would you like to rent this car (h) : ";
				cin >> hour;
			
				if (hour <= 6){
				
					fee = 50;
				
				}else if (hour <= 12){
				
					fee = 80;
			
				}else if (hour <= 24){
				
					fee = 150;
					
				}else if (hour <= 42){
				
					fee = 280;
				
				}else{
					
					fee = 280 + ((hour - 42) * 10);
					
				}
		    }
	    
			else if (carcode == "F4"){
				
				car_name = "Perodua Axia G AT";
				cout << "How many hour would you like to rent this car (h) : ";
				cin >> hour;
			
				if (hour <= 6){
				
					fee = 40;
				
				}else if (hour <= 12){
				
					fee = 65;
			
				}else if (hour <= 24){
				
					fee = 120 ;
					
				}else if (hour <= 42){
				
					fee = 220;
				
				}else{
					
					fee = 220 + ((hour - 42) * 10);
					
				}
		    }
	    
			else if (carcode == "F5"){
			
				car_name = "Nissan Almera 1.0L VLP";
				cout << "How many hour would you like to rent this car (h) : ";
				cin >> hour;
			
				if (hour <= 6){
				
					fee = 50;
				
				}else if (hour <= 12){
				
					fee = 80;
			
				}else if (hour <= 24){
				
					fee = 150 ;
				}else if (hour <= 42){
				
					fee = 280;
				
				}else{
					
					fee = 280 + ((hour - 42) * 10);
					
				}
	 		}
	 		
	 		else{
				cout << "\n\t\t\t       -- INVALID CODE --" << endl;
				cout << "\t\t\tPLEASE RERUN THE PROGRAMME AGAIN" << endl;
				return 0;
				}
		}
	
		if (car == 7){
			
			cout << "------------------------------------------------------------------------------------------------------"<<endl;
			cout << "\n\n7 seats [inc. driver seat] : ";
			cout << "[Car Code]Car Model | (Car Type) | (Quantity)" << endl;
			cout << "\n\t\t\t     [F6]" << car_7 [0] << endl;
			cout << "\n\t\t             6h = RM80| 12h = RM150| 24h = RM210| 42h = RM440 [add. 1 hour = +35]" <<endl;
			cout << "\n\t\t\t     [F7]" << car_7 [1] << endl;	
			cout << "\n\t\t             6h = RM80| 12h = RM150| 24h = RM210| 42h = RM440 [add. 1 hour = +35]" <<endl;
			cout << "\n\t\t\t     [F8]" << car_7 [2] << endl;	
			cout << "\n\t\t             6h = RM90| 12h = RM155| 24h = RM220| 42h = RM440 [add. 1 hour = +35]" <<endl;
			cout << "\n\t\t\t     [F9]" << car_7 [3] << endl;	
			cout << "\n\t\t             6h = RM90| 12h = RM155| 24h = RM220| 42h = RM440 [add. 1 hour = +35]" <<endl;
			cout << "\n\t\t\t     [F10]" << car_7 [4] << endl;	
			cout << "\n\t\t             6h = RM90| 12h = RM155| 24h = RM220| 42h = RM440 [add. 1 hour = +35]" <<endl;
			cout << "\n------------------------------------------------------------------------------------------------------" << endl;
		
			cout <<  "Enter your preferred car by their car code [e.g = F6] : " ;
			cin >> carcode;
		
			if (carcode == "F6"){
				
				car_name = "2021 Perodua Alza";
				cout << "How many hour would you like to rent this car (h) : ";
				cin >> hour;
				
				if (hour <= 6){
				
					fee = 80;
				
				}else if (hour <= 12){
				
					fee = 150;
			
				}else if (hour <= 24){
				
					fee = 210;
					
				}else if (hour <= 42){
				
					fee = 440;
				
				}else{
					
					fee = 440 + ((hour - 42) * 35);
					
				}
			}
		
			else if (carcode == "F7"){
				
				car_name = "2021 Perodua Exora";
				cout << "How many hour would you like to rent this car (h) : ";
				cin >> hour;
			
				if (hour <= 6){
				
					fee = 80;
				
				}else if (hour <= 12){
				
					fee = 150;
			
				}else if (hour <= 24){
				
					fee = 210;
					
				}else if (hour <= 42){
				
					fee = 440;
				
				}else{
					
					fee = 440 + ((hour - 42) * 35);
					
				}
	 		}
			else if (carcode == "F8"){
				
				car_name = "2021 Toyota Avanza";
				cout << "How many hour would you like to rent this car (h) : ";
				cin >> hour;
			
				if (hour <= 6){
				
					fee = 90;
				
				}else if (hour <= 12){
				
					fee = 155;
			
				}else if (hour <= 24){
				
					fee = 220;
					
				}else if (hour <= 42){
				
					fee = 440;
				
				}else{
					
					fee = 440 + ((hour - 42) * 35);
					
				}
			}
	    
			else if (carcode == "F9"){
				
				car_name = "2021 Honda BR-V";
				cout << "How many hour would you like to rent this car (h) : ";
				cin >> hour;
			
				if (hour <= 6){
				
					fee = 90;
				
				}else if (hour <= 12){
				
					fee = 155;
			
				}else if (hour <= 24){
				
					fee = 220;
					
				}else if (hour <= 42){
				
					fee = 440;
				
				}else{
					
					fee = 440 + ((hour - 42) * 35);
					
				}
	  		}
	    
			else if (carcode == "F10"){
				
				car_name = "2021 Mitsubishi Xpander";
				cout << "How many hour would you like to rent this car (h) : ";
				cin >> hour;
			
				if (hour <= 6){
				
					fee = 90;
				
				}else if (hour <= 12){
				
					fee = 155;
			
				}else if (hour <= 24){
				
					fee = 220 ;
					
				}else if (hour <= 42){
				
					fee = 440;
				
				}else{
					
					fee = 440 + ((hour - 42) * 35);
					
				}
	   		}
	   		
	   		else {
				cout << "\n\t\t\t       -- INVALID CODE --" << endl;
				cout << "\t\t\tPLEASE RERUN THE PROGRAMME AGAIN" << endl;
				return 0;
			}
	   		
		}
		
		totFee = fee;
		
		cout << "Do you want additional services? [1-Yes|2-No] : ";
		cin >> serv;
			
		while (serv == 1 && counter <= 4){
				
			cout << "\n\nAdditional Services Available : [1]Health Insurance 24h for only RM25 !! " << endl;
			cout << "\n\t\t\t        [2]Repair Coverage for only RM50 !!" << endl;
			cout << "\n\t\t\t        [3]Air Bag Installation for only RM350 !!" << endl;
			cout << "\n\t\t\t        [4]Full Tank for only RM200 !!" << endl;
				
			cout << "\nWhich additional services do you want? : ";
			cin >> service;
			
			switch (service){
				
				case 1:
					
					serv_fee = serv_fee + 25;
					totFee = totFee + serv_fee;
					count_1++;
					break;
						
				case 2:
					
					serv_fee = serv_fee + 50;
					totFee = totFee + serv_fee;
					count_2++;
					break;
						
				case 3:
					
					serv_fee = serv_fee + 350;
					totFee = totFee + serv_fee;
					count_3++;
					break;
					
				case 4:
					
					serv_fee = serv_fee + 200;
					totFee = totFee + serv_fee;
					count_4++;
					break;
					
				default:
					
					cout << "\n\t\t\t       -- INVALID CODE --" << endl;
					cout << "\t\t\tPLEASE RERUN THE PROGRAMME AGAIN" << endl;
					return 0;
					break;
					
			}
			
			if (counter < 4){
				
				cout << "Do you want to add more? [1-Yes | 2-No] : ";
				cin >> serv;
				
			}
			
			counter++;	
		}
		
			
		if (count_1 > max){
				
			max_name = "Health Insurance 24h";
			max = count_1;
					
		}
		
		if (count_2 > max){
				
			max_name = "Repair Coverage";
			max = count_2;
					
		}
			
		if (count_3 > max){
				
			max_name = "Air Bag Installation";
			max = count_3;
					
		}
			
		if (count_4 > max){
				
			max_name = "Full Tank";
			max = count_4;
					
		}
				
		if (count_1 < min){
				
			min_name = "Health Insurance 24h";
			min = count_1;
					
		}
			
		if (count_2 < min){
				
			min_name = "Repair Coverage";
			min = count_2;
					
		}
			
		if (count_3 < min){
				
			min_name = "Air Bag Installation";
			min = count_3;
			
		}
		
		if (count_4 < min){
				
			min_name = "Full Tank";
			min = count_4;
					
		}
		
		cout << "Are you a student? [1-Yes|2-No] : " ;
		cin >> student;
	
		if (student == 1){
		
			cout << "Enter your student id number : " ;
			cin >> id;
			
			discFee = CalcDisc (totFee, disc);
		
		}
		
		cout << fixed << setprecision(2) << showpoint;
		cout << "\n***********************************************************" << endl;
		cout << "\t\tHere's your receipt" << endl;
		cout << "Name\t\t\t\t: " << name[customer] << endl;
		cout << "Id\t\t\t\t: " << id_1[customer] << endl;
		if (student == 1){
			cout << "Student's id\t\t\t: " << id << endl;
		}
		cout << "Preferred car's seat\t\t: " << car << endl;
		cout << "Preferred car's type\t\t: " << car_name << endl;
		cout << "Time(Hours) rented the car\t: " << hour << endl;
		cout << "Basic Fee\t\t\t: RM" << fee << endl;
		cout << "Service's Fee\t\t\t: RM" << serv_fee << endl;
		cout << "Total Fee\t\t\t: RM" << totFee << endl;
		if (student == 1){
			cout << "Total Fee after discout\t\t: RM" << discFee << endl;
		}
		cout << "\n***********************************************************" << endl;
		
		cout << "\nDo you want enter another customer? [Y/y - Yes | N/n - No]: ";
		cin >> response;
		
		counter_customer++;
		customer++;
		
		if (student == 1){
			
			sum += discFee;
			
		}else{
			
			sum += Sum(totFee);
			
		}
		
		cin.ignore();
		
	}while (response == "Y" || response == "y");
	
	cout << "\n***************************************************************" << endl;
	cout << "\t\t\tOverall Report" << endl;
	cout << "Total profit is\t\t\t\t: RM" << sum << endl;
	cout << "Total number of customers in a day\t: " << counter_customer << endl;
	cout << "The most chosen additional services is\t: " << max_name << endl;
	cout << "The least chosen additional services is\t: " << min_name << endl;
	cout << "\n***************************************************************" << endl;
	
	cout << "\n**********************************************************" << endl;
	cout << "\t\t\tCustomer History" << endl;
	for (int x = 0; x < counter_customer; x++){
		
    	cout << "[" << x << "] " << name[x] << "\t\t\t [" << id_1[x] << "]" << endl;
    	
    }
	cout << "\n**********************************************************" << endl;
	
	
	return 0;
	
}

double Sum(double totfee){
	
	double sum = 0.0;
	sum += totfee;
	
	return sum;
	
}

void display (){
	
	cout << "\n\t\t--------------------------------------------------"<< endl;
	cout << "\t\t\tWELCOME TO CAR-RENTAL-SERVICES.COM" << endl;
	cout << "\t\t--------------------------------------------------" << endl;
			
}

void loadingscreen (){
	
	cout << "\t\t\t\t\tLoading..." << endl;
	
    for(int count = 0; count < 102; count++){
    	
        cout << "=" ;
        fflush(stdout);
        Sleep(1);
        
    }
}

double CalcDisc (double TotalFee, double& discfee){
	
	discfee = 0.9;
	double discFee = 0.0;
	discFee = discfee * TotalFee;
	return discFee;
	
}


