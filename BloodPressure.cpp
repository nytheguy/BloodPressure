#include <iostream>
#include <string>

using namespace std;

class BloodPressure {

private:
  string name,category;
  int systolic, diastolic;

public:
  inline void setName(string name) {this->name = name;}
  inline void setSystolic (int systolic) {this->systolic = systolic;}
  inline void setDiastolic (int diastolic) {this->diastolic = diastolic;}
  inline void setCategory (string category) {this->category = category;}
  inline string getName() {return name;}
  inline int getSystolic() {return systolic;}
  inline int getDiastolic() {return diastolic;}
  inline string getCategory() {return category;}

};

int main() {

BloodPressure patient;
string name, category;
int systolic, diastolic;

cout << "Enter name of patient: " ;
cin >> name;
patient.setName(name);
cout << "Enter " << patient.getName() << "'s systolic number: ";
cin >> systolic;
patient.setSystolic(systolic);
cout << "Enter " << patient.getName() << "'s diastolic number: ";
cin >> diastolic;
patient.setDiastolic(diastolic);

if (systolic < 120 && diastolic < 80 ){
  category = "Normal";
  patient.setCategory(category);
} else if ((systolic >= 120 && systolic <= 129) && diastolic < 80) {
  category = "Elevated";
  patient.setCategory(category);
} else if ((systolic >= 130 && systolic <= 139) || (diastolic >= 80 && diastolic <= 89)) {
  category = "HBP - Stage 1";
  patient.setCategory(category);
} else if (systolic >= 140 || diastolic >= 90) {
  category = "HBP - Stage 2";
  patient.setCategory(category);
}

cout << "Below is " << patient.getName() <<"'s blood pressure rating: " << endl;
cout << "-------------------------------" << endl;
cout << "Name of patient: " << patient.getName() << endl;
cout << "Blood Pressure Rating: " << patient.getSystolic() << "/" << patient.getDiastolic() << endl;
cout << "Blood Pressure Category: " << patient.getCategory() << endl;

  return 0;
}
