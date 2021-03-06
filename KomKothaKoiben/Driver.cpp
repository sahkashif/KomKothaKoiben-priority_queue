#include <iostream>
#include"Call.h"
#include "PhoneNumber.h"
#include "Customer.h"
#include "Company.h"

using namespace std;

void runner()
{
	//phone numbers
	PhoneNumber numOne, numTwo, numThree, numFour, numFive, numSix, numSeven, numEight, numNine, numTen, numEleven, numTwelve, numTherteen, numFourteen, numFifteen;

	numOne.set_phone_number("01783511730");
	numOne.set_operator_name("GrameenPhone");

	numTwo.set_phone_number("01715583543");
	numTwo.set_operator_name("GrameenPhone");

	numThree.set_phone_number("01998021382");
	numThree.set_operator_name("BanglaLink");

	numFour.set_phone_number("01675743091");
	numFour.set_operator_name("KomKothaKoiben");

	numFive.set_phone_number("01815565307");
	numFive.set_operator_name("Robi");

	numSix.set_phone_number("01883511730");
	numSix.set_operator_name("Robi");

	numSeven.set_phone_number("01615583543");
	numSeven.set_operator_name("KomKothaKoiben");

	numEight.set_phone_number("01598021382");
	numEight.set_operator_name("Teletalk");
	//end of phone number declaration


	//setting Call objects


	Call call("01738539000", "Z", spouse);
	call.set_call_duration(44.44);

	Call call1("01738539001", "Y", Child);
	call1.set_call_duration(200.02);

	Call call2("01738539002", "Z", Parent);
	call2.set_call_duration(55.59);

	Call call3("01738539003", "V", spouse);
	call3.set_call_duration(2400.00);

	Call call4("01738539004", "U", Sibling);
	call4.set_call_duration(56.71);

	Call call5("01738539045", "T", spouse);
	call5.set_call_duration(50.00);

	Call call6("01738539045", "S", Friend);
	call6.set_call_duration(60.00);

	Call call7("01738539046", "R", Child);
	call7.set_call_duration(60.00);

	Call call8("01738538455", "Q", Cousins);
	call8.set_call_duration(1200.2);

	Call call9("01738538466", "P", Significant);
	call9.set_call_duration(15.15);

	Call call10("01738578980", "O", Boss);
	call10.set_call_duration(120.2);

	Call call11("01738539077", "N", Subordinate);
	call11.set_call_duration(10.10);

	Call call12("01715583544", "M", Cousins);
	call12.set_call_duration(0.00);

	Call call13("01783511777", "L", Cousins);
	call13.set_call_duration(1200.2);

	Call call14("01918880000", "K", spouse);
	call14.set_call_duration(15.15);

	Call call15("01738578999", "J", Boss);
	call15.set_call_duration(120.2);

	Call call16("01738539555", "I", Subordinate);
	call16.set_call_duration(10.10);

	Call call17("01738539222", "H", Friend);
	call17.set_call_duration(0.00);

	Call call18("01738538888", "G", Cousins);
	call18.set_call_duration(1200.2);

	Call call19("01686955769", "F", Significant);
	call19.set_call_duration(15.15);

	Call call20("01815565300", "E", Boss);
	call20.set_call_duration(120.2);

	Call call21("01741200001", "D", Subordinate);
	call21.set_call_duration(10.10);

	Call call22("01741888801", "D", Uncle);
	call22.set_call_duration(10.10);



	//Setting Customer Details 

	Customer customer;
	customer.set_name("A");
	customer.set_father_name("Anudip");
	customer.set_mother_name("Promila");
	string nid = "19992222341";
	char customerNID[11];
	for (int index = 0; index < 11; index++)
	{
		customerNID[index] = nid[index];
	}
	customer.set_age(19);
	customer.set_gender('M');
	customer.set_national_ID(customerNID);
	customer.set_present_address("Dhaka");
	customer.set_permanent_address("Mymensingh");
	customer.set_marital_status(false);
	customer.set_customer_index(1);
	customer.set_eye_color("Brown");
	customer.set_hair_color("Black");
	customer.set_height(5.5);
	customer.set_weight(42);
	customer.insert_phone_number(numOne);
	customer.insert_phone_number(numTwo);
	customer.insert_phone_number(numThree);


	Customer customer1;
	customer1.set_name("B");
	customer1.set_father_name("Shelu");
	customer1.set_mother_name("Hasan");
	string nid1 = "19992222334";
	char customerNID1[11];
	for (int index1 = 0; index1 < 11; index1++)
	{
		customerNID1[index1] = nid1[index1];
	}
	customer1.set_age(20);
	customer1.set_gender('M');
	customer1.set_national_ID(customerNID1);
	customer1.set_present_address("Mohammadpur,Dhaka");
	customer1.set_permanent_address("Nowakhali");
	customer1.set_marital_status(false);
	customer1.set_customer_index(2);
	customer1.set_eye_color("Browns");
	customer1.set_hair_color("Blacks");
	customer1.set_height(6.5);
	customer1.set_weight(45);
	customer1.insert_phone_number(numFour);
	customer1.insert_phone_number(numFive);
	customer1.insert_phone_number(numSix);


	Customer customer2;
	customer2.set_name("C");
	customer2.set_father_name("Nasir");
	customer2.set_mother_name("Shahida");
	string nid2 = "19972222315";
	char customerNID2[11];
	for (int index2 = 0; index2 < 11; index2++)
	{
		customerNID2[index2] = nid2[index2];
	}
	customer2.set_age(23);
	customer2.set_gender('M');
	customer2.set_national_ID(customerNID2);
	customer2.set_present_address("Mohammadpur,Dhaka");
	customer2.set_permanent_address("Dhaka");
	customer2.set_marital_status(true);
	customer2.set_customer_index(3);
	customer2.set_eye_color("Blue");
	customer2.set_hair_color("Brown");
	customer2.set_height(6.0);
	customer2.set_weight(50.0);
	customer2.insert_phone_number(numSeven);
	customer2.insert_phone_number(numEight);

	Company customerList;
	customerList.put_customer_details(customer);
	customerList.put_customer_details(customer1);
	customerList.put_customer_details(customer2);



	customerList.insert_call_in_database(customer, numTwo, call);
	customerList.insert_call_in_database(customer, numOne, call1);
	customerList.insert_call_in_database(customer, numOne, call2);

	customerList.insert_call_in_database(customer1, numFour, call3);
	customerList.insert_call_in_database(customer1, numFour, call4);
	customerList.insert_call_in_database(customer1, numFour, call5);
	customerList.insert_call_in_database(customer1, numFour, call6);
	customerList.insert_call_in_database(customer1, numFour, call7);
	customerList.insert_call_in_database(customer1, numFive, call8);
	customerList.insert_call_in_database(customer1, numFive, call9);
	customerList.insert_call_in_database(customer1, numFive, call10);
	customerList.insert_call_in_database(customer1, numFive, call11);
	customerList.insert_call_in_database(customer1, numFive, call12);
	customerList.insert_call_in_database(customer1, numSix, call12);
	customerList.insert_call_in_database(customer1, numSix, call14);
	customerList.insert_call_in_database(customer1, numSix, call15);
	customerList.insert_call_in_database(customer1, numSix, call16);
	customerList.insert_call_in_database(customer1, numSix, call17);

	customerList.insert_call_in_database(customer2, numSeven, call18);
	customerList.insert_call_in_database(customer2, numSeven, call19);
	customerList.insert_call_in_database(customer2, numEight, call20);
	customerList.insert_call_in_database(customer2, numEight, call21);
	customerList.insert_call_in_database(customer2, numEight, call22);

	customerList.print_phone_call_list(customer);
	customerList.print_phone_call_list(customer1);
	customerList.print_phone_call_list(customer2);
}

int main()
{

	runner();
	
}


