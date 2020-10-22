/*
project 
expense management
managing expenses such as:-

1  INTERFACE TO ACCEPT ACTUAL EXPENSE


1- Expenses to attend a workshop
	1 TA TRAVELLING ALLOWANCESS  (max of 3 tieer ac ticket upto Rs.3500/-)
	2 DA DEARNESS ALLOWANCES	(food expenses and hotel expenses)
											city type 1 (capitals)  rs. 500/- per day
											city type 2 (other)		rs. 400/- ,,
	3 Exttra Expenses
			category 1 employee -> 2000/-
			category 2 employee -> 1500/-
			category 3 employee -> 1000/-

2- Expenses to attend any sports event
	1 TA TRAVELLING ALLOWANCESS  (max of sleeper calss within 2000km)
	2 DA DEARNESS ALLOWANCES	(food expenses and hotel expenses)
											city type 1 (capitals)  rs. 250/- per day
											city type 2 (other)		rs. 200/- ,,
	3 Exttra Expenses
			category 1 employee (faculty) -> 2000/-
			for student it is not allowed

3  TO attend any conference
	1 Registration fee
		1 tire 1 (7000/-)
		2 tire 2 (4000/-)
		3 tire 3 (2500/-)
	2 TA TRAVELLING ALLOWANCESS  (max of 3 tieer ac ticket upto Rs.3500/-
	3 DA DEARNESS ALLOWANCES	(food expenses and hotel expenses)
											city type 1 (capitals)  rs. 500/- per day
											city type 2 (other)		rs. 400/- ,,
	4 Exttra Expenses
			category 1 employee -> 2000/-
			category 2 employee -> 1500/-
			category 3 employee -> 1000/-

			
*/
/* (next module)
---------------------------------SUBMIT ADVANCE APLICATION---------------------------------------------------------------------------
Apply for ADVANCE

We need to design an interface which will allow you TO ENTER TENTATIVE  expenseses

1- take input the event 
	a- interface going to accept tantative data
		 1- DA per day
		 2- TA (To and Fro)
		 3- No. of days (maximum 6 days is allowed for DA)  // it is required to calculate total DA
	
2- DISPLAY THE TOTAL TANTATIVE AMOUNT (advance)
3- Submit the data for advance (you need your registration number or employee id)
4-  


---------------------------------VIEW ADVANCE APPLICATION-------------------------------------------------------------------------------------
No need to enter any empid or registration no. after loging into the system if user is the financial officer of the organisation
all advance application need to be displayed one by one.

Before granting the application officer needs to check total amount is more or less than 50000/-
if advance is more than 50000/- only MAX 50000 will be alloted not more than it as advance

	1- show advance Application
	2 ACCEPT/ REJECT APPlication
	
--------------------------------------------Audit bills---------------------------------------------------------------------------------------------------------

An interface need to opem to ask for the following data from the participant
	1- per day actual DA
	2- No. of days
	3- REGISTRATION FEE
	4- ALL TA expenses
		a- from source tom destination
		b- from dsetination to source
	5- SUBMIT THE DATA to Audit officer  (you need empid of audit officer)
	
-------------------------------------------------------------------------------------------------------------------------------------------------------
ANOTHER interface will open to verify the amounts of different heads according to the university rules

1- after the login by the auditor of the bills needs to be display one by one 
2- if participant satisfy all the rules than following casese can be considered
	A- if university allow maximum expenses for an event is 65000/- and participant spent an amount less than 50000/- then university will be given 
	incentive as 25% of the reamaining amount
	
	B- if university found expenses did by the participant are not satisfyable by the audit officer, than participant needs to provide justification.
	
	 
----------------------------------------------------------------------------------------------------------------------------------------------------------
file manegement, class with constructor, composition, inheritance, const member function, std::string class, function overloading , static data member,

what not to use-  friend function

hints- when you pass a file pointer as a function argument pass it as reference this will reduce project compilation time.
		use your own header file (declaraation of all global functions)
		implementation needs to be written in .cpp file
		do not use multiple inheritance
		do not use c-style string (character array)
		during logged in password should be reflected as encrypted character
		
		
		date of sumbission 8th april 2020
*/
	
